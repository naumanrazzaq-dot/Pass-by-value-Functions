#include <iostream>

using namespace std;


     void passbyval(int arr[]){

    arr[0]=20;
     }
int main()
{
    int arr[]={32,43,5,3,56};
    cout<<arr[0]<<endl;
    passbyval(arr);
    cout<<arr[0];

    return 0;
}
