
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int i_download_id; int i_logo_id; } ;
struct TYPE_11__ {scalar_t__ i_event_start; scalar_t__ i_event_length; } ;
struct TYPE_10__ {int b_disable; int i_pcroffset; int b_fix_done; void* i_first_dts; void* i_first; void* i_current; } ;
struct TYPE_9__ {int i_version; int objects; } ;
struct TYPE_13__ {int i_version; int i_number; int i_pid_pcr; int b_selected; TYPE_4__ arib; TYPE_3__ eit; TYPE_2__ pcr; int * p_si_sdt_pid; int * p_atsc_si_basepid; scalar_t__ i_last_dts_byte; void* i_last_dts; TYPE_1__ od; int * iod; int e_streams; int handle; } ;
typedef TYPE_5__ ts_pmt_t ;
typedef int demux_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_5__* FUNC_3 (int) ;

ts_pmt_t *FUNC_4( demux_t *VAR_1 )
{
    ts_pmt_t *VAR_2 = FUNC_3( sizeof( ts_pmt_t ) );
    if( !VAR_2 )
        return ((void*)0);

    if( !FUNC_2( VAR_1, &VAR_2->handle ) )
    {
        FUNC_1( VAR_2 );
        return ((void*)0);
    }

    FUNC_0( VAR_2->e_streams );

    VAR_2->i_version = -1;
    VAR_2->i_number = -1;
    VAR_2->i_pid_pcr = 0x1FFF;
    VAR_2->b_selected = 0;
    VAR_2->iod = ((void*)0);
    VAR_2->od.i_version = -1;
    FUNC_0( VAR_2->od.objects );

    VAR_2->i_last_dts = VAR_0;
    VAR_2->i_last_dts_byte = 0;

    VAR_2->p_atsc_si_basepid = ((void*)0);
    VAR_2->p_si_sdt_pid = ((void*)0);

    VAR_2->pcr.i_current = VAR_0;
    VAR_2->pcr.i_first = VAR_0;
    VAR_2->pcr.b_disable = 0;
    VAR_2->pcr.i_first_dts = VAR_0;
    VAR_2->pcr.i_pcroffset = -1;

    VAR_2->pcr.b_fix_done = 0;

    VAR_2->eit.i_event_length = 0;
    VAR_2->eit.i_event_start = 0;

    VAR_2->arib.i_download_id = -1;
    VAR_2->arib.i_logo_id = -1;

    return VAR_2;
}
