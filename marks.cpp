#include<iostream>
using namespace std;

int main()
{
     int grade,phy,com,bio,chem,mat;
     float per;
     
     cout<<"enter five sub marks"<<endl;
     cin>>phy>>com>>bio>>chem>>mat;
     
     per=phy+com+bio+chem+mat*100/250;

     cout<<"per:"<<per<<endl;
     if(per>=90)
     {
        cout<<"A grade";
     }
     else if(per>=80)
     {
        cout<<"B grade";
     }
     else if(per>=70)
     {
        cout<<"C grade";
     }
     else if(per>=50)
     {
        cout<<"D grade";
     }
     else if(per>=40)
     {
        cout<<"E grade";
     }
     else 
     {
        cout<<"fail";
     }
       return 0;
}