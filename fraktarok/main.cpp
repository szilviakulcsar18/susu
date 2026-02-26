#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void sierpinski(int x1,int y1,int x2,int y2,int x3,int y3,int k)

{

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);

    if (k > 1) {


	sierpinski(x1,y1,(x1+x3)/2,(y1+y3)/2,(x1+x2)/2,(y1+y2)/2,k-1);
	sierpinski(x2,y2,(x1+x2)/2,(y1+y2)/2,(x2+x3)/2,(y2+y3)/2,k-1);
	sierpinski(x3,y3,(x1+x3)/2,(y1+y3)/2,(x2+x3)/2,(y2+y3)/2,k-1);
	floodfill((x1+x2+x3)/3,(y1+y2+y3)/3,WHITE);

    }

}



int main()

{

    int a;

    cout << "a=";

    cin >> a;

    int gd,gm;

    gd = gm = 0;

    initgraph(&gd,&gm,"");

    setcolor(WHITE);

    setfillstyle(1,WHITE);

    sierpinski(0,479,639,479,320,0,a);

    cin >> a;

    return 0;

}
