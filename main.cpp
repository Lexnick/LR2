#include <iostream>
#include <cmath>
long fakt(int b){
    if (b==0||b==1)
        return 1;
    else return fakt(b-1)*b;
}
int main() {
   /* for (unsigned short i=32; i<127; ++i)
        std::cout << static_cast<char>(i)  << std::endl;
    char a=0;
    std::cin>>a;
    if ((a>47)&&(a<58))
        std::cout<<"digit";
    else if (((a>64)&&(a<91))||((a>96)&&(a<123)))
        std::cout<<"letter";
    else
        std::cout<<"unknown";
    int y=0;
    std::cin>>y;
    switch (y % 4) {
        case 0: std::cout<<y;
            break;
        case 1:
            std::cout<<'0';
            break;
        case 2:
            std::cout<<1/static_cast<float>(y);
            break;
        case 3:
            std::cout<<-y;
            break;
    }*/
    double x;
    std::cin>>x;
    double k=x;
    int n=1;
    double l1=round(sin(x)*100)/100;
    while (l1!=k){
        k+=pow(-1, n)*pow(x, 2*n+1)/fakt(2*n+1);
        k=round(k*100)/100;
        n++;
    }
    std::cout<<n-1<<std::endl;
    std::cout<<l1<<std::endl;
    n=1;
    k=x;/*
    double l2=round(sin(x)*pow(10, -3))/pow(10, -3);
    while (l2!=k){
        k+=pow(-1, n)*pow(x, 2*n+1)/fakt(2*n+1);
        k=round(k*100)/100;
        n++;
    }
    std::cout<<n-1<<std::endl;
    std::cout<<l2<<std::endl;
    n=1;
    k=x;
    double l3=round(sin(x)*pow(10, -4))/pow(10, -4);
    while (l3!=k){
        k+=pow(-1, n)*pow(x, 2*n+1)/fakt(2*n+1);
        k=round(k*100)/100;
        n++;
    }
    std::cout<<n-1<<std::endl;
    std::cout<<l3<<std::endl;
    n=1;
    k=x;
    double l4=round(sin(x)*pow(10, -5))/pow(10, -5);
    while (l4!=k){
        k+=pow(-1, n)*pow(x, 2*n+1)/fakt(2*n+1);
        k=round(k*100)/100;
        n++;
    }
    std::cout<<n-1<<std::endl;
    std::cout<<l4<<std::endl;
    n=1;
    k=x;
    double l5=round(sin(x)*pow(10, -6))/pow(10, -6);
    while (l5!=k){
        k+=pow(-1, n)*pow(x, 2*n+1)/fakt(2*n+1);
        k=round(k*100)/100;
        n++;
    }
    std::cout<<n-1<<std::endl;
    std::cout<<l5<<std::endl;*/
    return 0;
}
