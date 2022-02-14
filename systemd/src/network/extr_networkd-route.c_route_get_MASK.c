
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int routes_foreign; int routes; } ;
typedef TYPE_1__ Route ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(Link *VAR_1, Route *VAR_2, Route **VAR_3) {

        Route *VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_1(VAR_1->routes, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 1;
        }

        VAR_4 = FUNC_1(VAR_1->routes_foreign, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 0;
        }

        return -VAR_0;
}
