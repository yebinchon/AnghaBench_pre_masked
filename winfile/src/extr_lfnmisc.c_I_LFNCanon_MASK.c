
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int TCHAR ;
typedef int* LPTSTR ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (int) ;

DWORD
FUNC_1(WORD VAR_15, LPTSTR VAR_16, LPTSTR VAR_17)
{
   LPTSTR VAR_18 = VAR_16;
   LPTSTR VAR_19 = VAR_17;
   unsigned VAR_20;
   unsigned VAR_21;
   TCHAR VAR_22;

   if (!VAR_16 || !VAR_17)
      return VAR_13;

   if (*VAR_16 == VAR_7)
      return VAR_13;



   if (*VAR_16 != VAR_1 && *VAR_16 != VAR_10) {
      if (FUNC_0(*VAR_16)) {
         if (VAR_16[1] == VAR_2) {
            *VAR_19++ = *VAR_18++;
            *VAR_19++ = *VAR_18++;
         }
      }
   } else {
      VAR_18++;
      *VAR_19++ = VAR_1;
   }







   VAR_20 = 0;
   do {
      VAR_22 = *VAR_18++;
      if ((VAR_22 < 0x001f && VAR_22 != VAR_7) || (VAR_22 == VAR_4) || (VAR_22 == VAR_2) || (VAR_22 == VAR_8) ||
          (VAR_22 == VAR_5) || (VAR_22 == VAR_6)) {
             *VAR_17 = VAR_7;
             return VAR_13;
      }
      if (VAR_15 != VAR_14 && ((VAR_22 == VAR_12) || (VAR_22 == VAR_9))) {
         *VAR_17 = VAR_7;
         return VAR_13;
      }
      if (VAR_22 == VAR_10)
         VAR_22 = VAR_1;

      if (VAR_22 == VAR_1 || VAR_22 == VAR_7) {




         if (VAR_19 > VAR_17) {
            if (*(VAR_19 - 1) == VAR_3) {
               if ((VAR_19 - 1) == VAR_17 || *(VAR_19 - 2) == VAR_1) {
                  *(VAR_19--) = VAR_22;
                  if (VAR_20)
                     VAR_20--;
                  continue;
               }
               if (*(VAR_19 - 2) == VAR_3) {
                  if ((VAR_19 - 2) == VAR_17 || *(VAR_19 - 3) == VAR_1 ||
                        *(VAR_19 - 3) == VAR_2) {
                     *VAR_19++ = VAR_22;
                     VAR_20++;
                     continue;
                  }
               }
            }
         }




         VAR_21 = 0;
         while (VAR_19 > VAR_17 && ((*(VAR_19-1) == VAR_3 || *(VAR_19-1) == VAR_11)
                 && (*(VAR_19-1) != VAR_1 && *(VAR_19 - 1) != VAR_2)) ) {
            VAR_19--;
            VAR_21++;
            if (VAR_20)
               VAR_20--;
         }
         if (VAR_19 == VAR_17) {
            *VAR_17 = VAR_7;
            return VAR_13;
         }
         if (VAR_19 > VAR_17 && *(VAR_19-1) == VAR_1) {
            *VAR_17 = VAR_7;
            return VAR_13;
         }
      }
      *VAR_19++ = VAR_22;
      VAR_20++;
      if (VAR_20 > VAR_0) {
         *VAR_17 = VAR_7;
         return VAR_13;
      }
   } while (VAR_22);




   if (VAR_19 != VAR_17)
      if (*(VAR_19-1) == VAR_1) {
         *VAR_17 = VAR_7;
         return VAR_13;
      }

   return 0;

}
