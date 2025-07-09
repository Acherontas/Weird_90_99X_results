#include "xgen.h"
#include "pthread.h"
#include <iostream>
using namespace std;
//ctor
xgen::xgen(){}
//dtor
xgen::~xgen(){}
//copy ctor
xgen::xgen(const xgen& other){}
//handle self assignment and assignment operator
xgen& xgen::operator=(const xgen& rhs){if (this == &rhs) return *this; return *this;}

int xgen::size_with(string sti){
    int lx;
    int cnt=0;
    char ck;
    for(int i=0;i<=sti.size()-1;i++){
        ck=sti.at(i);
        if(ck!='.'){cnt+=1;}
        if(ck=='.'){lx=1;}
        if(lx==1){break;}
    }
    this->swi=cnt;
   return cnt;
}

void xgen::all_nines_from(int prm){
      string ml_n;
      ml_n.clear();
      int lmk=prm;
      int mlki=this->swi+lmk;
      for(int i=0;i<=mlki;i++){
          //ml_n+="9";
          ml_n+=to_string(this->ar[0]);
          this->in_h[ihn]=stold(ml_n);
          ihn+=1;
      }
}

void xgen::create_nines_from(int param){
        //cout<<"creating \n";
        string fake_string;
        fake_string.clear();
        int stp=0; int xli=0;
        int mlk=this->swi+param;
        for(int i=0;i<=mlk;i++){
            if(stp==1){
                      //fake_string+="0";
                      fake_string+=to_string(this->ar[1]);
                      stp=0;
                      xli=1;
                      //goto A;
                      }
             if(stp==0 && xli==0){
                       //fake_string+="9";
                       fake_string+=to_string(this->ar[0]);
                       stp=1;
                       xli=0;
                       }
             //A:
             this->internal_holder[inh]=stold(fake_string);
             inh+=1;
             if(stp==0 && xli==1){xli=0;}
        }
        //cout<<"created\n";
}

long double xgen::summer(string sti){
     long double rsti;
     char ck;
     int lck;
     for(int i=0;i<=sti.size()-1;i++){
         ck=sti.at(i);
         if(ck!='.'){
                    lck=stoi(&ck);
                    rsti=rsti+lck;
                    }
          if(ck=='.'){
                       break;
                     }
     }
     return rsti;
}
