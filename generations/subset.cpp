#include <iostream>
#include <string>
using namespace std;


void subset(string c, int n, int h=0){
    static string answer = "";
    if(h == n){
        cout << "-  " << answer << endl;

    } else{
        subset(c, n, h+1);
        answer += c[h];
        subset(c, n, h+1);
        answer.pop_back();
    }
    

}

int main(){

    subset("AbCdE", 5);
}