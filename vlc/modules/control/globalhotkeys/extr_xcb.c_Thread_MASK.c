
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ detail; scalar_t__ state; } ;
typedef TYPE_1__ xcb_key_press_event_t ;
struct TYPE_10__ {int response_type; } ;
typedef TYPE_2__ xcb_generic_event_t ;
typedef int xcb_connection_t ;
struct pollfd {int fd; int events; } ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
struct TYPE_12__ {int i_map; TYPE_5__* p_map; int * p_connection; } ;
typedef TYPE_4__ intf_sys_t ;
struct TYPE_13__ {scalar_t__* p_keys; scalar_t__ i_modifier; int i_vlc; } ;
typedef TYPE_5__ hotkey_mapping_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *) ;

__attribute__((used)) static void *FUNC_9( void *VAR_5 )
{
    intf_thread_t *VAR_6 = VAR_5;
    intf_sys_t *VAR_7 = VAR_6->p_sys;
    xcb_connection_t *VAR_8 = VAR_7->p_connection;

    int VAR_9 = FUNC_5();


    FUNC_6( VAR_8 );


    int VAR_10 = FUNC_7( VAR_8 );
    for( ;; )
    {

        FUNC_4( VAR_9 );
        struct pollfd VAR_11 = { .fd = VAR_10, .events = VAR_1, };
        if( FUNC_1( &VAR_11, 1, -1 ) < 0 )
        {
            if( VAR_4 != VAR_0 )
                break;
            VAR_9 = FUNC_5();
            continue;
        }
        VAR_9 = FUNC_5();

        xcb_generic_event_t *VAR_12;
        while( ( VAR_12 = FUNC_8( VAR_8 ) ) )
        {
            if( ( VAR_12->response_type & 0x7f ) != VAR_2 )
            {
                FUNC_0( VAR_12 );
                continue;
            }

            xcb_key_press_event_t *VAR_13 = (xcb_key_press_event_t *)VAR_12;

            for( int VAR_14 = 0; VAR_14 < VAR_7->i_map; VAR_14++ )
            {
                hotkey_mapping_t *VAR_15 = &VAR_7->p_map[VAR_14];

                for( int VAR_16 = 0; VAR_15->p_keys[VAR_16] != VAR_3; VAR_16++ )
                    if( VAR_15->p_keys[VAR_16] == VAR_13->detail &&
                        VAR_15->i_modifier == VAR_13->state )
                    {
                        FUNC_2( FUNC_3(VAR_6),
                                        "global-key-pressed", VAR_15->i_vlc );
                        goto done;
                    }
            }
        done:
            FUNC_0( VAR_12 );
        }
    }

    return ((void*)0);
}
