#include<iostream>
using namespace std;
int main()
{
    int n,i,num[100];
    double avg;
    double sum=0;
    cout<<"enter the number of elements:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"enter the number:";
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"avg:"<<avg<<n<<"number"<<sum;
    return 0;
}
