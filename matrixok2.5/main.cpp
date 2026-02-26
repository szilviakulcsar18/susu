#include <iostream>

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
    for(int sor=n;sor>=n/2;sor--){
        for(int oszlop=0;oszlop<n;oszlop++){
            a[sor][oszlop]=a[sor-1][oszlop];
          }
    }

   for(int oszlop=0;oszlop<n;oszlop++){
        a[n/2][oszlop]=n;
    }
    for(int sor=0;sor<n+1;sor++){
        for(int oszlop=0;oszlop<n;oszlop++){
            cout<<a[sor][oszlop]<<" ";}

        cout<<endl;
    }
}

