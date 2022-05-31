// Realisation Boyer-Moore substring
// search in c++.
// 
// yaustal666

#include <fstream>
#include <string>
#include <vector>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

void shifts(string& substr, int shift[256], int substr_len)
{
    for (int i = 0; i < 256; i++)
        shift[i] = substr_len;
 
    for (int i = 0; i < (int) substr.size() - 1; i++)
        shift[(int) substr[i]] = substr_len - i - 1;
}

void bm(string& str, string& substr, int str_len, int substr_len)
{ 
    int shift[256];
    shifts(substr, shift, substr_len);
 
    int i = 0; 
    
    while (i <= (str_len - substr_len))
    {
        int j = substr_len - 1;
        
        while (j >= 0 && substr[j] == str[i + j]) j--;
 
        if(j == substr_len - 1) i += shift[(int) str[i+j]];
        else if (j < substr_len - 1 && j >= 0) i += shift[(int) substr[substr_len - 1]];
        else {
            fout << i << " ";
            i++;
        }
    }
}
