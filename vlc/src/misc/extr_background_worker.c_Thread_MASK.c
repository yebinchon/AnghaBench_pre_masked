
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct task {scalar_t__ timeout; int entity; } ;
struct TYPE_2__ {int (* pf_stop ) (int ,void*) ;scalar_t__ (* pf_probe ) (int ,void*) ;scalar_t__ (* pf_start ) (int ,int ,void**) ;} ;
struct background_worker {int owner; TYPE_1__ conf; int lock; } ;
struct background_thread {int cancel; int probe; int probe_cancel_wait; struct task* task; struct background_worker* owner; } ;


 scalar_t__ VAR_0 ;
 struct task* FUNC_0 (struct background_worker*,int) ;
 int FUNC_1 (struct background_thread*) ;
 int FUNC_2 (struct background_thread*,struct task*) ;
 scalar_t__ FUNC_3 (int ,int ,void**) ;
 scalar_t__ FUNC_4 (int ,void*) ;
 int FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void* FUNC_10( void* VAR_1 )
{
    struct background_thread *VAR_2 = VAR_1;
    struct background_worker *VAR_3 = VAR_2->owner;

    for (;;)
    {
        FUNC_7(&VAR_3->lock);
        struct task *VAR_4 = FUNC_0(VAR_3, 5000);
        if (!VAR_4)
        {
            FUNC_8(&VAR_3->lock);

            break;
        }

        VAR_2->task = VAR_4;
        VAR_2->cancel = 0;
        VAR_2->probe = 0;
        vlc_tick_t VAR_5;
        if (VAR_4->timeout > 0)
            VAR_5 = FUNC_9() + VAR_4->timeout;
        else
            VAR_5 = VAR_0;
        FUNC_8(&VAR_3->lock);

        void *VAR_6;
        if (VAR_3->conf.pf_start(VAR_3->owner, VAR_4->entity, &VAR_6))
        {
            FUNC_2(VAR_2, VAR_4);
            continue;
        }

        for (;;)
        {
            FUNC_7(&VAR_3->lock);
            bool VAR_7 = 0;
            while (!VAR_7 && !VAR_2->probe && !VAR_2->cancel)

                VAR_7 = FUNC_6(&VAR_2->probe_cancel_wait,
                                             &VAR_3->lock, VAR_5) != 0;

            bool VAR_8 = VAR_2->cancel;
            VAR_2->cancel = 0;
            VAR_2->probe = 0;
            FUNC_8(&VAR_3->lock);

            if (VAR_7 || VAR_8
                    || VAR_3->conf.pf_probe(VAR_3->owner, VAR_6))
            {
                VAR_3->conf.pf_stop(VAR_3->owner, VAR_6);
                FUNC_2(VAR_2, VAR_4);
                break;
            }
        }
    }

    FUNC_1(VAR_2);

    return ((void*)0);
}
