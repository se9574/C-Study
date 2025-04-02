#include <iostream>
using namespace std;

int main()
{
    int totalPrice,typeNumber,addedPrice,a,b;
    cin >> totalPrice >> typeNumber;
    addedPrice = 0;
    while(typeNumber != 0){
        cin >> a >> b;
        addedPrice += (a*b);
        typeNumber -=1;
    }
    if(totalPrice == addedPrice){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}