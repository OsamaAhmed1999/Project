#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int index = 0;
int i , j;

class Questions
{
  public:
  Questions()
  {}

  void C();
  void answer();
  float percentage(float score);
  
  void display()
  {
    system("cls");
    for(i = 0; i < index; i++)
    {
      if(answers1[i] == answers2[i])
      {
        cout << i+1 << ". Right" << "   Answer: " << answers1[i] << endl;
        score = score + 10;
      }
      else
      {
        cout << i+1 << ". Wrong" << "   Answer: " << answers1[i] << endl;
      }
    }
    cout << "Percentage: " << percentage(score) << endl << endl;
  }
  
  private:
  float score = 0;
  char answers1[3] = {'a','b','a'};
  char answers2[3];
};

void Questions::C()
{
  fstream file;
  file.open("file.txt",ios::in);
  string input = "";
  for(j = 0; j < 3; j++)
  {
  for (int i = 0; i <= 4; ++i)
  {
      getline(file, input);
      cout << input << endl;
  }
  answer();
  }
  file.close();
}

void Questions::answer()
{
  cout << "Answer: ";
  cin >> answers2[index];
  cout << endl;
  index++;
}

float Questions::percentage(float score)
{
  float percentage;
  percentage = (score / 30) * 100;
  return percentage;
}