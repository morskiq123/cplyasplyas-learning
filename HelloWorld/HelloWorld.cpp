#if 0

#include "forward_declaration_ext.h"
#include "wave.h"
#include "square.h"
#include <iostream>

char bukva;
int a{ };
int b{ };
int c{ };

char test() {

    bukva = 'd';
    //std::cout << "Hello World!";
    return bukva;
}

void assignment() {

    std::cout << "Enter the value of a" << std::endl;
    std::cin >> a;
    std::cout << "The value of a is: " << a << "\n";

    std::cout << "Enter b and c with a space inbetween." << "\n";
    std::cin >> b >> c;
    std::cout << b << " and " << c;
    std::cout << " and them multipled is " << b + c;
}

int print_assignment() {

    std::cout << "The value of a is " << a;
    return a;
}

// assign a memory address to the variable 
// to avoid getting an error
void doNothing(int&)
{

}

// assign value to variable through func return
int variable_func() {

    std::cout << "Enter an integer ( variable_func() ): ";
    int y{ };
    std::cin >> y;

    return y;
}

void print_hi() {

    std::cout << "Hi!" << '\n';
}

int additions(int x, int y) {

    return x * y;
}

int multiplications(int x, int y) {

    return x * y;
}

int double_number(int x) {

    return x * 2;
}

int double_number_with_input(int x) {

    std::cout << "Input the number you want to double: ";
    std::cin >> x;
    return x * 2;
}

int forward_declaration(int x, int y);

// no need to use this one since we added the header
//int forward_declaration_ext(int x, int y);

int main() {



    test();

    [[maybe_unused]] int b{ 4 };
    [[maybe_unused]] int c{ 3 };

    assignment();
    print_assignment();

    int x;
    doNothing(x);
    std::cout << x << "\n";

    std::cout << sizeof(int); // print how many bytes of memory an int value takes

    std::cout << "starting main()" << "\n";
    int z{ variable_func() };
    std::cout << "z is equal to " << z << "\n";

    //std::cout << print_hi(); --> compile error - no return value from func
    //correct way:
    print_hi();

    int a1{ 1 };
    int b1{ 2 };
    int c1{ 2 };
    int input_int{};

    // additions
    std::cout << "Output from additions(): " << additions(a1, b1) << '\n';

    // additions + multiplications
    std::cout << "Output from additions() & multiplications(): " << multiplications(c1, additions(a1, b1)) << '\n';

    // double number
    std::cout << "Output from double_number(): " << double_number(a1) << '\n';

    // double number with input
    std::cout << "Output from double_number_with_input(): " << double_number_with_input(input_int) << '\n';
   
    //forward declaration
    std::cout << "forward_declaration(): " << forward_declaration(1, 2) << '\n';

    //forward declaration external
    std::cout << "forward_declaration_ext(): " << forward_declaration_ext(3, 4) << '\n';


    std::cout << "A square has how many sides?: " << get_square_sides() << '\n';
    std::cout << "A square with a side length of 3 has a perimeter of?: " << get_square_sides_perimeter(3) << '\n';

    return 0;
}

int forward_declaration(int x, int y) {
    return x + y;
}


#endif