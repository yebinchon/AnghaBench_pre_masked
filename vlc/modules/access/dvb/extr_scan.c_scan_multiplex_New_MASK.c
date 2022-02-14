
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int scan_tuner_config_t ;
struct TYPE_5__ {int i_snr; int b_scanned; void* i_sdt_version; void* i_nit_version; int * pp_services; scalar_t__ i_services; int * psz_network_name; int i_network_id; int i_ts_id; int cfg; } ;
typedef TYPE_1__ scan_multiplex_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static scan_multiplex_t *FUNC_2( const scan_tuner_config_t *VAR_2, uint16_t VAR_3 )
{
    scan_multiplex_t *VAR_4 = FUNC_1( sizeof(*VAR_4) );
    if( FUNC_0(VAR_4) )
    {
        VAR_4->cfg = *VAR_2;
        VAR_4->i_ts_id = VAR_3;
        VAR_4->i_network_id = VAR_0;
        VAR_4->psz_network_name = ((void*)0);
        VAR_4->i_services = 0;
        VAR_4->pp_services = ((void*)0);
        VAR_4->i_nit_version = VAR_1;
        VAR_4->i_sdt_version = VAR_1;
        VAR_4->i_snr = -1;
        VAR_4->b_scanned = 0;
    }
    return VAR_4;
}
