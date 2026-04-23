#include <iostream>
using namespace std;
// Incluimos la clase
#include "Person.cpp"
int main() {
Person myObj, myObj2;
myObj2.setName("Jane");
myObj.setName("John"); 
cout << myObj.getName() << endl;
cout << myObj2.getName() << endl;
return 0;
}