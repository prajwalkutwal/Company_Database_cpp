#include "Classes.h"
#include "Functions.h"

int main()
{
     int NumEmps = 0;
      //Set sentinel value 
     char Continue = 'z';
     cout << "Enter the number of employees in your company: ";
     cin >> NumEmps;

     if(NumEmps > 0 && NumEmps < 500) 
     {
           Employee * TheCompany = new Employee[NumEmps];


           while(Continue != 'q') 
           {
                 MainMenu(Continue, TheCompany, NumEmps);

           } 

            // Heap memory cleanup
           delete [] TheCompany;
           TheCompany = 0;
     }

     else 
     { 
        cout << "Sorry, you must enter a whole number integer value for your database."; 
     }

     cout << "\nExiting program...\n\n";
     return 0;

} 


