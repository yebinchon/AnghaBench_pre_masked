
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ callback; void* const* data; } ;
typedef TYPE_1__ vlc_interrupt_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(void *const VAR_1[2])
{
    vlc_interrupt_t *VAR_2 = VAR_1[1];
    if (VAR_2 == ((void*)0))
        return 0;

    FUNC_0(VAR_2->callback == VAR_0);
    FUNC_0(VAR_2->data == VAR_1);
    return FUNC_1(VAR_2);
}
