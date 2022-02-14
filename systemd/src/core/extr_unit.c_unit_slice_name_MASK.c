
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int slice; } ;
typedef TYPE_1__ Unit ;
struct TYPE_6__ {char const* id; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

const char *FUNC_3(Unit *VAR_0) {
        FUNC_2(VAR_0);

        if (!FUNC_1(VAR_0->slice))
                return ((void*)0);

        return FUNC_0(VAR_0->slice)->id;
}
