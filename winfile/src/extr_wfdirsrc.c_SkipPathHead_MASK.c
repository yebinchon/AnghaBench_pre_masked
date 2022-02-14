
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;

LPTSTR
FUNC_1(LPTSTR VAR_2)
{
   LPTSTR VAR_3 = VAR_2;
   INT VAR_4;

   if (FUNC_0(VAR_3)) {

      for(VAR_4=0, VAR_3+=2; *VAR_3 && VAR_4<2; VAR_3++) {

         if (VAR_0 == *VAR_3)
            VAR_4++;
      }




      if (!*VAR_3)
         return ((void*)0);
      else
         return VAR_3;

   } else if (VAR_1 == VAR_2[1] && VAR_0 == VAR_2[2]) {





      return VAR_2+3;
   }

   return ((void*)0);
}
