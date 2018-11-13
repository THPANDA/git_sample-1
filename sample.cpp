#include <iostream>

int sum(int,int);
int multiple(int,int);
int main(){
    std::cout << "This is new_branch" << std::endl;
    int a=114;
    int b=514;
    std::cout << sum(a, b)<< std::endl;
    return 0;
}

int sum(int a,int b){

return a + b;
}
int multiple(int a,int b){
    return a*b;
}