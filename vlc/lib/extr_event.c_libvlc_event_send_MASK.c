
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int p_obj; } ;
typedef TYPE_1__ libvlc_event_t ;
struct TYPE_9__ {int lock; int listeners; int p_obj; } ;
typedef TYPE_2__ libvlc_event_manager_t ;
struct TYPE_10__ {scalar_t__ event_type; int p_user_data; int (* pf_callback ) (TYPE_1__*,int ) ;} ;
typedef TYPE_3__ libvlc_event_listener_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 size_t FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( libvlc_event_manager_t * VAR_0,
                        libvlc_event_t * VAR_1 )
{

    VAR_1->p_obj = VAR_0->p_obj;

    FUNC_3(&VAR_0->lock);
    for (size_t VAR_2 = 0; VAR_2 < FUNC_1(&VAR_0->listeners); VAR_2++)
    {
        libvlc_event_listener_t *VAR_3;

        VAR_3 = FUNC_2(&VAR_0->listeners, VAR_2);
        if (VAR_3->event_type == VAR_1->type)
            VAR_3->pf_callback(VAR_1, VAR_3->p_user_data);
    }
    FUNC_4(&VAR_0->lock);
}
