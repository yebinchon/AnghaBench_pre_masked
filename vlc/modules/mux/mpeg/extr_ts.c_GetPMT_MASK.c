
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int i_nb_inputs; TYPE_6__** pp_inputs; TYPE_5__* p_sys; } ;
typedef TYPE_4__ sout_mux_t ;
struct TYPE_18__ {int i_pmt_program_number; int pmt; int i_num_pmt; int sdt; TYPE_3__* p_pcr_input; int i_pmt_version_number; int i_tsid; int standard; int p_dvbpsi; int i_pmtslots; int pmtmap; } ;
typedef TYPE_5__ sout_mux_sys_t ;
struct TYPE_19__ {TYPE_1__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_6__ sout_input_t ;
struct TYPE_15__ {int i_pid; } ;
struct TYPE_20__ {TYPE_2__ ts; int pes; } ;
typedef TYPE_7__ sout_input_sys_t ;
typedef int sout_buffer_chain_t ;
struct TYPE_21__ {int i_prog; } ;
typedef TYPE_8__ pmt_map_t ;
struct TYPE_22__ {TYPE_2__* ts; int * pes; TYPE_1__* fmt; int i_mapped_prog; } ;
typedef TYPE_9__ pes_mapped_stream_t ;
struct TYPE_16__ {scalar_t__ p_sys; } ;
struct TYPE_14__ {int i_id; } ;
typedef int PEStoTSCallback ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int ,int ,int ,int *,int ,int ,int ,int,TYPE_9__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_8__* FUNC_2 (int*,int ,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3( sout_mux_t *VAR_2, sout_buffer_chain_t *VAR_3 )
{
    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;
    pes_mapped_stream_t VAR_5[VAR_2->i_nb_inputs];

    for (int VAR_6 = 0; VAR_6 < VAR_2->i_nb_inputs; VAR_6++ )
    {
        sout_input_t *VAR_7 = VAR_2->pp_inputs[VAR_6];
        sout_input_sys_t *VAR_8 = (sout_input_sys_t*)VAR_7->p_sys;

        int VAR_9 = VAR_7->p_fmt->i_id;
        pmt_map_t *VAR_10 = FUNC_2( &VAR_9, VAR_4->pmtmap,
                                       VAR_4->i_pmtslots, sizeof(pmt_map_t), VAR_1 );


        VAR_5[VAR_6].i_mapped_prog = VAR_10 ? VAR_10->i_prog : 0;
        VAR_5[VAR_6].fmt = VAR_7->p_fmt;
        VAR_5[VAR_6].pes = &VAR_8->pes;
        VAR_5[VAR_6].ts = &VAR_8->ts;
    }

    FUNC_0( VAR_4->p_dvbpsi, FUNC_1(VAR_2), VAR_4->standard,
              VAR_3, (PEStoTSCallback)VAR_0,
              VAR_4->i_tsid, VAR_4->i_pmt_version_number,
              ((sout_input_sys_t *)VAR_4->p_pcr_input->p_sys)->ts.i_pid,
              &VAR_4->sdt,
              VAR_4->i_num_pmt, VAR_4->pmt, VAR_4->i_pmt_program_number,
              VAR_2->i_nb_inputs, VAR_5 );
}
