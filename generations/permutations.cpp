// Permutations genertion by
//  ~ ~ ~ reccurent algorithm
//  ~ ~ ~ cycled Narayana algorithm
// 
// yaustal666

#include <iostream>
#include <string>
using namespace std;

void rpermutations(string c, int n, int h=0){
    if(h == n){
        cout << "~  " << c << endl;
    } else {
        for(int i = h; i < n; i++){
            swap(c[h], c[i]);
            rpermutations(c, n, h+1);
        }
    }
}


int find_i(string c, int n){
    for(int i = n-2; i >= 0; i--)
        if(c[i] < c[i+1])
            return i;
    return -1;
}

int find_j(string c, int n, int i){
    for(int j = n-1; j >= 0; j--)
        if(c[j] > c[i])
            return j;
    return -1;
}

void narayana(string c, int n){
    cout << c << endl;

    int i = find_i(c, n);

    while(i != -1){
        int j = find_j(c, n, i);

        swap(c[i], c[j]);

        int a = i+1;
        int b = n-1;
        do{
            swap(c[a], c[b]);
            a++;
            b--;
        }while(a < b);

        cout << c << endl;
        i = find_i(c, n);
    }
}

int main(){
    narayana("123", 3);
}