
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5()
{
    int VAR_2, VAR_3;

    if (VAR_0->w_cursor.col)
    {
 if (!VAR_1)
     FUNC_0();

 VAR_2 = FUNC_1();

 if ((VAR_3 = FUNC_4(VAR_2)) != 0)
     FUNC_3(VAR_3);

 if (!VAR_1)
     FUNC_2();

    }
}
