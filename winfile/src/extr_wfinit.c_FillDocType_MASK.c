
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int PPDOCBUCKET ;
typedef scalar_t__* LPWSTR ;
typedef int LPCWSTR ;
typedef int HLOCAL ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__*,int) ;
 int VAR_2 ;
 scalar_t__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

UINT
FUNC_4(
   PPDOCBUCKET VAR_4,
   LPCWSTR VAR_5,
   LPCWSTR VAR_6)
{
   LPWSTR VAR_7 = ((void*)0);
   LPWSTR VAR_8;
   LPWSTR VAR_9;
   UINT VAR_10 = 0;

   UINT VAR_11 = 0;

   do {

      VAR_10 += 32;

      if (VAR_7)
         FUNC_3((HLOCAL)VAR_7);

      VAR_7 = FUNC_2(VAR_2, VAR_10*sizeof(WCHAR));

      if (!VAR_7) {
         return 0;
      }

   } while (FUNC_1(VAR_3,
                             VAR_5,
                             VAR_6,
                             VAR_7,
                             VAR_10) == (DWORD)VAR_10-2);




   for (VAR_8=VAR_7; *VAR_8; VAR_8++) {

      if (VAR_1 == *VAR_8) {
         *VAR_8 = VAR_0;
      }
   }

   for(VAR_9=VAR_7; VAR_9<VAR_8; VAR_9++) {

      if (*VAR_9) {
         if (FUNC_0(VAR_4, VAR_9, ((void*)0)) == 1)
            VAR_11++;

         while(*VAR_9 && VAR_9!=VAR_8)
            VAR_9++;
      }
   }

   FUNC_3((HLOCAL)VAR_7);

   return VAR_11;
}
