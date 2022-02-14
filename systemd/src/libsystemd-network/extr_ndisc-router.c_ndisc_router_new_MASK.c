
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t raw_size; int n_ref; } ;
typedef TYPE_1__ sd_ndisc_router ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;

sd_ndisc_router *FUNC_2(size_t VAR_0) {
        sd_ndisc_router *VAR_1;

        VAR_1 = FUNC_1(FUNC_0(sizeof(sd_ndisc_router)) + VAR_0);
        if (!VAR_1)
                return ((void*)0);

        VAR_1->raw_size = VAR_0;
        VAR_1->n_ref = 1;

        return VAR_1;
}
