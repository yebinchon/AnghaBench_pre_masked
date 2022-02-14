
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {int i_size; TYPE_3__** p_elems; } ;
struct TYPE_8__ {TYPE_1__ eits; } ;
typedef TYPE_2__ ts_psip_context_t ;
struct TYPE_9__ {scalar_t__ i_version; scalar_t__ i_source_id; TYPE_4__* p_first_event; } ;
typedef TYPE_3__ dvbpsi_atsc_eit_t ;
struct TYPE_10__ {scalar_t__ i_event_id; struct TYPE_10__* p_next; } ;
typedef TYPE_4__ dvbpsi_atsc_eit_event_t ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static const dvbpsi_atsc_eit_event_t * FUNC_1( ts_psip_context_t *VAR_0,
                                                              uint32_t VAR_1, uint8_t VAR_2 )
{
    uint16_t VAR_3, VAR_4;
    FUNC_0( VAR_1, &VAR_3, &VAR_4 );

    for( int VAR_5=0; VAR_5<VAR_0->eits.i_size; VAR_5++ )
    {
        dvbpsi_atsc_eit_t *VAR_6 = VAR_0->eits.p_elems[VAR_5];
        if( VAR_6->i_version != VAR_2 || VAR_6->i_source_id != VAR_3 )
            continue;

        for( const dvbpsi_atsc_eit_event_t *VAR_7 = VAR_6->p_first_event;
                                            VAR_7 ; VAR_7 = VAR_7->p_next )
        {
            if( VAR_7->i_event_id == VAR_4 )
                return VAR_7;
        }
    }
    return ((void*)0);
}
