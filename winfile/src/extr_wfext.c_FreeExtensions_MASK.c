
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_2__ {scalar_t__ hModule; int (* ExtProc ) (int *,int ,long) ;} ;
typedef size_t INT ;
typedef int HMENU ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (int *,int ,long) ;

VOID
FUNC_6()
{
   INT VAR_6;
   HMENU VAR_7;

   FUNC_2();


   VAR_7 = FUNC_3(VAR_4);


   UINT VAR_8 = FUNC_4(VAR_1);

   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      (VAR_3[VAR_6].ExtProc)(((void*)0), VAR_0, 0L);
      FUNC_0(VAR_7, VAR_8, VAR_2);
      FUNC_1((HANDLE)VAR_3[VAR_6].hModule);
   }
   VAR_5 = 0;
}
