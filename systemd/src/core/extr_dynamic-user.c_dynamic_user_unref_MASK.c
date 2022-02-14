
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n_ref; } ;
typedef TYPE_1__ DynamicUser ;


 int FUNC_0 (int) ;

__attribute__((used)) static DynamicUser* FUNC_1(DynamicUser *VAR_0) {
        if (!VAR_0)
                return ((void*)0);





        FUNC_0(VAR_0->n_ref > 0);
        VAR_0->n_ref--;

        return ((void*)0);
}
