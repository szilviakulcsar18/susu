#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int F=1,M=1;
    for(int sor=0;sor<2;sor++){
        for(int oszlop=0;oszlop<2;oszlop++){
            cout<<"a["<<sor<<"]["<<oszlop<<"]=";
            cin>>a[sor][oszlop];
            if(oszlop==sor){
                F=F*a[sor][oszlop];
            }
            if(sor+oszlop==0){
                M=M*a[sor][oszlop];
            }
            }
    cout<<"det(a)="<<F-M;
    return 0;
}
}
