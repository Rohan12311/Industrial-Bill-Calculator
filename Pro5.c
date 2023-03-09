#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
float ab;
printf("Enter your present unit of KVAH: ");
scanf("%f",&a);
printf("Enter your past unit of KVAH: ") ;
scanf("%f",&b);
printf("Enter your present unit of KWH: ");
scanf("%f",&c);
printf("Enter your past unit of KWH: ") ;
scanf("%f",&d);
e=(a-b)*50;
f=(c-d)*50;
printf("Bill unit in KVAH: %f\n",e);
printf("Bill unit in KWH: %f",f);
printf("\nEnter your sanctioned Load you applied : ");
scanf("%f",&g);
printf("\nEnter your sanctioned Load you have used : ");
scanf("%f",&h);
printf("Enter any due remaing: ");
scanf("%f",&k);
if(h>g)
{
    i=h-g;
    printf("We will charged you 1000 rs per 100 unit\n");
    printf("Your extra unit : %f",i);
    j=(f/100)*1000;
    l=(157.808*g)/30;
    printf("Enter days in month");
    scanf("%f",&ab);
        m=l*ab;
        n=e*6.750;
        o=f*0.40;
        p=31*5;
        q=31*0.10;
        r=((m+n+o)*2)/100;
        printf("\nEnergy charges is : %f",n);
        printf("\nfixed charge is : %f",m);
        printf("\nFlue charges is : %f",o);
        printf("\nremaing due charges : %f",k);
        printf("\nElectric charges : %f",q);
        printf("\nMulciple Tax : %f",r);
        printf("\nPenalty charges in sanctioned Load : %f",j);
        printf("\ntotal charges are : %f",(n+m+o+p+k+q+r+j));

        
}
else
{
    l=(157.808*g)/30;
      printf("Enter days in month : ");
      scanf("%f",&ab);
      m=l*ab;
        n=e*6.750;
        o=f*0.40;
        p=31*5;
        q=31*0.10;
        r=((m+n+o)*2)/100;
        printf("\nEnergy charges is : %f",n);
        printf("\nfixed charge is : %f",m);
        printf("\nFlue charges is : %f",o);
        printf("\nremaing due charges : %f",k);
        printf("\nElectric charges : %f",q);
        printf("\nMulciple Tax : %f",r);
        printf("\ntotal charges are : %f",(n+m+o+p+k+q+r+j));
}
}