
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_17__ {int i_pcroffset; int b_disable; int b_fix_done; scalar_t__ i_first_dts; scalar_t__ i_current; } ;
struct TYPE_18__ {int i_pid_pcr; TYPE_2__ pcr; int i_number; } ;
typedef TYPE_3__ ts_pmt_t ;
struct TYPE_19__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_20__ {scalar_t__ seltype; int b_check_pcr_offset; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_21__ {scalar_t__ i_dts; } ;
typedef TYPE_6__ block_t ;
struct TYPE_16__ {scalar_t__ i_pcr_count; } ;
struct TYPE_15__ {TYPE_1__ probed; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_12__* FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,char*,int ,int) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_2, ts_pmt_t *VAR_3, block_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;


    if( !VAR_5->b_check_pcr_offset && VAR_3->pcr.i_pcroffset == -1 )
        VAR_3->pcr.i_pcroffset = 0;

    if ( VAR_3->pcr.b_disable || VAR_3->pcr.b_fix_done )
    {
        return;
    }

    else if( VAR_3->pcr.i_first_dts == VAR_1 )
    {
        VAR_3->pcr.i_first_dts = FUNC_3(VAR_4->i_dts);
    }
    else if( VAR_4->i_dts - FUNC_0(VAR_3->pcr.i_first_dts) > FUNC_5(500) )
    {
        if( VAR_3->pcr.i_current < 0 &&
            FUNC_2( VAR_5, VAR_3->i_pid_pcr )->probed.i_pcr_count == 0 )
        {
            int VAR_6 = FUNC_1( VAR_3 );
            VAR_3->i_pid_pcr = VAR_6;
            if ( FUNC_2( VAR_5, VAR_3->i_pid_pcr )->probed.i_pcr_count == 0 )
                VAR_3->pcr.b_disable = 1;
            FUNC_6( VAR_2, "No PCR received for program %d, set up workaround using pid %d",
                      VAR_3->i_number, VAR_6 );
            FUNC_4( VAR_2, VAR_5->seltype == VAR_0 );
        }
        VAR_3->pcr.b_fix_done = 1;
    }
}
