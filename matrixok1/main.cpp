#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int a[n][m];

    cin>>n>>m;
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<m;oszlop++){
            cout<<"a["<<sor<<"]["<<oszlop<<"]=";
            cin>>a[sor][oszlop];
        }
    }
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<m;oszlop++){
        cout<<a[sor][oszlop]<<" ";}
    cout<<endl;
    }
}
