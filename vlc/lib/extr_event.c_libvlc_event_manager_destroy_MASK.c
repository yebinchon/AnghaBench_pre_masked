
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int listeners; int lock; } ;
typedef TYPE_1__ libvlc_event_manager_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;

void FUNC_5(libvlc_event_manager_t *VAR_0)
{
    FUNC_4(&VAR_0->lock);

    for (size_t VAR_1 = 0; VAR_1 < FUNC_2(&VAR_0->listeners); VAR_1++)
        FUNC_0(FUNC_3(&VAR_0->listeners, VAR_1));

    FUNC_1(&VAR_0->listeners);
}
