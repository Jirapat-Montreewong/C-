#include <iostream>
using namespace std;

int main() 
{
    int distance;
    int price = 1;
    cout << "Enter your distance : ";
    cin >> distance;

    if(distance >= 0 && distance <= 1){
        price = 40;
    }else if (distance >= 2 && distance <= 10){
        price = 40+(5*(distance-1));

    }else if (distance >= 11 && distance <= 15){
      price = 85+(4*(distance-10));

    }else if (distance >= 16 && distance <= 20){
      price = 105+(3*(distance-15));

    }else price = 120+(2*(distance-20));
    
    cout <<"Your carefare is " << price << endl;

    return(0);
}