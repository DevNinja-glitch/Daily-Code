#include <iostream>
using namespace std;
int main()
{
    int arr,num,sum=0;
    cout << "Enter the size of array: ";
    cin >> arr;
    int list[arr];
    int end = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < end; i++)
    {
        cin >> list[i];
    }
    cout << "Enter the Number you want: ";
    cin >> num;
    for (int i = 0; i < end; i++)
    {
        if(list[i]>num){
         sum=sum+list[i];
        }
    }
    cout<<sum;
}
