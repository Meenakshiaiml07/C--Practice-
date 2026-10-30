#include <stdio.h>

int isLeap(int y){ return (y%400==0)||(y%4==0 && y%100!=0); }

void primeCheck(){
    int n, f=1; printf("Number: "); scanf("%d",&n);
    if(n<2) f=0; for(int i=2;i*i<=n;i++) if(n%i==0) f=0;
    printf(f?"Prime ✅\n":"Not Prime ❌\n");
}
void factorial(){
    int n; long f=1; printf("Number: "); scanf("%d",&n);
    for(int i=1;i<=n;i++) f*=i;
    printf("Factorial: %ld\n",f);
}
void palindrome(){
    int n, rev=0, t; printf("Number: "); scanf("%d",&n); t=n;
    while(n>0){ rev=rev*10+n%10; n/=10; }
    printf(t==rev?"Palindrome ✅\n":"Not Palindrome ❌\n");
}
void sumDigits(){
    int n,s=0; printf("Number: "); scanf("%d",&n);
    while(n>0){ s+=n%10; n/=10; }
    printf("Sum: %d\n",s);
}
void calendar(){
    int y,m, days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Year: "); scanf("%d",&y);
    printf("Month (1-12): "); scanf("%d",&m);
    if(isLeap(y)) days[1]=29;
    int total=0; for(int i=1900;i<y;i++) total+=isLeap(i)?366:365;
    for(int i=0;i<m-1;i++) total+=days[i];
    int start=(total+1)%7;
    printf("\n  Sun Mon Tue Wed Thu Fri Sat\n");
    for(int i=0;i<start;i++) printf("    ");
    for(int d=1;d<=days[m-1];d++){ printf("%4d",d); if((d+start)%7==0) printf("\n"); }
    printf("\n");
}

int main(){
    int ch;
    printf("=== PANDU's 30 DAYS OF CODE - FINAL PROJECT ===\n");
    while(1){
        printf("\n1.Prime 2.Factorial 3.Palindrome 4.SumDigits 5.Calendar 6.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) primeCheck();
        else if(ch==2) factorial();
        else if(ch==3) palindrome();
        else if(ch==4) sumDigits();
        else if(ch==5) calendar();
        else if(ch==6){ printf("\n🎉 30/30 COMPLETED! Thank you C! 🎉\n"); break; }
        else printf("Wrong choice!\n");
    }
    return 0;
}
