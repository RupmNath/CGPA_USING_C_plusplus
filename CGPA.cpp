#include <iostream>
#include <cmath>
using namespace std;
//to ckeck if SGPA is between 0 to 10
bool valid(double sgpa)
{
      return (sgpa >= 0 && sgpa <= 10);
}

//SGPA input function
void sgpaInput(double sgpa[], int n)
{
      // Enter sgpa of each semester
      cout<<"Enter SGPA of each semester: ";
      int i = 0;
      while (i < n)
      {
            cin >> sgpa[i];
            while (!valid(sgpa[i]))
            {
                  cout << "Not valid Enter a number between 0 to 10: ";
                  cin >> sgpa[i];
            }
            i++;
      }
}

//Display SGPA of each semester
void sgpaDisplay(const double sgpa[], int n)
{
      // SGPA of each semester
      for (int i = 0; i < n; i++)
      {
            cout << "SGPA of semester " << (1 + i) << " is: " << sgpa[i] << endl;
      }
}

//Function to display CGPA
void cgpaDisplay(const double sgpa[], int n)
{
      double sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum = sum + sgpa[i];
      }
      cout<<"CGPA of the course is: "<<sum/n<<endl;
}

//main function
int main()
{
      int n;
      // Enter number of semesters
      cout << "Enter number of semesters: ";
      cin >> n;
      // array of size 'n'
      double sgpa[n];
      // calling input function
      sgpaInput(sgpa, n);
      // calling display function
      sgpaDisplay(sgpa, n);
      //calling CGPA function 
      cgpaDisplay(sgpa, n);
      return 0;
}