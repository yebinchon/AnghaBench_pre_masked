
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bond; } ;
struct TYPE_6__ {scalar_t__ iftype; TYPE_2__* network; } ;
typedef TYPE_1__ Link ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(Link *VAR_1) {
        FUNC_0(VAR_1);

        if (!FUNC_3())
                return 0;

        if (VAR_1->network->bond)
                return 0;

        if (VAR_1->iftype == VAR_0)
                return 0;


        if (FUNC_1(VAR_1))
                return 1;

        if (FUNC_2(VAR_1->network))
                return 1;

        return 0;
}
