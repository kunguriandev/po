#include <iostream>

void Z1a(unsigned int n){
  for(unsigned int i =0 ; i <n; i++){
    std::cout<<i % 10;
  }
}
void Z1b(unsigned int n){
  for(unsigned int i =0 ; i <n; i++){
    std::cout<<i % 2;
  }
  
}
void Z1c(unsigned int n){
  for(int i = 0; i < n; i++){
     std::cout<<i % 4;
  } 

}
void Z1d(unsigned int n){
  for(int i = 0; i <= (n+1) * 3; i++){
    std::cout<<i%4;
  } 


}
void Z1e(unsigned int n){
  for(int i = 0; i < n ; i++){
    std::cout<<i % 4;

  } 
}
void Z4d(unsigned int n)
{
 for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      std::cout << j;
    }
    std::cout << std::endl;
  }
}



int main(){
  Z4d(5);
  

  return 0;
}
