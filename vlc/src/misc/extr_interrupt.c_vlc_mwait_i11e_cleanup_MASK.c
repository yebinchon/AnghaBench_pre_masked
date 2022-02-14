
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int * data; } ;
typedef TYPE_1__ vlc_interrupt_t ;
typedef int vlc_cond_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    vlc_interrupt_t *VAR_1 = VAR_0;
    vlc_cond_t *VAR_2 = VAR_1->data;

    FUNC_2(&VAR_1->lock);
    FUNC_1(VAR_1);
    FUNC_0(VAR_2);
}
