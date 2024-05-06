#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s)
{
   int i = 0;
   while (s[i] != '\0') {
      i++;
   }
   return i;
}

int charCount(string s,char c)
{
   int i = 0;
   int count = 0;

   while (s[i] != '\0') {
      if (s[i] == c) {
         count++;
      }
      i++;
   }
   return count;
}

string substring(string s,int d,int h)  
{
   string substrn;                       // variable para después guardar la subcadena  
   int i=0;                              // indice, valor 0, que es donde comienza
   
   while (s[i] != '\0') {                // bucle, mientras que el indice de la subcadena sea distinto a char null . . .
      if (( i >= d ) && ( i <= h )) {    // verifica si el bucle pertenece al rango d -> h
         substrn = substrn + s[i];       // si el if se cumple, a la subcadena, se une/concatena ese caracter (en el que está)
      }
      i++;                               // pasa al siguiente caracter
   }
   return substrn;
}

string substring(string s,int d) 
{
   string substrn;                       // variable para después guardar la subcadena
   int i = 0;                            // indice, valor 0, donde comienza la cadena

   while (s[i] != '\0') {                // bucle, mientras que el indice de la subcadena sea dinsito al char null . . . 
      if (s[i] >= d) {                   // si el indice de la subcadena es mayor que d ->
         substrn = substrn + s[i];       // a la subcadena se le concatena ese caracter.
      }
      i++;                               // se pasa al siguiente caracter
   }

   return substrn;
}

int indexOf(string s,char c) // ok    // importante
{
   return 0;
}

int indexOf(string s,char c,int offSet) // ok   // importante
{
   return 0;
}

int indexOf(string s,string toSearch) // ok  // importante
{
   return 0;
}

int indexOf(string s,string toSearch,int offset) // ok
{
   return 0;
}

int lastIndexOf(string s,char c)
{
   return 0;
}

int indexOfN(string s,char c,int n)
{
   return 0;
}

int charToInt(char c)
{
   return 0;
}

char intToChar(int i)
{
   return 'X';
}

int getDigit(int n,int i)
{
   return 0;
}

int digitCount(int n)
{
   return 0;
}

string intToString(int i)
{
   return "";
}

int stringToInt(string s,int b) // ok
{
   return 0;
}

int stringToInt(string s) // ok
{
   return 0;
}

string charToString(char c)
{
   return "";
}

char stringToChar(string s)
{
   return 'X';
}

string stringToString(string s)
{
   return "";
}

string doubleToString(double d)
{
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

string toUpperCase(string s)
{
   return "";
}

string toLowerCase(string s)
{
   return "";
}

int cmpString(string a,string b)
{
   return 0;
}

int cmpDouble(double a,double b)
{
   return 0;
}

#endif
