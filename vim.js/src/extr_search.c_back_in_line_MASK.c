
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3()
{
    int VAR_1;

    VAR_1 = FUNC_0();
    for (;;)
    {
 if (VAR_0->w_cursor.col == 0)
     break;
 FUNC_1();
 if (FUNC_0() != VAR_1)
 {
     FUNC_2();
     break;
 }
    }
}
