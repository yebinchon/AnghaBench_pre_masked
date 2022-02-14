
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ colnr_T ;
struct TYPE_3__ {scalar_t__ col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 ()
{
    int VAR_5;

    VAR_5 = FUNC_3();

    if (VAR_4->w_cursor.col + 1 < (colnr_T)FUNC_1(FUNC_5()))
    {
 FUNC_4();

 if ((VAR_5 == VAR_1) && (FUNC_0(VAR_2, VAR_0)))
 {
     VAR_5 = VAR_3;

     FUNC_2();

     FUNC_6(VAR_5);
     return;
 }

 FUNC_2();
    }

    if ((VAR_5 = FUNC_7(VAR_5)) != 0)
 FUNC_6(VAR_5);
}
