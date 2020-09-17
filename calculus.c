#include <stdio.h>
#include <conio.h>
int factorial(int);
void fun();
int main()
{
   printf("\t\t\t\t\t\t CALCULUS IN C PROGRAMME\n\n\n");
   fun();
   printf("\n\t\t\t\tTHANK YOU\n");
    return 0;
}//main
 void fun()
{
		int g,i,b,a,n,c[100],d[100],m[100],A,B,C,h,f;
	char e,k;
	printf("MODE:-\n\n\n a:CLASSIFICATION OF SECOND ORDER PARTIAL DIFFERENTIAL EQUATION \n\n\n b:DERIVATIVE OF POLYNOMIAL OF A DEGREE\n\n\n c:INTEGRATION OF POLYNOMIAL\n\n\n");
	scanf(" %c",&k);
	switch(k)
	{
		case 'a':
		    printf("\n\n1:INFO ABOUT SECOND ORDER PARTIAL DIFFERENTIAL EQUATION  \n\n\n 2:CLASSIFY THE SECOND ORDER PARTIAL DIFFERENTIAL EQUATION\n\n\n");
		    scanf("%d",&n);
		    switch(n)
		    {
	          case 1:
	           printf("\n\nIn mathematics, a partial differential equation (PDE) is a differential equation that contains beforehand unknown multivariable functions \n and their partial derivatives. PDEs are used to formulate problems involving functions of several variables.\n\nPDEs can be used to describe a wide variety of phenomena such as sound, heat, diffusion, electrostatics, electrodynamics,\n fluid dynamics, elasticity, or quantum mechanics.\n\nSome linear, second-order partial differential equations can be classified as parabolic, hyperbolic and elliptic.\n\nsecond Order Partial differential Equation is in the form of \n AUxx+2BUxy+CUyy+lower order terms=0 where U is the Function in terms of x and y.\n\nIf Equation satisfied B^2-AC=0 then it is Parabollic, \n if B^2-AC<0 then it is Elliptic,\n if B^2-AC>0 then it is Hyperbollic \n\n");
               printf("\n\n\ndo u want to search more?(y/n)\n\n");
	char w;
	scanf(" %c",&w);
	if(w=='y')
    {
        printf("\n\n\n3:parabollic\n\n\n 4:elliptic\n\n\n 5:hyperbollic\n\n");
        scanf("%d",&a);
        switch(a)
        {
        case 3:
            printf("\n\nA parabolic partial differential equation is a type of partial differential equation (PDE).\n Parabolic PDEs are used to describe a wide variety of time-dependent phenomena,\n including heat conduction, particle diffusion, and pricing of derivative investment instruments.\n\n Examples of parabollic second order PDE are heat equation,Mean curveture flow,ricci flow.\n\n The basic example of a parabolic PDE is the one-dimensional heat equation,\n Ut=aUxx\n\n");
            break;
        case 4:
            printf("\n\nExamples of elliptic second order PDE are Laplace equation and Poisson equation.\n\n In a sense, any other elliptic PDE in two variables can be considered to be a generalization of one of these equations, as it can always be put into the canonical form.\n\n Uxx+Uyy+lower order terms=0\n\n");
            break;
        case 5:
            printf("\n\nA partial differential equation is hyperbolic at a point P provided that the Cauchy problem is uniquely solvable in a neighborhood of P for \n any initial data given on a non-characteristic hypersurface passing through P.\nHere the prescribed initial data consist of all (transverse) derivatives of the function on the surface up to one less than the order of the differential equation.\n\n Example of Hyperbollic Second Order PDE is Wave equation\n\n");
            break;
        }//switch(a)
    }//if(y/n)
	          break;
	          case 2:
	printf("\n\nFor classification of second order PDE \n\n");
	printf("\nEnter the value of A=  ");
	scanf("%d",&A);
	printf("\nEnter the value of B=  ");
	scanf("%d",&B);
	printf("\nEnter the value of C=  ");
	scanf("%d",&C);
	printf("\n \n \n Second order partial derivative equation is \n %dUxx+%dUxy+%dUyy+........=0 \n \n",A,B*2,C);
	h=(B*B)-(A*C);
	if(A==0 && B==0 && C==0)
	{
	printf("\n \n Equation is First order PDE in the form of \n DUx+FUy+........=0 \n \n ");
}//if first
	else if (h<0)
	{
		printf("\n\n Equation is Elliptic PDE \n \n");
	}//if elliptic
	else if(h>0)
	{
		printf("\n \n \nEquation is Hyperbollic PDE\n \n");
	}//if hyperbollic
	else
	{
		printf("\n \n \nEquation is Parabollic PDE \n \n");
	}//else//switch(n)
		    break;
    }//switch a
	break;
case 'b':
    printf("\n\n\n6:INFO ABOUT DERRIVATION OF POLYNOMIAL \n\n\n 7:FIND THE DERIVATIVE OF POLYNOMIAL \n\n\n");
    scanf("%d",&b);
    switch(b)
    {
        case 6:
 printf("\n\nThe derivative of a function of a real variable measures the sensitivity to change of the function value (output value) with respect to a \n change in its argument (input value). \n Derivatives are a fundamental tool of calculus.\n\nThe derivative of a function of a single variable at a chosen input value,\n when it exists, is the slope of the tangent line to the graph of the function at that point.\n\n ");
        break;
        case 7:
         printf("\n\nTo find the derivative of Polynomial\n\n ");
 printf("\n\nEnter the degree of polynomial: ");
 scanf("%d",&g);
 for(i=g;i>=0;i--)
 {
  printf("\n \nEnter Coefficient of x^%d:  ",i);
  scanf("%d",&c[i]);
 }//for coeff
 printf("\n \nGiven Polynomial is:\n\n");
 for (i=g;i>0;i--)
 {
 printf("(%d)x^%d + ",c[i],i);
}//for
 printf("(%d)",c[0]);
 printf("\n\n");
printf("\nOrder of Derivative You Wish to Calculate: ");
int x;
scanf("%d",&x);
if(g==x)
{
    int y;
    y=factorial(g);
    printf("\n\n%dth derivative is %d\n\n",x,y);
}
else if(g>x)
{
    for (i=g;i>=0;i--)
 {
 d[i]=c[i]*factorial(i)/factorial(i-x);
}//for
    printf("\n\n%dth derivative is \n\n",x);
    for(i=g;i>x;i--)
    {
        printf("%dx^%d+ ",d[i],i-x);
    }
    printf("%d\n\n",d[x]);
    break;
}
else
{
   printf("Error");
}
    }
    break;
case 'c':
    printf("\n\n\n8:INFO ABOUT INTEGRATION \n\n\n 9:FIND THE INTEGRAL OF POLYNOMIAL\n\n\n");
    scanf(" %d",&f);
   switch(f)
   {
    case 8:
printf("\n\nIn mathematics, an integral assigns numbers to functions in a way that can describe displacement, area, volume, \n and other concepts that arise by combining infinitesimal data. \n Integration is one of the two main operations of calculus, with its inverse operation, differentiation, being the other.\n\n ");
     break;
     case 9:
printf("\n\nTo find the Integral of Polynomial\n\n");
printf("\n\nEnter the degree of polynomial:	 ");
 scanf("%d",&h);
 float m[100],n[100];
 for(i=h;i>=0;i--)
 {
  printf("\n\n Enter coefficient of x^%d:  ",i);
 int h,j;
  scanf("%f",&m[i]);
 }//for coeff
 printf("\n\n Given polynomial is:\n\n");
 for (i=h;i>0;i--)
 {
 printf("(%0.2f)x^%d + ",m[i],i);
}//for(i)
printf("(%0.2f)",m[0]);
 for (i=h;i>=0;i--)
 {
 n[i]=m[i]/(i+1);
}//for
 printf("\n\n Integral of Given Polynomial is:\n\n");
 for (i=h;i>0;i--)
 {
 if (n[i]==0)
 printf("");
 else
 printf("(%0.2f)x^%d+",n[i],i+1);
}//for(last)
printf("(%0.2f)x^1",n[0]);
printf("\n\n");
break;
}//switch(f)
break;
	}//switch(k)
printf("\n\nDo you want to continue (y/n)?\n\n");
 scanf(" %c",&e);
 if(e=='y')
  {
      printf("\n\n");
  	fun();
  }//if(y/n)

}
int factorial(int x)
{
    int f=1,i;
    for (i=x;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}

