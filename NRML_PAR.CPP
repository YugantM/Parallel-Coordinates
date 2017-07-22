#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main(){
clrscr();
int i,j,x,y;
int range[6]={5,60,30,100,100,20};
int M=5,N=6;
int data[5][6]={3,10,5,3,5,3,    //MxN   M= Rows N= Columns
		2,20,15,16,78,5,
		2,30,10,34,56,9,
		4,50,4,33,66,10,
		1,25,19,12,78,11};
int gd=DETECT,gm;

initgraph(&gd,&gm,"");
x=getmaxx();y=getmaxy();
	for(i=0;i<N;i++)
	{
		line(i*x/N,0,i*x/N,y);
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(i!=6)
			setcolor(i+1);
			else
			setcolor(2);

			line(j*x/N,data[i][j]*(y/range[j]),(j+1)*x/N,data[i][j+1]*(y/range[j+1]));
		}
	}

getch();
closegraph();
}