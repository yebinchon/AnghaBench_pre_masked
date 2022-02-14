
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
struct TYPE_3__ {scalar_t__ lnum; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(linenr_T VAR_1, linenr_T VAR_2, linenr_T VAR_3)
{
    if (VAR_0->w_cursor.lnum >= VAR_1)
    {


 if (VAR_0->w_cursor.lnum >= VAR_2)
 {
     VAR_0->w_cursor.lnum += VAR_3;
     FUNC_2();
 }
 else if (VAR_3 < 0)
 {
     VAR_0->w_cursor.lnum = VAR_1;
     FUNC_1();
 }
 else
     FUNC_2();
 FUNC_0();
    }
    FUNC_3();
}
