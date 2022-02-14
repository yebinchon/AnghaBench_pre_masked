
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fmt; } ;
typedef TYPE_1__ ts_es_t ;
struct TYPE_6__ {int i_program_number; int i_pcr_pid; } ;
typedef TYPE_2__ dvbpsi_pmt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1( const dvbpsi_pmt_t *VAR_3, ts_es_t *VAR_4, int VAR_5 )
{


    if ( VAR_3->i_program_number == 0x1 &&
         VAR_3->i_pcr_pid == 0x1000 &&
        ( VAR_5 >> 8 ) == 0x11 )
    {

        FUNC_0( &VAR_4->fmt, VAR_0, VAR_2 );
    }
    else
        FUNC_0( &VAR_4->fmt, VAR_0, VAR_1 );
}
