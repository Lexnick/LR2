#include <iostream>
#include <cmath>
long fakt(long b){
    if (b==0||b==1)
        return 1;
    else return fakt(b-1)*b;
}
int main() {
    for (unsigned short i=32; i<127; ++i)
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
     }
   double x=0;
    std::cout<<"Enter x"<<std::endl;
    std::cin>>x;
    double sinx=sin(x);
    double funcx=x;
    for (int i=2; i!=7; ++i)
    {
        sinx=round(sinx*pow(10, i))/pow(10, i);
        long count=0;
        while ( sinx != round(pow(-1, count)*pow(x,2*count+1)/fakt(2*count+1)*100)/100 )
        {
            count++;
            funcx+=pow(-1, count)*pow(x,2*count+1)/fakt(2*count+1);
        }
        std::cout<<"The number of iterations with accuracy 10^(-"<<i<<") : "<<count<<std::endl;
    }
    return 0;
}