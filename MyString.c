#include "MyString.h"
#include <stdio.h>

void MyStrcpy(char* dest_, char* src_)
{
   while (*src_)
   {
      *dest_ = *src_;
      dest_++;
      src_++;
   }
   *dest_ = '\0';
}

void Replace(char* str_)
{
   int i = 0;

   while (str_[i] != '\0')
   {
      if (str_[i] == 'ÿ' || str_[i] == 'ß')
      {
         str_[i] = ' ';
      }
      else
      {
         str_[i] = str_[i] + 1;
      }
      i++;
   }
}
