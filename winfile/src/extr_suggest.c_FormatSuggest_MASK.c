
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef size_t INT ;
typedef int DWORD ;






 int VAR_0 ;





 int** VAR_1 ;

PDWORD
FUNC_0( DWORD VAR_2 )
{
   PDWORD VAR_3 = ((void*)0);
   INT VAR_4;


   if (!VAR_2)
      return ((void*)0);



   switch(VAR_2) {
   case 136:
   case 129:
   case 131:
   case 130:
   case 133:
   case 134:
   case 132:
   case 128:
   case 135:
      VAR_2 = VAR_0;



   default:
      for (VAR_4=0;VAR_1[VAR_4][0]; VAR_4++) {
         if ( VAR_1[VAR_4][0] == VAR_2 ) {
            VAR_3 = VAR_1[VAR_4];
            break;
         }
      }
   }
   return VAR_3;
}
