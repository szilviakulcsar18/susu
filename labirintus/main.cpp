#include <iostream>

using namespace std;
const int N=3;
short xlepes[]={-1,0,1,0};
short ylepes[]={0,1,0,-1};

void kiir( char V[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << V[i][j] << " ";
        }

        cout << endl;
    }
}

bool lehet(char V[N][N],int x,int y){
    //kiir(V);
    if(V[x][y]=='F'){
        return false;
    }

    if(V[x][y]=='E'){
        return false;
    }
    if(x<0 || x>N-1){
    return false;
    }
    if(y<0 || y>N-1){
    return false;
    }
     if(x-1>=0 && V[x-1][y]=='M')
         return false;
    if(x+1<N && V[x+1][y]=='M')
        return false;
    if(y-1>=0 && V[x][y-1]=='M')
        return false;
    if(y+1<N && V[x][y+1]=='M')
        return false;
    return true;
}



void backtrack(char V[N][N],int x, int y){
    if(x==N-1 && y==N-1){
        kiir(V);
        return;
    }
    for(int i=0;i<4;i++){
      if (lehet(V,x+xlepes[i],y+ylepes[i]))
      {
          //kiir(V);

          int newx=x+xlepes[i];
          int newy=y+ylepes[i];
          char tempv[N][N];
          for(int x=0;x<N;x++)

             for(int y=0;y<N;y++)
                    tempv[x][y]=V[x][y];


          tempv[newx][newy]='E';
          backtrack(tempv,newx,newy);

      }

    }
}
int main()
{

   char V[3][3]={{'E','_','M'},
                {'_','F','_'},
                {'_','_','_'}};

    backtrack(V,0,0);
}
