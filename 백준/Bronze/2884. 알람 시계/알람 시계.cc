#include <iostream>
using namespace std;

int main()
{
    int hour, min;
    cin >> hour >> min;
    min -=45;
    while(1){
        if(min<0){
            hour -=1;
            min +=60;
        }
        else if (hour<0){
            hour +=24;
        }
        else{
            break;
        }
        
    }
    cout << hour << " " << min;
}