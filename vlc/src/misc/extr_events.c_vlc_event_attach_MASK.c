
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t vlc_event_type_t ;
struct TYPE_7__ {int lock; TYPE_2__* events; } ;
typedef TYPE_1__ vlc_event_manager_t ;
struct TYPE_8__ {int listeners; } ;
typedef TYPE_2__ vlc_event_listeners_group_t ;
struct TYPE_9__ {int pf_callback; void* p_user_data; } ;
typedef TYPE_3__ vlc_event_listener_t ;
typedef int vlc_event_callback_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4( vlc_event_manager_t * VAR_2,
                      vlc_event_type_t VAR_3,
                      vlc_event_callback_t VAR_4,
                      void *VAR_5 )
{
    vlc_event_listener_t * VAR_6;
    vlc_event_listeners_group_t *VAR_7 = &VAR_2->events[VAR_3];

    VAR_6 = FUNC_1(sizeof(vlc_event_listener_t));
    if( !VAR_6 )
        return VAR_0;

    VAR_6->p_user_data = VAR_5;
    VAR_6->pf_callback = VAR_4;

    FUNC_2( &VAR_2->lock );
    FUNC_0( VAR_7->listeners, VAR_6 );
    FUNC_3( &VAR_2->lock );
    return VAR_1;
}
