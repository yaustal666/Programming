#include <iostream>
#include <string>
using namespace std;

void accomodations(string c, int n, int k, int h=0){
    if(h == k){
        cout << c.substr(0, k) << endl;
    } else {
        for(int i = h; i < n; i++){
            swap(c[h], c[i]);
            accomodations(c, n, k, h+1);
        }
    }
}

int main(){
    accomodations("ABCD", 4, 3);
}