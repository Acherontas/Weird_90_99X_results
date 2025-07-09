#include <iostream>
#include "xgen.h"
#include <iomanip>
#include "math.h"
using namespace std;

int main(int argc,char** argv)
{
    string sti;
    long double xnmb;
    long double xl;
    long double lxi;
    string lxl;
    int prm=0;
    int preci=0;
    xgen *xg= new xgen();
    cout<<"enter a number \n";
    cin>>sti;
    xnmb=stoll(sti);
    cout<<"enter more than the lenght of number for more 90[X] a number eg 2,3,4 or 0 \n";
    cin>>prm;
    cout<<"enter precision \n";
    cin>>preci;
    xg->size_with(sti);
    lxi=xg->summer(sti);
    cout<<"@ numbers is " <<std::setprecision(preci)<< xnmb <<" with cd of " << lxi <<"\n";
    xg->create_nines_from(prm);
   // for(int i=0;i<=xg->inh-1;i++){
   //     cout<<i << " " <<std::setprecision(preci) << xg->internal_holder[i] <<"\n";
   // }
    cout<<"\n";
    cout<<"90 model \n";

    for(int i=0;i<=xg->inh-1;i++){
       if(xnmb>=xg->internal_holder[i]){xl=xnmb-xg->internal_holder[i];}
       if(xnmb<xg->internal_holder[i]){xl=xg->internal_holder[i]-xnmb;}
       if(xl!=0){
       lxl.clear();
       lxl+=to_string(xl);
       lxi=xg->summer(lxl);
       if(lxi<=9){lxi=lxi;}
       if(lxi>9){
          while(lxi>9){
              lxl.clear();
              lxl+=to_string(lxi);
              lxi=xg->summer(lxl);
              if(lxi<=9){break;}
          }
       }
       }
       if(xl==0){lxl.clear();lxi=0;}
       cout<<i << " " <<std::setprecision(preci) << xg->internal_holder[i] <<" ";
       cout<<" ---> da rst is " <<std::setprecision(preci) << xl <<" " <<std::setprecision(preci)<< lxi <<"\n";
    }

    cout<<"\n";
    cout<<"All nines \n";
    xg->all_nines_from(prm);

    for(int i=0;i<=xg->inh-1;i++){

       if(xnmb>=xg->in_h[i]){xl=xnmb-xg->in_h[i];}
       if(xnmb<xg->in_h[i]){xl=xg->in_h[i]-xnmb;}
       if(xl!=0){
       lxl.clear();
       lxl+=to_string(xl);
       lxi=xg->summer(lxl);
       if(lxi<=9){lxi=lxi;}
       if(lxi>9){
          while(lxi>9){
              lxl.clear();
              lxl+=to_string(lxi);
              lxi=xg->summer(lxl);
              if(lxi<=9){break;}
          }
       }
       }
       if(xl==0){lxl.clear();lxi=0;}
       cout<<i << " " <<std::setprecision(preci) << xg->in_h[i] <<" ";
       cout<<" ---> da rst is " <<std::setprecision(preci) << xl <<" " <<std::setprecision(preci)<< lxi <<"\n";



    }


    return 0;
}
