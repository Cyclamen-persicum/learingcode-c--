#include <stdio.h>
#include <math.h>
int main()

/*integral*/

{
  float integral (float a,float b,float (*p)(float));
  float f1(float);
  float f2(float);
  float c,d;
  int n;
  printf ("please choose c and d:");
  scanf ("%f,%f",&c,&d);
  printf ("please choose 1 or 2:");
  scanf ("%d",&n);
  printf ("please output result:");
  if(n==1)  integral (c,d,f1);
    else    integral (c,d,f2);
  return 0;
}
float integral (float a,float b,float (*p)(float))
{
  float s, h, y;
  int n;
  unsigned int i;
  s = 0;//( (*p)(a) + (*p)(b) ) /2.0;
  n = 100;
  h = (b-a)/n;
  for(i=1; i<=n; i++)
  s+=h*(*p)(a+i*h);
  //y = s * h;
  printf ("%f",s);
  //return y;
}
float f1(float x)
{
 float f;
 f = 1 ;
 return f;
}

float f2(float x)
{
 float f;
 f = 1 + x ;
 return f;
}