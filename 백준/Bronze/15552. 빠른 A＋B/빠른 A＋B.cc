#include <iostream>
using namespace std;

void add_print(int a, int b){
    cout << a+b << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        add_print(a,b);
    }
}