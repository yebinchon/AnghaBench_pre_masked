
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ state; int bus; } ;
typedef TYPE_1__ BusWaitForUnits ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(BusWaitForUnits *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        while (VAR_1->state == VAR_0) {

                VAR_2 = FUNC_1(VAR_1->bus, ((void*)0));
                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 > 0)
                        continue;

                VAR_2 = FUNC_2(VAR_1->bus, (uint64_t) -1);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        return VAR_1->state;
}
