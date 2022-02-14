
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interrupted; int lock; int data; int (* callback ) (int ) ;} ;
typedef TYPE_1__ vlc_interrupt_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vlc_interrupt_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));





    FUNC_2(&VAR_0->lock);
    VAR_0->interrupted = 1;
    if (VAR_0->callback != ((void*)0))
        VAR_0->callback(VAR_0->data);
    FUNC_3(&VAR_0->lock);
}
