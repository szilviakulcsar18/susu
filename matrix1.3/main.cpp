#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt")
    int a[100][100];
    int n;
    cin>>n;
    for(int sor=0;sor<n;sor++){
        for(int oszlop=0;oszlop<n;oszlop++){
            cout<<"a["<<sor<<"]["<<oszlop<<"]=";
            in>>a[sor][oszlop];
            if(sor>oszlop && sor+oszlop>n-1){
                cout<<"E haromszog:"<<a[sor][oszlop]<<" ";}
                if(sor<oszlop && sor+oszlop>n-1){
                cout<<"K haromszog:"<<a[sor][oszlop]<<" ";}
                if(sor<oszlop && sor+oszlop<n-1){
                cout<<"D haromszog:"<<a[sor][oszlop]<<" ";}
                if(sor>oszlop && sor+oszlop<n-1){
                cout<<"E haromszog:"<<a[sor][oszlop]<<" ";}
            }
        }
    return 0;
}
