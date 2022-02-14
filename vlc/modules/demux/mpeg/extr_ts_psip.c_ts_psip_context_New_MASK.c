
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eits; int etts; scalar_t__ i_tabletype; int * p_a65; int * p_vct; int * p_stt; int * p_mgt; } ;
typedef TYPE_1__ ts_psip_context_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

ts_psip_context_t * FUNC_3()
{
    ts_psip_context_t *VAR_0 = FUNC_2(sizeof(*VAR_0));
    if(FUNC_1(VAR_0))
    {
        VAR_0->p_mgt = ((void*)0);
        VAR_0->p_stt = ((void*)0);
        VAR_0->p_vct = ((void*)0);
        VAR_0->p_a65 = ((void*)0);
        VAR_0->i_tabletype = 0;
        FUNC_0(VAR_0->etts);
        FUNC_0(VAR_0->eits);
    }
    return VAR_0;
}
