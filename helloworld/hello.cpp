#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
    
   cout << "Hello World!" << endl;

   // create a list of 100 numbers
   vector<int> numbers(100);
   for (int i = 0; i < 100; i++)
   {
      numbers[i] = i;
   }   
   // print the list
   for (int i = 0; i < 100; i++)
   {
      cout << i << " ";
   }

}