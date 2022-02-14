
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int libvlc_event_type_t ;
struct TYPE_7__ {int lock; int listeners; } ;
typedef TYPE_1__ libvlc_event_manager_t ;
struct TYPE_8__ {int pf_callback; void* p_user_data; int event_type; } ;
typedef TYPE_2__ libvlc_event_listener_t ;
typedef int libvlc_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(libvlc_event_manager_t *VAR_3, libvlc_event_type_t VAR_4,
                        libvlc_callback_t VAR_5, void *VAR_6)
{
    libvlc_event_listener_t *VAR_7 = FUNC_1(sizeof (*VAR_7));
    if (FUNC_2(VAR_7 == ((void*)0)))
        return VAR_0;

    VAR_7->event_type = VAR_4;
    VAR_7->p_user_data = VAR_6;
    VAR_7->pf_callback = VAR_5;

    int VAR_8;
    FUNC_4(&VAR_3->lock);
    if(FUNC_3(&VAR_3->listeners, VAR_7) != 0)
    {
        VAR_8 = VAR_1;
        FUNC_0(VAR_7);
    }
    else
        VAR_8 = VAR_2;
    FUNC_5(&VAR_3->lock);
    return VAR_8;
}
