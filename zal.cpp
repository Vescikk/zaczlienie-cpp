
#include <iostream>
using namespace std;
int main(){

    const int n = 8;
    int tab[8] = { 7,4,20,10,6,10,11,2 };
    int temp = 0;
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n && tab[i] > tab[i + 1]) {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " " ;
    }
}

