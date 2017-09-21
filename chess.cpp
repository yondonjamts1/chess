#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
int count,a,k,b[100],m,n;
void re1(int,int);
void re2(int,int);
void re3(int,int);
void re4(int,int);
void re5(int,int);
void re6(int,int);
void re7(int,int);
void re8(int,int);
char *fname[] = { "1",
		  "2",
		  "3",
		  "4",
		  "5",
		  "6",
		  "7"
		};
void hewleh(int l)
{ setcolor(11);
 switch(l)
  {
   case(1): outtextxy(50+5*k,50+5*k,fname[0]); break;
   case(2): outtextxy(50+5*k,50+5*k,fname[1]); break;
   case(3): outtextxy(50+5*k,50+5*k,fname[2]); break;
   case(4): outtextxy(50+5*k,50+5*k,fname[3]); break;
   case(5): outtextxy(50+5*k,50+5*k,fname[4]); break;
   case(6): outtextxy(50+5*k,50+5*k,fname[5]); break;
   case(7): outtextxy(50+5*k,50+5*k,fname[6]); break;
  }
}
void my_rectangle(int x,int y,int x1,int y1,int b)
 {
   if(x>=20&&x<450&&y<450&&y>=20)
   {
      rectangle(x,y,x1,y1);
      setcolor(b);
   }
 }
   void re1(int i,int j)
  { count++;
   i--;
   j-=2;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else {
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	      re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
       }}
  void re2(int i,int j)
   { count++;
    i-=2;
    j--;
    if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
     else {
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	    re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
      }
   }
  void re3(int i,int j)
   { count ++;
   i-=2;
   j++;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else{
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	   re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
   }
  }
  void re4(int i,int j)
   { count++;
   i--;
   j+=2;
  if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else{
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	   re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
     }}
  void re5(int i,int j)
   { count++;
   i++;
   j+=2;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else{
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	       re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
      }}
  void re6(int i,int j)
   { count++;
   i+=2;
   j++;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else {
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	       re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
       }}
  void re7(int i,int j)
   {count++;
   i+=2;
   j--;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
    else {
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i>=0)&&(j<8)&&count<8)
	       re4(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
    }}
  void re8(int i,int j)
   {count++;
   i++;
   j-=2;
   if(i==m&&j==n)
    { b[k]=count;
       k++;
     hewleh(count);
    }
   else {
	  if((i-1)>=0&&(j-2)>=0&&count<8)
	       re1(i,j);
	  if((i-2)>=0&&(j-1)>=0&&count<8)
	       re2(i,j);
	  if((i-2)>=0&&(j+1)<8&&count<8)
	       re3(i,j);
	  if((i+1)<8&&(j+2)<8&&count<8)
	       re5(i,j);
	  if((i+2)<8&&(j+1)<8&&count<8)
	       re6(i,j);
	  if((i+2)<8&&(j-1)>=0&&count<8)
	       re7(i,j);
	  if((i+1)<8&&(j-2)>=0&&count<8)
	       re8(i,j);
     }}
void re(int i,int j)
{
  re1(i,j);
  re2(i,j);
  re3(i,j);
  re4(i,j);
  re5(i,j);
  re6(i,j);
  re7(i,j);
  re8(i,j);
}
void main()
{clrscr();
  int x,y,ch,k,s=0,f,h,o,min;
 int a[8][8],i,j;
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "e:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }
   x=90;y=40;
  setcolor(BLUE);
  setbkcolor(RED);
  for(i=90,k=0;i<=450;i+=50)
   {
    for(j=40;j<=400;j+=50,k++)
      {
	rectangle(i,j,i+50,j+50);
	if(k%2==0)
	  floodfill(i+5,j+5,BLUE);
     }
     k++;
    }
   while(ch!=27&&s<2)
   {
    ch=getch();
    switch(ch)
    {
       case 77: my_rectangle(x,y,x+50,y+50,13); if(x>=90&&x<400&&y<400&&y>=40) x+=50;   my_rectangle(x,y,x+50,y+50,BLUE); break;
       case 72: my_rectangle(x,y,x+50,y+50,13); if(x>=40&&x<450&&y<450&&y>=90) y-=50;  my_rectangle(x,y,x+50,y+50,BLUE); break;
       case 75: my_rectangle(x,y,x+50,y+50,13); if(x>=140&&x<450&&y<450&&y>=20) x-=50;  my_rectangle(x,y,x+50,y+50,BLUE); break;
       case 80: my_rectangle(x,y,x+50,y+50,13); if(x>=20&&x<450&&y<350&&y>=20) y+=50;   my_rectangle(x,y,x+50,y+50,BLUE); break;
       case 13: if(s==0)
		{ i=(y-40)/50;
		  j=(x-90)/50;}
		 else { m=(y-40)/50;
			n=(x-90)/50;}
		 s++;break;
     }
     }
 re(i,j);
  for(h=0;h<k;h++)
   {
    hewleh(b[h]);
   }
  // hewleh(b[0]);
 getch();
}
