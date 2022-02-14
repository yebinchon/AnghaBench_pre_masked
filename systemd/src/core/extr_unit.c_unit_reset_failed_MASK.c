
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int start_limit_hit; int start_ratelimit; } ;
typedef TYPE_1__ Unit ;
struct TYPE_8__ {int (* reset_failed ) (TYPE_1__*) ;} ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Unit *VAR_0) {
        FUNC_1(VAR_0);

        if (FUNC_0(VAR_0)->reset_failed)
                FUNC_0(VAR_0)->reset_failed(VAR_0);

        FUNC_2(&VAR_0->start_ratelimit);
        VAR_0->start_limit_hit = 0;
}
