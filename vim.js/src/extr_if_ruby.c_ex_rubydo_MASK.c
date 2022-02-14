
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
struct TYPE_3__ {scalar_t__ line1; scalar_t__ line2; scalar_t__ arg; } ;
typedef TYPE_1__ exarg_T ;
typedef int char_u ;
typedef int VALUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int *,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;

void FUNC_18(exarg_T *VAR_3)
{
    int VAR_4;
    linenr_T VAR_5;

    if (FUNC_7())
    {
 if (FUNC_15(VAR_3->line1 - 1, VAR_3->line2 + 1) != VAR_1)
     return;
 for (VAR_5 = VAR_3->line1; VAR_5 <= VAR_3->line2; VAR_5++) {
     VALUE VAR_6;

     VAR_6 = FUNC_17((char *)FUNC_10(VAR_5));
     FUNC_13(VAR_6);
     FUNC_9((char *) VAR_3->arg, &VAR_4);
     if (VAR_4) {
  FUNC_8(VAR_4);
  break;
     }
     VAR_6 = FUNC_12();
     if (!FUNC_1(VAR_6)) {
  if (FUNC_3(VAR_6) != VAR_2) {
      FUNC_0(FUNC_4("E265: $_ must be an instance of String"));
      return;
  }
  FUNC_11(VAR_5, (char_u *) FUNC_2(VAR_6), 1);
  FUNC_5();



     }
 }
 FUNC_6();
 FUNC_16(VAR_0);
    }
}
