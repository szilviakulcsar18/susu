#include <iostream>

using namespace std;

int lnko(int a,int b){

    while(a!=b){
    if(a>b){
        a-=b;
    }
    else{
        b-=a;
    }
  }
  return a;
}

int lkkt(int a,int b){
    return a*b/lnko(a,b);
}
int main()
{
    int a=6,b=4;
    cout<<"lkkt="<<lkkt(a,b)<<endl;
    cout<<"lnko="<<lnko(a,b)<<endl;
    return 0;
}
