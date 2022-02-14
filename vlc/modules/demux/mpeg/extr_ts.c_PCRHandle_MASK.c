
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_29__ {int i_first; scalar_t__ b_disable; } ;
struct TYPE_30__ {int i_pid_pcr; TYPE_6__ pcr; } ;
typedef TYPE_7__ ts_pmt_t ;
struct TYPE_24__ {int i_pcr_count; } ;
struct TYPE_31__ {int i_pid; TYPE_1__ probed; } ;
typedef TYPE_8__ ts_pid_t ;
struct TYPE_28__ {int i_size; TYPE_4__** p_elems; } ;
struct TYPE_32__ {TYPE_5__ programs; } ;
typedef TYPE_9__ ts_pat_t ;
typedef int stime_t ;
struct TYPE_21__ {TYPE_11__* p_sys; } ;
typedef TYPE_10__ demux_t ;
struct TYPE_22__ {scalar_t__ i_pmt_es; } ;
typedef TYPE_11__ demux_sys_t ;
struct TYPE_26__ {TYPE_7__* p_pmt; } ;
struct TYPE_27__ {TYPE_3__ u; } ;
struct TYPE_25__ {TYPE_9__* p_pat; } ;
struct TYPE_23__ {scalar_t__ type; TYPE_2__ u; } ;


 TYPE_19__* FUNC_0 (TYPE_11__*,int ) ;
 int FUNC_1 (TYPE_10__*,TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_10__*,TYPE_7__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_1, ts_pid_t *VAR_2, stime_t VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_1->p_sys;

    VAR_2->probed.i_pcr_count++;

    if( VAR_4->i_pmt_es <= 0 )
        return;

    if(FUNC_5(FUNC_0(VAR_4, 0)->type != VAR_0))
        return;


    ts_pat_t *VAR_5 = FUNC_0(VAR_4, 0)->u.p_pat;
    for( int VAR_6 = 0; VAR_6 < VAR_5->programs.i_size; VAR_6++ )
    {
        ts_pmt_t *VAR_7 = VAR_5->programs.p_elems[VAR_6]->u.p_pmt;
        if( VAR_7->pcr.b_disable )
            continue;
        stime_t VAR_8 = FUNC_4( VAR_7->pcr.i_first, VAR_3 );

        if( VAR_7->i_pid_pcr == 0x1FFF )
        {
            if( FUNC_2( VAR_7, VAR_2->i_pid ) )
            {

                FUNC_3( VAR_1, VAR_7, VAR_8 );
            }
        }
        else
        {

            if( VAR_7->i_pid_pcr == VAR_2->i_pid )
            {

                FUNC_1( VAR_1, VAR_7, VAR_3 );
                FUNC_3( VAR_1, VAR_7, VAR_8 );
            }
        }

    }
}
