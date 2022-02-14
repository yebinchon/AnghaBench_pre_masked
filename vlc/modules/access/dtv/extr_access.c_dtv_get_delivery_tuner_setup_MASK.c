
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tuner_setup_t ;
typedef scalar_t__ dtv_delivery_t ;
struct TYPE_3__ {scalar_t__ delivery; int * pf_setup; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

tuner_setup_t FUNC_1( dtv_delivery_t VAR_1 )
{
    for (size_t VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++)
    {
        if ( VAR_0[VAR_2].delivery == VAR_1 )
            return VAR_0[VAR_2].pf_setup;
    }
    return ((void*)0);
}
