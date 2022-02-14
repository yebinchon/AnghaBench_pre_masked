
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_5__ {int i_pmt_program_number; int pmt; int i_num_pmt; int pat; int i_pat_version_number; int i_tsid; int p_dvbpsi; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int sout_buffer_chain_t ;
typedef int PEStoTSCallback ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int *,int ,int ,int ) ;

void FUNC_1( sout_mux_t *VAR_1, sout_buffer_chain_t *VAR_2 )
{
    sout_mux_sys_t *VAR_3 = VAR_1->p_sys;

    FUNC_0( VAR_3->p_dvbpsi,
              VAR_2, (PEStoTSCallback)VAR_0,
              VAR_3->i_tsid, VAR_3->i_pat_version_number,
              &VAR_3->pat,
              VAR_3->i_num_pmt, VAR_3->pmt, VAR_3->i_pmt_program_number );
}
