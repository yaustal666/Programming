// Realisation Knuth-Morris-Pratt substring
// search in c++.
// 
// yaustal666

#include <fstream>
#include <string>
#include <vector>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

vector<int> prefix(string& substr, int substr_len){

    vector<int> prefixes;
    for (int i = 0; i < substr_len; i++) prefixes.push_back(0);

    
    for (int i = 1; i < substr_len; i++)
    {
        int k = prefixes[i-1];
        while(k > 0 && substr[k] != substr[i]){
            k = prefixes[k-1];
        }
        if (substr[k] == substr[i]) k++;

        prefixes[i] = k;
        
    }
    
    return prefixes;
}
void kmp(string& str, string& substr, int str_len, int substr_len){

    vector<int> pref = prefix(substr, substr_len);
    int k = 0;
    for (int i = 0; i < str_len; i++)
    {
        while(k > 0 && substr[k] != str[i]) k = pref[k-1];
        if(substr[k] == str[i]) k++;
        if(k == substr_len){
            fout << i + 1 - substr_len << " ";
        }
    }
    return;
}