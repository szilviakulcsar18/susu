#include <iostream>

using namespace std;

int lnko(int &a,int &b){
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

int lkkt(int &a,int &b){
    return a*b/lnko(a,b);
}
int main()
{
    int a=6;
    int b=4;
    cout<<"lkkt="<<lkkt(a,b)<<endl;
    cout<<"lnko="<<lnko(a,b)<<endl;
    return 0;
}
