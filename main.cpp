#include <iostream>
#include <string.h>
#include <conio.h>
#include "Questions.h"
using namespace std;

int main()
{
  int choice = 0;
  while(choice != 3)
  {
    cout << "For Quiz Enter 1\nFor Admin Enter 2\nFor Exit Enter 3\n" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    system("cls");

    switch(choice)
    {
      case 3 :
      cout << "Thank You" << endl;
      break;

      case 2 :
      //add question
      //delete question
      break;

      case 1 :
      Questions Language;
      Language.C();
      Language.display();
      break;
    }
  }
  system("pause");
}