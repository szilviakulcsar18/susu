#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,m;
    int a[100][100];

    cin>>n;
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<n;oszlop++){
            if(sor==oszlop){
                a[sor][oszlop]=0;}
            if(oszlop>sor){
                a[sor][oszlop]=rand();}
            if(sor>oszlop){
                a[sor][oszlop]=-rand();
            }
        }
    }
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<n;oszlop++){
        cout<<a[sor][oszlop]<<" ";}
    cout<<endl;
    }
}

