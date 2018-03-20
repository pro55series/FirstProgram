#include <iostream>
#include <string>

int Addition(int Number1, int Number2) {
  int Result;
  Result = Number1+Number2;
  return Result;
}
int Multiplication(int Number1, int Number2) {
  int Result;
  Result = Number1*Number2;
  return Result;
}
int Subtraction(int Number1, int Number2) {
  int Result;
  Result = Number1-Number2;
  return Result;
}
int Division(int Number1, int Number2) {
  int Result;
  Result = Number1/Number2;
  return Result;
}


int main(int argc, char const *argv[]) {
  std::cout << "Hello World this is a small Calculator." << '\n';
  std::string Input;
  bool Exit;
  Exit = false;

  while (Exit == false) {
    int Number1, Number2, Result;

    std::string Chosen;
    std::cout << "Please enter your First Number " << '\n';
    std::cin >> Number1;
    std::cout << "Please enter your Second Number " << '\n';
    std::cin >> Number2;

    std::cout << "Please enter what you want to do:\n+ for addition\n- for substraction\n* for multiplication\n/ for devision" << '\n';
    std::cin >> Chosen;

    if (Chosen == "+") {
      Result = Addition(Number1, Number2);
    } else if (Chosen == "-") {
      Result = Subtraction(Number1, Number2);
    } else if (Chosen == "/") {
      Result = Division(Number1, Number2);
    } else if (Chosen == "*") {
      Result = Multiplication(Number1, Number2);
    }

    std::cout << Number1 << Chosen << Number2 << "=" << Result << '\n';


    std::cout << "Do you want to exit? y or n" << '\n';
    std::cin >> Input;

    if (Input == "y") {
      Exit = true;
      std::cout << "Exiting Program" << '\n';
    }


  }

  return 0;
}
