
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* pf_deinit ) (TYPE_2__*) ;} ;
struct TYPE_7__ {struct TYPE_7__* p_extra; TYPE_1__ cb; } ;
typedef TYPE_2__ mux_extradata_builder_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(mux_extradata_builder_t *VAR_0)
{
    if(VAR_0->cb.pf_deinit)
        VAR_0->cb.pf_deinit(VAR_0);
    FUNC_0(VAR_0->p_extra);
    FUNC_0(VAR_0);
}
