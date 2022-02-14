
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* p_cb_data; int pf_callback; int pf_gather; } ;
typedef TYPE_1__ ts_dvbpsi_rawtable_decoder_t ;
typedef int ts_dvbpsi_rawsections_callback_t ;
struct TYPE_7__ {int p_decoder; } ;
typedef TYPE_2__ dvbpsi_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int,int,int) ;
 int VAR_0 ;

bool FUNC_2( dvbpsi_t* VAR_1,
                                 ts_dvbpsi_rawsections_callback_t VAR_2,
                                 void *VAR_3 )
{
    if ( VAR_1->p_decoder )
        return 0;

    ts_dvbpsi_rawtable_decoder_t *VAR_4 = FUNC_1( ((void*)0), 4096, 1, sizeof(*VAR_4) );
    if ( VAR_4 == ((void*)0) )
        return 0;
    VAR_1->p_decoder = FUNC_0(VAR_4);

    VAR_4->pf_gather = VAR_0;
    VAR_4->pf_callback = VAR_2;
    VAR_4->p_cb_data = VAR_3;

    return 1;
}
