// Using array data to create histogram
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
       int sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        sum = sum + i;
    }
    cout << "Total of array elements : " << sum << endl;
    return(0);

}
