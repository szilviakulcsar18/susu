#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[100][100];
    int n;
    cin>>n;
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<n;oszlop++){
            cin>>a[sor][oszlop];}
    }
    cout<<"elso sor:";
    for(int oszlop=0;oszlop<n;oszlop++){
        cout<<a[0][oszlop]<<" ";
    }
    cout<<"utolso sor:";
    for(int oszlop=0;oszlop<n;oszlop++){
        cout<<a[n-1][oszlop]<<" ";
    }
    cout<<"elso oszlop:";
    for(int sor=0;sor<n;sor++){
        cout<<a[sor][0]<<" ";
    }
    cout<<"utolso oszlop:";
    for(int sor=0;sor<n;sor++){
        cout<<a[sor][n-1]<<" ";
    }
}
