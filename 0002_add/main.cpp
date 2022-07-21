#include <iostream>
//.
int add_numbers (int first_number, int second_number) {
    return first_number + second_number;
}

int main(){
    auto first_num {13};
    auto second_num {7};
    auto sum = first_num + second_num;
    std::cout << "The sum of the two numbers is: " << sum << '\n';

    sum = add_numbers(34, 7); 
    std::cout << "The sum of the two numbers is: " << sum << '\n';

    return 0;
}