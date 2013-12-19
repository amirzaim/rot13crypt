#include<iostream>
using namespace std;

void encryptstr(char str[]);

int main()
{
   char mystring[500];
   cout << endl;
   cout << "==========ROT13 Code Encrypter/Decrypter====================" << endl;
   cout << endl;
   cout << "Enter the string that you want to encrypt or decrypt: ";
   cin.getline(mystring,500);   
   encryptstr(mystring);
   cout << endl;
   cout << "Here's the result of encrypt/decrypt: " << mystring << endl;
   cout << endl;
   cout << "============================================================" << endl;
   return 0;
}

void encryptstr(char str[])
{
   for (int i=0; str[i] != '\0'; i++)
      {
         if((str[i] >= 'a') && (str[i] <= 'm'))
          {  
             str[i] += 13;
          }
         else if ((str[i] >= 'm') && (str[i] <= 'z'))
         {
           str[i] -= 13;
         }
         else if ((str[i] >= 'A') && (str[i] <= 'M'))
         {
           str[i] += 13;
         }
         else if ((str[i] >= 'M') && (str[i] <= 'Z'))
        {
           str[i] -= 13;
        }
   }
}
