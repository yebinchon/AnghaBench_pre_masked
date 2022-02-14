
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vlc_event_type_t ;
struct TYPE_5__ {int lock; TYPE_2__* events; } ;
typedef TYPE_1__ vlc_event_manager_t ;
struct TYPE_7__ {int i_size; struct vlc_event_listener_t** p_elems; } ;
struct TYPE_6__ {TYPE_4__ listeners; } ;
typedef TYPE_2__ vlc_event_listeners_group_t ;
typedef scalar_t__ vlc_event_callback_t ;
struct vlc_event_listener_t {scalar_t__ pf_callback; void* p_user_data; } ;


 int FUNC_0 (TYPE_4__,int) ;
 int FUNC_1 (struct vlc_event_listener_t*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( vlc_event_manager_t *VAR_0,
                       vlc_event_type_t VAR_1,
                       vlc_event_callback_t VAR_2,
                       void *VAR_3 )
{
    vlc_event_listeners_group_t *VAR_4 = &VAR_0->events[VAR_1];

    FUNC_3( &VAR_0->lock );

    for (int VAR_5 = 0; VAR_5 < VAR_4->listeners.i_size; ++VAR_5)
    {
        struct vlc_event_listener_t *VAR_6 = VAR_4->listeners.p_elems[VAR_5];
        if( VAR_6->pf_callback == VAR_2 &&
            VAR_6->p_user_data == VAR_3 )
        {

            FUNC_0( VAR_4->listeners, VAR_5 );
            FUNC_4( &VAR_0->lock );
            FUNC_1( VAR_6 );
            return;
        }
    }

    FUNC_2();
}
