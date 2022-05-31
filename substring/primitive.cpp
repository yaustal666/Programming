// Just primitive substring search
// 
// yaustal666
#include <fstream>
#include <string>
#include <vector>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

void primitive(string& str, string& substr, int str_len, int substr_len){

    if(substr_len > str_len) return;

    int i = 0;
    while(i <= str_len - substr_len){

        if(substr[0] == str[i]){

            if(substr_len == 1){
                fout << i << " ";
            } else {
                int j;
                for (j = 1; j < substr_len; j++)
                {
                    if(substr[j] != str[i+j]) break;
                }
                
                if(j == substr_len) fout << i  << " ";
            }

        }
        i++;
    }
    return;
}
