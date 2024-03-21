#include<iostream>
using namespace std;

int main()
{
     int phy,com,bio,chem,mat,per;
     
     cout<<"enter five sub marks"<<endl;
     cin>>phy>>com>>bio>>chem>>mat;
     
     per=(phy+com+bio+chem+mat);

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