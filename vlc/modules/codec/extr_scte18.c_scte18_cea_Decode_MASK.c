
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int alert_message_time_remaining; int event_duration; int alert_priority; void* psz_alert_text; int event_start_time; void* psz_nature_of_activation; scalar_t__* psz_eas_event_code; scalar_t__* rgc_eas_originator_code; void* i_eas_event_id; } ;
typedef TYPE_1__ scte18_cea_t ;
struct TYPE_8__ {int* p_buffer; size_t i_buffer; } ;
typedef TYPE_2__ block_t ;
typedef int atsc_a65_handle_t ;


 int FUNC_0 (int) ;





 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 void* FUNC_3 (int *,int const*,size_t) ;
 scalar_t__* FUNC_4 (size_t) ;
 int FUNC_5 (scalar_t__*,int const*,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;

__attribute__((used)) static scte18_cea_t * FUNC_8( atsc_a65_handle_t *VAR_0, const block_t *VAR_1 )
{
    size_t VAR_2;
    scte18_cea_t *VAR_3 = FUNC_7();
    if( !VAR_3 )
        return ((void*)0);

    const uint8_t *VAR_4 = VAR_1->p_buffer;
    size_t VAR_5 = VAR_1->i_buffer;

    if( VAR_5 < 34 || VAR_4[0] != 0 )
        goto error;

    FUNC_0(1);

    VAR_3->i_eas_event_id = FUNC_2( VAR_4 );
    FUNC_0(2);

    FUNC_5( VAR_3->rgc_eas_originator_code, VAR_4, 3 );
    FUNC_0(3);

    VAR_2 = VAR_4[0];
    if( VAR_5 < 23 + VAR_2 )
        goto error;
    VAR_3->psz_eas_event_code = FUNC_4( VAR_2 + 1 );
    FUNC_5( VAR_3->psz_eas_event_code, &VAR_4[1], VAR_2 );
    VAR_3->psz_eas_event_code[VAR_2] = 0;
    FUNC_0( VAR_2 + 1 );

    VAR_2 = VAR_4[0];
    if( VAR_5 < VAR_2 + 22 )
        goto error;
    VAR_3->psz_nature_of_activation = FUNC_3( VAR_0, &VAR_4[1], VAR_2 );
    FUNC_0(1 + VAR_2);

    if( VAR_5 < 21 )
        goto error;
    VAR_3->alert_message_time_remaining = VAR_4[0];
    FUNC_0(1);

    VAR_3->event_start_time = FUNC_1( VAR_4 );
    FUNC_0(4);

    VAR_3->event_duration = FUNC_2( VAR_4 );
    if( VAR_3->event_duration != 0 && ( VAR_3->event_duration < 15 || VAR_3->event_duration > 6000 ) )
        goto error;
    FUNC_0(2);

    VAR_3->alert_priority = VAR_4[1] & 0x0f;
    switch( VAR_3->alert_priority )
    {
        case 128:
        case 131:
        case 129:
        case 132:
        case 130:
            break;
        default:
            goto error;
    }

    FUNC_0(2);

    FUNC_0(2);

    FUNC_0(2);
    FUNC_0(2);

    FUNC_0(2);

    VAR_2 = FUNC_2( VAR_4 );
    if( VAR_5 < VAR_2 + 2 )
        goto error;
    VAR_3->psz_alert_text = FUNC_3( VAR_0, &VAR_4[2], VAR_2 );

    return VAR_3;

error:
    FUNC_6( VAR_3 );
    return ((void*)0);
}
