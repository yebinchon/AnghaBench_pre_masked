
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lnum; } ;
struct TYPE_5__ {scalar_t__ w_p_fdl; TYPE_1__ w_cursor; int w_folds; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__* VAR_2 ;

void
FUNC_3()
{
    if (*VAR_2 != VAR_0)
    {
 FUNC_2(VAR_1);
 if (FUNC_1(&VAR_1->w_folds, VAR_1->w_cursor.lnum,
       (int)VAR_1->w_p_fdl))
     FUNC_0();
    }
}
