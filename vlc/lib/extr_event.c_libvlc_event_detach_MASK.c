
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ libvlc_event_type_t ;
struct TYPE_6__ {int lock; int listeners; } ;
typedef TYPE_1__ libvlc_event_manager_t ;
struct TYPE_7__ {scalar_t__ event_type; scalar_t__ pf_callback; void* p_user_data; } ;
typedef TYPE_2__ libvlc_event_listener_t ;
typedef scalar_t__ libvlc_callback_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(libvlc_event_manager_t *VAR_0, libvlc_event_type_t VAR_1,
                         libvlc_callback_t VAR_2, void *VAR_3)
{
    FUNC_5(&VAR_0->lock);
    for (size_t VAR_4 = 0; VAR_4 < FUNC_2(&VAR_0->listeners); VAR_4++)
    {
         libvlc_event_listener_t *VAR_5;

         VAR_5 = FUNC_3(&VAR_0->listeners, VAR_4);

         if (VAR_5->event_type == VAR_1
          && VAR_5->pf_callback == VAR_2
          && VAR_5->p_user_data == VAR_3)
         {
             FUNC_4(&VAR_0->listeners, VAR_4);
             FUNC_6(&VAR_0->lock);
             FUNC_1(VAR_5);
             return;
         }
    }
    FUNC_0();
}
