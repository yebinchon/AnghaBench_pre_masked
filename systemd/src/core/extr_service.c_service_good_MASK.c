
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int bus_name_good; } ;
typedef TYPE_1__ Service ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(Service *VAR_1) {
        int VAR_2;
        FUNC_0(VAR_1);

        if (VAR_1->type == VAR_0 && !VAR_1->bus_name_good)
                return 0;

        VAR_2 = FUNC_2(VAR_1);
        if (VAR_2 > 0)
                return 1;
        if (VAR_2 == 0)
                return 0;





        return FUNC_1(VAR_1) != 0;
}
