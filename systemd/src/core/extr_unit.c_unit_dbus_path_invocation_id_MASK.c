
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int invocation_id_string; int invocation_id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;

char *FUNC_3(Unit *VAR_0) {
        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0->invocation_id))
                return ((void*)0);

        return FUNC_2(VAR_0->invocation_id_string);
}
