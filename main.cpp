#include <iostream>
#include <cmath>
#include <iomanip>
long fakt(long b){
    if (b==0||b==1)
        return 1;
    else return fakt(b-1)*b;
}
int main() {
    std::cout<<"Code | Symbol"<<std::endl;
    for (unsigned short i=0; i<127; ++i)
         std::cout<<std::setw(5)<<i<<"|"<< static_cast<char>(i)  << std::endl;
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
   std::cout<<"Enter x"<<std::endl;
long double x=0;
std::cin>>x;
for ( int i=2; i<7; i++){
long double sinx=floor(sin(x)*pow(10,i))/pow(10,i);
std::cout<<"sinx"<<i-1<<"= "<<sinx<<std::endl;
long double funcx=x;
int count=0;
long double accurat_funck=2;
while (sinx!=accurat_funck) {
count+=1;
funcx+=pow(-1,count)*pow(x,2*count+1)/fakt(2*count+1);
std::cout<<"X after the iteration №"<<count<<": "<<funcx<<std::endl;
accurat_funck=floor(funcx*pow(10,i))/pow(10,i);
std::cout<<"Accuratted X after the iteration №"<<count<<": "<<accurat_funck<<std::endl;
}
std::cout<<"The count of iteretions with accuracy "<<pow(10,-i)<<":= "<<count<<std::endl;    
}
    return 0;
}
