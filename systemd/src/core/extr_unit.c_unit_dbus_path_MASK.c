
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ) ;

char *FUNC_2(Unit *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->id)
                return ((void*)0);

        return FUNC_1(VAR_0->id);
}
