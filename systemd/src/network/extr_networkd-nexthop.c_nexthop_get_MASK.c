
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nexthops_foreign; int nexthops; } ;
typedef TYPE_1__ NextHop ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(Link *VAR_1, NextHop *VAR_2, NextHop **VAR_3) {
        NextHop *VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_1(VAR_1->nexthops, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 1;
        }

        VAR_4 = FUNC_1(VAR_1->nexthops_foreign, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 0;
        }

        return -VAR_0;
}
