
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_6__ {int lock; int interrupted; } ;
typedef TYPE_1__ vlc_interrupt_t ;
typedef int vlc_cond_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ) ;

int FUNC_10(vlc_tick_t VAR_3)
{
    vlc_interrupt_t *VAR_4 = VAR_0;
    if (VAR_4 == ((void*)0))
        return FUNC_9(VAR_3), 0;

    vlc_cond_t VAR_5;
    FUNC_3(&VAR_5);

    FUNC_6(VAR_4, VAR_2, &VAR_5);

    FUNC_7(&VAR_4->lock);
    FUNC_1(VAR_1, VAR_4);
    while (!VAR_4->interrupted
        && FUNC_4(&VAR_5, &VAR_4->lock, VAR_3) == 0);
    FUNC_0();
    FUNC_8(&VAR_4->lock);

    int VAR_6 = FUNC_5(VAR_4);
    FUNC_2(&VAR_5);
    return VAR_6;
}
