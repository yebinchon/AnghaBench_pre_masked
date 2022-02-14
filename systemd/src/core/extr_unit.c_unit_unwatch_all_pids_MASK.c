
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pids; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6(Unit *VAR_0) {
        FUNC_1(VAR_0);

        while (!FUNC_4(VAR_0->pids))
                FUNC_5(VAR_0, FUNC_0(FUNC_2(VAR_0->pids)));

        VAR_0->pids = FUNC_3(VAR_0->pids);
}
