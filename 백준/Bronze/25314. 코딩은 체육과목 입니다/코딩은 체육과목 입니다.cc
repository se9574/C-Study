#include <iostream>
using namespace std;

void print_long(int n){
    for(int i=0; i<(n/4); i++){
        cout <<"long ";
    }
}

int main(){
    int n;
    cin >> n;
    print_long(n);
    cout << "int";
    return 0;
}