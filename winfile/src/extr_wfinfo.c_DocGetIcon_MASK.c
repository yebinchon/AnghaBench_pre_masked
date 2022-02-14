
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hIcon; int * lpszFI; } ;
typedef char TCHAR ;
typedef TYPE_1__* PDOCBUCKET ;
typedef int INT ;
typedef int * HICON ;


 int FUNC_0 (int *,int ,int *,int **,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char) ;

HICON FUNC_3(PDOCBUCKET VAR_0)
{
   if (VAR_0 == ((void*)0))
  return ((void*)0);

   if (VAR_0->hIcon == ((void*)0) && VAR_0->lpszFI != ((void*)0))
   {
      TCHAR *VAR_1 = FUNC_2(VAR_0->lpszFI, ',');

      if (VAR_1 != ((void*)0))
      {
         INT VAR_2 = FUNC_1(VAR_1+1);
         HICON VAR_3;

    *VAR_1 = '\0';
         if (FUNC_0(VAR_0->lpszFI, VAR_2, ((void*)0), &VAR_3, 1) == 1)
          VAR_0->hIcon = VAR_3;
      }
   }
   return VAR_0->hIcon;
}
