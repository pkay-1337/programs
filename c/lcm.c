#include <stdio.h>
int i,h,l,a,b,c;
int lcm(int x, int y){
    for(i = 1; i <= x || i <= y; i++ ) {
        if( x%i == 0 && y%i == 0)
        l = i;
    }
    return (x*y)/l;
}
int hcf(int a,int b,int c){
    for(i = 1; i <= a || i <= b || i <= c; i++ ) {
        if( a%i == 0 && b%i == 0 && c%i == 0)
        h = i;
    }
    return h;
}
int main(){
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("HCF of a & b & c = %d\n",hcf(a,b,c));
    printf("LCM of a & b & c = %d\n",lcm(lcm(a,b),c));
}