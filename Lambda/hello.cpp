#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  auto sayHelloWorld = []() {
    cout << "Hello World!" << endl;
  };

  sayHelloWorld();

  return 0;
}
