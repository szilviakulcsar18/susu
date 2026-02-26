#include <iostream>

using namespace std;
int a,b;
int lnko(){
    int c=a,d=b;
    while(c!=d){
    if(c>b){
        c-=d;
    }
    else{
        d-=c;
    }
  }
  return c;
}

int lkkt(){
    return a*b/lnko();
}
int main()
{
    a=6,b=4;
    cout<<"lkkt="<<lkkt()<<endl;
    cout<<"lnko="<<lnko()<<endl;
    return 0;
}
