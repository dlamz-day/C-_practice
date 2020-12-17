//直角三角形的邊
#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int count=0;
 int A,C;

 cout <<"a"<<"\t"<<"b"<<"\t"<<"c"<<endl ;
 for(int a=1; a<=500;a++){

  for(int b=1;b<=500;b++){

       for(int c=1;c<=500;c++){
          A=a*a+b*b;
          C=c*c;
           if (a*a+b*b==c*c){
           cout<<a<<"\t"<<b<<"\t"<<c<<endl ;
           count++;
           }
        }
  }
}
cout << "A total of " << count << " triples were found." << endl;
return 0;
}
