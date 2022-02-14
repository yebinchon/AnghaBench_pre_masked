
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ last_run; scalar_t__ assoc; int ping; scalar_t__ loaded_num_nodes; } ;
typedef TYPE_1__ DHT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(DHT *VAR_0)
{
    FUNC_7();

    if (VAR_0->last_run == FUNC_6()) {
        return;
    }


    if (VAR_0->loaded_num_nodes) {
        FUNC_0(VAR_0);
    }

    FUNC_2(VAR_0);
    FUNC_3(VAR_0);
    FUNC_4(VAR_0);
    FUNC_5(VAR_0->ping);







    VAR_0->last_run = FUNC_6();
}
