// Realisation Rabin-Karp substring
// search in c++.
// 
// yaustal666
#include <fstream>
#include <string>
#include <vector>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

int hashing(string& s, int pos, int size){

    int res = 0;
    for(int i = pos; i < pos+size; i++){
        res += (int) s[i];
    }
    return res;

}
void rk(string& str, string& substr, int str_len, int substr_len) {
    int subhash = hashing(substr, 0, substr_len);

    for (int i = 0; i <= str_len - substr_len; i++)
    {
        int tryhash;
        if(substr[0] == str[i]) tryhash = hashing(str, i, substr_len);
        else continue;

        if(tryhash == subhash){

            int j;
            for (j = 0; j < substr_len; j++)
            {
                if(substr[j] != str[i+j]) break;
            }
            
            if(j == substr_len) fout << i << " ";

        }
    }
    

}
