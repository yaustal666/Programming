#include <iostream>
#include <string>
using namespace std;

void combinations(string c, int n, int k, int thread=0, int h=0){
    if(h == k){
        cout << c.substr(0, k) << endl;
    } else {
        for(int i = thread; i < n; i++){
            swap(c[h], c[i]);
            combinations(c, n, k, i+1, h+1);
        }
    }
}

int main(){
    combinations("ABCD", 4, 3);
}