#include <iostream>

void sayHello(){

std::cout << "Hello Momina" << std::endl;
}


void say(std::string user_name, int age){

std::cout << user_name <<  age << std::endl;
}
int triple_number(int number){
    return number * 2;
}
int main(){


    sayHello();
    say("Hamza", 12);
    int result = triple_number(8);
    std::cout << result << std::endl;
    return 0;
}