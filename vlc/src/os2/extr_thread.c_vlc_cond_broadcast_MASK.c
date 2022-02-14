
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hev; int waiters; } ;
typedef TYPE_1__ vlc_cond_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (vlc_cond_t *VAR_1)
{
    if (VAR_1->hev == VAR_0)
        FUNC_2 (VAR_1);

    while (!FUNC_0 (&VAR_1->waiters, 0, 0))
        FUNC_1 (VAR_1);
}
