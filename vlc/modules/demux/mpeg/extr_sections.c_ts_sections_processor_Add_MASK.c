
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {scalar_t__ i_extension_id; scalar_t__ i_table_id; scalar_t__ pf_callback; struct TYPE_8__* p_next; TYPE_4__* p_dvbpsi; void* p_callback_data; } ;
typedef TYPE_1__ ts_sections_processor_t ;
typedef scalar_t__ ts_section_processor_callback_t ;
typedef int demux_t ;
struct TYPE_9__ {int * p_sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_4( demux_t *VAR_3,
                                ts_sections_processor_t **VAR_4,
                                uint8_t VAR_5, uint16_t VAR_6,
                                ts_section_processor_callback_t VAR_7,
                                void *VAR_8 )
{
    ts_sections_processor_t *VAR_9 = *VAR_4;
    for( ; VAR_9; VAR_9 = VAR_9->p_next )
    {

        if ( VAR_9->i_extension_id == VAR_6 &&
             VAR_9->i_table_id == VAR_5 &&
             VAR_9->pf_callback == VAR_7 )
            return;
    }

    VAR_9 = FUNC_1( sizeof(ts_sections_processor_t) );
    if( VAR_9 )
    {
        VAR_9->pf_callback = VAR_7;
        VAR_9->i_extension_id = VAR_6;
        VAR_9->i_table_id = VAR_5;
        VAR_9->p_dvbpsi = FUNC_0( &VAR_1, VAR_0 );
        VAR_9->p_dvbpsi->p_sys = VAR_3;
        VAR_9->p_callback_data = VAR_8;

        if( !FUNC_2( VAR_9->p_dvbpsi,
                                         VAR_2, VAR_9 ) )
        {
            FUNC_3( VAR_9 );
            return;
        }

        VAR_9->p_next = *VAR_4;
        *VAR_4 = VAR_9;
    }
}
