
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_8__ {int window; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_10__ {int original; int snapshot; int statistic; int display_lock; int control; TYPE_2__ display_cfg; int window_enabled; scalar_t__ dec_device; TYPE_1__ filter; int window_lock; int splitter_name; scalar_t__ dummy; int refs; } ;
typedef TYPE_4__ vout_thread_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

void FUNC_12(vout_thread_t *VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_1->p;

    if (FUNC_2(&VAR_2->refs, 1, VAR_0))
        return;

    if (VAR_2->dummy)
    {
        FUNC_7(FUNC_0(VAR_1));
        return;
    }

    FUNC_3(VAR_2->splitter_name);


    FUNC_6(&VAR_2->window_lock);
    FUNC_6(&VAR_2->filter.lock);

    if (VAR_2->dec_device)
        FUNC_5(VAR_2->dec_device);

    FUNC_1(!VAR_2->window_enabled);
    FUNC_9(VAR_2->display_cfg.window);

    FUNC_8(&VAR_2->control);
    FUNC_6(&VAR_2->display_lock);


    FUNC_11(&VAR_2->statistic);


    FUNC_10(VAR_2->snapshot);
    FUNC_4(&VAR_2->original);
    FUNC_7(FUNC_0(VAR_1));
}
