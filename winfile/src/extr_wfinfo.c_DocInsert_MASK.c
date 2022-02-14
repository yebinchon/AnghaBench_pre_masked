
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpszFI; int * hIcon; int * szExt; struct TYPE_5__* next; } ;
typedef int TCHAR ;
typedef TYPE_1__** PPDOCBUCKET ;
typedef TYPE_1__* PDOCBUCKET ;
typedef int * LPTSTR ;
typedef int INT ;
typedef int DOCBUCKET ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

INT
FUNC_8(PPDOCBUCKET VAR_3,
         LPTSTR VAR_4,
         LPTSTR VAR_5)
{
   PDOCBUCKET VAR_6;
   INT VAR_7;
   TCHAR VAR_8[VAR_0];





   if (FUNC_7(VAR_4) >= VAR_0 || !VAR_3)
      return VAR_1;




   if (FUNC_3(VAR_3, VAR_4)) {
      return -1;
   }

   VAR_6 = (PDOCBUCKET) FUNC_4(VAR_2,sizeof(DOCBUCKET));

   if (!VAR_6) {
      return 0;
   }

   VAR_7 = FUNC_2(VAR_4);




   VAR_6->next = VAR_3[VAR_7];

   FUNC_1(VAR_4);
   FUNC_6(VAR_8, VAR_4);
   FUNC_5(VAR_8);
   FUNC_6(VAR_6->szExt, VAR_8);

   VAR_6->hIcon = ((void*)0);
   VAR_6->lpszFI = ((void*)0);

   if (VAR_5 != ((void*)0))
    VAR_6->lpszFI = (LPTSTR) FUNC_4(VAR_2, FUNC_0(FUNC_7(VAR_5)+1));
   if (VAR_6->lpszFI != ((void*)0))
   FUNC_6(VAR_6->lpszFI, VAR_5);

   VAR_3[VAR_7] = VAR_6;

   return 1;
}
