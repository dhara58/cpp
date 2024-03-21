#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char a='A';

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<< a<<endl;
            a++;
        }
           cout<<endl;
    }
        return 0;
}