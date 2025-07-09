#include <iostream>
#include "xgen.h"
#include <iomanip>
#include "math.h"
using namespace std;
    string sti;
    long double xnmb;
    long double xl;
    long double lxi;
    string lxl;
    int prm=0;
    int preci=0;
    xgen *xg= new xgen();
    int x_one;
    int y_one;
    int mp_one[1000];
    int mp_two[1000];
    int mp_three[1000];
    int mp_four[1000];
    int mp_five[1000];
    int mp_x=0;
    int loggz=0;
void main_model(int praxi){
    mp_x=0;
    for(int i=0;i<=xg->inh-1;i++){
       if(praxi==1){
        if(xnmb>=xg->internal_holder[i]){xl=xnmb-xg->internal_holder[i];}
        if(xnmb<xg->internal_holder[i]){xl=xg->internal_holder[i]-xnmb;}
       }
       if(praxi==2){
        if(xnmb>=xg->internal_holder[i]){xl=xnmb+xg->internal_holder[i];}
        if(xnmb<xg->internal_holder[i]){xl=xg->internal_holder[i]+xnmb;}
       }
       if(praxi==3){
        if(xnmb>=xg->internal_holder[i]){xl=xnmb*xg->internal_holder[i];}
        if(xnmb<xg->internal_holder[i]){xl=xg->internal_holder[i]*xnmb;}
       }
       if(praxi==4){
        //if(xnmb>=xg->internal_holder[i]){
        xl=xnmb/xg->internal_holder[i];
        //}
        //if(xnmb<xg->internal_holder[i]){xl=xg->internal_holder[i]/xnmb;}
       }
       if(praxi==5){
         xl=xg->internal_holder[i]/xnmb;
       }
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
       if(loggz==1){
       cout<<i << " " <<std::setprecision(preci) << xg->internal_holder[i] <<" ";
       cout<<" ---> da rst is " <<std::setprecision(preci) << xl <<" " <<std::setprecision(preci)<< lxi <<"\n";}
       if(praxi==1){mp_one[mp_x]=lxi; mp_x+=1;}
       if(praxi==2){mp_two[mp_x]=lxi; mp_x+=1;}
       if(praxi==3){mp_three[mp_x]=lxi; mp_x+=1;}
       if(praxi==4){mp_four[mp_x]=lxi; mp_x+=1;}
       if(praxi==5){mp_five[mp_x]=lxi; mp_x+=1;}
    }
}
    int s_one[1000];
    int s_two[1000];
    int s_three[1000];
    int s_four[1000];
    int s_five[1000];
    int s_x=0;
void secondary_model(int praxi){
    s_x=0;
    for(int i=0;i<=xg->inh-1;i++){
      if(praxi==1){
        if(xnmb>=xg->in_h[i]){xl=xnmb-xg->in_h[i];}
        if(xnmb<xg->in_h[i]){xl=xg->in_h[i]-xnmb;}
       }
       if(praxi==2){
        if(xnmb>=xg->in_h[i]){xl=xnmb+xg->in_h[i];}
        if(xnmb<xg->in_h[i]){xl=xg->in_h[i]+xnmb;}
       }
       if(praxi==3){
        if(xnmb>=xg->in_h[i]){xl=xnmb*xg->in_h[i];}
        if(xnmb<xg->in_h[i]){xl=xg->in_h[i]*xnmb;}
       }
       if(praxi==4){
       // if(xnmb>=xg->in_h[i]){
        xl=xnmb/xg->in_h[i];
        //}
        //if(xnmb<xg->in_h[i]){xl=xg->in_h[i]/xnmb;}
       }
       if(praxi==5){
         xl=xg->in_h[i]/xnmb;
       }
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
       if(loggz==1){
          cout<<i << " " <<std::setprecision(preci) << xg->in_h[i] <<" ";
          cout<<" ---> da rst is " <<std::setprecision(preci) << xl <<" " <<std::setprecision(preci)<< lxi <<"\n";
          }
       if(praxi==1){s_one[s_x]=lxi; s_x+=1;}
       if(praxi==2){s_two[s_x]=lxi; s_x+=1;}
       if(praxi==3){s_three[s_x]=lxi; s_x+=1;}
       if(praxi==4){s_four[s_x]=lxi; s_x+=1;}
       if(praxi==5){s_five[s_x]=lxi; s_x+=1;}
    }
}

int main(int argc,char** argv)
{
    cout<<"enter a number \n";
    cout<<"enter more than the lenght of number for more 90[X] a number eg 2,3,4 or 0 \n";
    cout<<"enter precision \n";
    cout<<"for the model enter the first digit \n";
    cout<<"for the model enter the second digit \n";
    cout<<"for the second model enter the stable is the first always \n";
    cout<<"enter 1 for log show or 0 for not \n";
    xnmb=stoll(argv[1]);
    sti+=to_string(xnmb);
    prm=stoi(argv[2]);
    preci=stoi(argv[3]);
    x_one=stoi(argv[4]);
    xg->ar[0]=x_one;
    y_one=stoi(argv[5]);
    loggz=stoi(argv[6]);
    xg->ar[1]=y_one;
    xg->size_with(sti);
    lxi=xg->summer(sti);
    cout<<"@ numbers is " <<std::setprecision(preci)<< xnmb <<" with cd of " << lxi <<"\n";
    xg->create_nines_from(prm);
    cout<<"\n";
    cout<<xg->ar[0] << " " << xg->ar[1] << " model \n";
    if(loggz==1){cout<<"-\n";}
    main_model(1);
    if(loggz==1){cout<<"\n";
       cout<<"+\n";
    }
    main_model(2);
    if(loggz==1){
    cout<<"\n";
    cout<<"*\n";
    }
    main_model(3);
    if(loggz==1){
    cout<<"\n";
    cout<<"/\n";
    }
    main_model(4);
    if(loggz==1){cout<<"\n";}
    main_model(5);
    if(loggz==1){cout<<"\n";}
    cout<<xg->ar[0] << " " << xg->ar[0] << " model \n";
    xg->all_nines_from(prm);
    if(loggz==1){
    cout<<"\n";
    cout<<"-\n";
    }
    secondary_model(1);
    if(loggz==1){
    cout<<"\n";
    cout<<"+\n";
    }
    secondary_model(2);
    if(loggz==1){
    cout<<"\n";
    cout<<"*\n";
    }
    secondary_model(3);
    if(loggz==1){
    cout<<"\n";
    cout<<"/\n";
    }
    secondary_model(4);
    if(loggz==1){
    cout<<"\n";
    }
    secondary_model(5);
    cout<<"\n";
    cout<<"for model vs model @ the same action \n";
    cout<<"\n";
    cout<<"for - \n";
    for(int i=0;i<=mp_x;i++){
     cout<<std::setprecision(preci) << mp_one[i] << " " <<std::setprecision(preci) << s_one[i] <<"\n";
    }
    cout<<"\n";
    cout<<"for + \n";
    for(int i=0;i<=mp_x;i++){
     cout<<std::setprecision(preci) <<mp_two[i] << " " <<std::setprecision(preci) << s_two[i] <<"\n";
    }
    cout<<"\n";
    cout<<"for * \n";
    for(int i=0;i<=mp_x;i++){
     cout<<std::setprecision(preci) <<mp_three[i] << " " <<std::setprecision(preci) << s_three[i] <<"\n";
    }
    cout<<"\n";
    cout<<"for / \n";
    for(int i=0;i<=mp_x;i++){
     cout<<std::setprecision(preci) <<mp_four[i] << " " <<std::setprecision(preci) << s_four[i] <<"\n";
    }
    cout<<"\n";
    cout<<"for /\ \n";
    for(int i=0;i<=mp_x;i++){
     cout<<std::setprecision(preci) <<mp_five[i] << " " <<std::setprecision(preci) << s_five[i] <<"\n";
    }
    return 0;
}
