
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_6__ {int (* disable ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

void FUNC_2(vout_window_t *VAR_0)
{
    FUNC_1(VAR_0, 0);

    if (VAR_0->ops->disable != ((void*)0))
        VAR_0->ops->disable(VAR_0);
}
