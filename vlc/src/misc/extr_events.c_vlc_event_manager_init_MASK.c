
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* events; int lock; void* p_obj; } ;
typedef TYPE_1__ vlc_event_manager_t ;
struct TYPE_5__ {int listeners; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

void FUNC_3( vlc_event_manager_t * VAR_0, void * VAR_1 )
{
    VAR_0->p_obj = VAR_1;


    FUNC_2( &VAR_0->lock );

    for( size_t VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->events); VAR_2++ )
       FUNC_0( VAR_0->events[VAR_2].listeners );
}
