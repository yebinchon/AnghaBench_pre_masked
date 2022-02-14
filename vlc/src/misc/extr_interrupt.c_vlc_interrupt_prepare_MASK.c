
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* callback ) (void*) ;int lock; int interrupted; void* data; } ;
typedef TYPE_1__ vlc_interrupt_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vlc_interrupt_t *VAR_1,
                                  void (*VAR_2)(void *), void *VAR_3)
{
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_1 == VAR_0);

    FUNC_2(&VAR_1->lock);
    FUNC_0(VAR_1->callback == ((void*)0));
    VAR_1->callback = VAR_2;
    VAR_1->data = VAR_3;

    if (FUNC_1(VAR_1->interrupted))
        VAR_2(VAR_3);
    FUNC_3(&VAR_1->lock);
}
