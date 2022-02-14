
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * alpxdtaSorted; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef int TCHAR ;
typedef int PBYTE ;
typedef TYPE_1__* LPXDTALINK ;
typedef int HLOCAL ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,TYPE_1__*) ;

LPXDTALINK
FUNC_7(LPXDTALINK VAR_1)
{
   LPXDTALINK VAR_2;
   LPXDTALINK VAR_3;
   LPXDTALINK VAR_4;
   LPXDTALINK VAR_5;
   DWORD VAR_6;







   for (VAR_3 = ((void*)0), VAR_2 = ((void*)0); VAR_1; VAR_1 = VAR_5)
   {
      VAR_5 = VAR_1->next;

      VAR_6 = FUNC_2((HLOCAL)VAR_1);

      VAR_4 = FUNC_1(VAR_0, VAR_6);
      if (!VAR_4)
      {
         FUNC_3(VAR_2);
         return ((void*)0);
      }

      FUNC_0((PBYTE)VAR_4, (PBYTE)VAR_1, VAR_6);

      if (!VAR_2)
      {
         VAR_2 = VAR_4;





         FUNC_4(VAR_2)->alpxdtaSorted = ((void*)0);
      }





      VAR_4->next = ((void*)0);

      if (VAR_3)
      {
         VAR_3->next = VAR_4;
      }
      VAR_3 = VAR_4;
   }







   return VAR_2;
}
