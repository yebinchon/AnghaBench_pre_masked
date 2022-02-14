
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

LPWSTR
FUNC_0(
   LPWSTR VAR_2)
{
   BOOL VAR_3 = VAR_1;

   while (*VAR_2 == L' ' || *VAR_2 == L'\t')
      VAR_2++;




   while (*VAR_2) {

      if ((*VAR_2 == L' ' || *VAR_2 == L'\t') && !VAR_3)
         break;

      if (*VAR_2 == L'\"')
         VAR_3 = !VAR_3;

      VAR_2++;
   }

   if (*VAR_2) {
      *VAR_2++ = VAR_0;

      while (*VAR_2 == L' ' || *VAR_2 == L'\t')
         VAR_2++;
   }

   return VAR_2;
}
