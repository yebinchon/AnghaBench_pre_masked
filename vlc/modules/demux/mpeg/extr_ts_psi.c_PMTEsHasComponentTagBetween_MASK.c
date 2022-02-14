
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ i_component_tag; } ;
typedef TYPE_1__ dvbpsi_stream_identifier_dr_t ;
typedef int dvbpsi_pmt_es_t ;
typedef int dvbpsi_descriptor_t ;


 int * FUNC_0 (int const*,int) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2( const dvbpsi_pmt_es_t *VAR_0,
                                         uint8_t VAR_1, uint8_t VAR_2 )
{
    dvbpsi_descriptor_t *VAR_3 = FUNC_0( VAR_0, 0x52 );
    if( !VAR_3 )
        return 0;
    dvbpsi_stream_identifier_dr_t *VAR_4 = FUNC_1( VAR_3 );
    if( !VAR_4 )
        return 0;

    return VAR_4->i_component_tag >= VAR_1 && VAR_4->i_component_tag <= VAR_2;
}
