#include <stdio.h>
#include <locale.h>
#include <string.h>


/*
enum {
   max_name_len = 30,
   max_post_len = 20,
   max_date_len = 10
};

struct Employee_Data
{
   char surname[max_name_len];
   char name[max_name_len];
   char ptrnmc[max_name_len]; // patronymic
   char post[max_post_len];
   char sex;                  // 'М' или 'Ж'
   char hire_date[max_date_len];
};
*/

struct Employee_Data
{
   char* surname;
   char* name;
   char* ptrnmc; // patronymic
   char* post;
   char* sex;   // 'М' или 'Ж' 
   char* hire_date;
};

int main()
{
   setlocale(LC_ALL, "Rus");

   FILE* file;
   errno_t err = fopen_s(&file, "file.txt", "r");

   if (err != 0 || !file)
   {
      perror("File cant't open!");
      return 1;
   }

   struct Employee_Data prs = { 
      "Иванов", 
      "Иван", 
      "Иванович", 
      "Директор", 
      "М", 
      "01-01-2000" 
   };
   printf("%s", prs.ptrnmc);

   /*
   char str[] = "Строка Яя!";

   printf("Исходная строка: %s\n", str);

   Replace(str);

   printf("Измененная строка: %s\n", str);
   */

   return 0;
}