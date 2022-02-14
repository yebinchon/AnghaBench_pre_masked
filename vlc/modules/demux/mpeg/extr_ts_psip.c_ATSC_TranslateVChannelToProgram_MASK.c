
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {TYPE_2__* p_first_channel; } ;
typedef TYPE_1__ dvbpsi_atsc_vct_t ;
struct TYPE_5__ {scalar_t__ i_source_id; scalar_t__ i_program_number; struct TYPE_5__* p_next; } ;
typedef TYPE_2__ dvbpsi_atsc_vct_channel_t ;



__attribute__((used)) static bool FUNC_0( const dvbpsi_atsc_vct_t *VAR_0,
                                             uint16_t VAR_1, uint16_t *VAR_2 )
{
    for( const dvbpsi_atsc_vct_channel_t *VAR_3 = VAR_0->p_first_channel;
                                          VAR_3; VAR_3 = VAR_3->p_next )
    {
        if( VAR_3->i_source_id == VAR_1 )
        {
            *VAR_2 = VAR_3->i_program_number;
            return 1;
        }
    }
    return 0;
}
