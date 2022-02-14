
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_6__ {struct TYPE_6__* next; int id; int ctx; int (* handler ) (int ,int ) ;} ;
typedef TYPE_2__ ngx_thread_task_t ;
struct TYPE_5__ {TYPE_2__* first; TYPE_2__** last; } ;
struct TYPE_7__ {int name; int log; int mtx; TYPE_1__ queue; int cond; int waiting; } ;
typedef TYPE_3__ ngx_thread_pool_t ;
struct TYPE_8__ {TYPE_2__** last; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,char*,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void *
FUNC_15(void *VAR_11)
{
    ngx_thread_pool_t *VAR_12 = VAR_11;

    int VAR_13;
    sigset_t VAR_14;
    ngx_thread_task_t *VAR_15;





    FUNC_0(VAR_1, VAR_12->log, 0,
                   "thread in pool \"%V\" started", &VAR_12->name);

    FUNC_13(&VAR_14);

    FUNC_12(&VAR_14, VAR_5);
    FUNC_12(&VAR_14, VAR_4);
    FUNC_12(&VAR_14, VAR_6);
    FUNC_12(&VAR_14, VAR_3);

    VAR_13 = FUNC_11(VAR_7, &VAR_14, ((void*)0));
    if (VAR_13) {
        FUNC_2(VAR_0, VAR_12->log, VAR_13, "pthread_sigmask() failed");
        return ((void*)0);
    }

    for ( ;; ) {
        if (FUNC_7(&VAR_12->mtx, VAR_12->log) != VAR_2) {
            return ((void*)0);
        }


        VAR_12->waiting--;

        while (VAR_12->queue.first == ((void*)0)) {
            if (FUNC_6(&VAR_12->cond, &VAR_12->mtx, VAR_12->log)
                != VAR_2)
            {
                (void) FUNC_8(&VAR_12->mtx, VAR_12->log);
                return ((void*)0);
            }
        }

        VAR_15 = VAR_12->queue.first;
        VAR_12->queue.first = VAR_15->next;

        if (VAR_12->queue.first == ((void*)0)) {
            VAR_12->queue.last = &VAR_12->queue.first;
        }

        if (FUNC_8(&VAR_12->mtx, VAR_12->log) != VAR_2) {
            return ((void*)0);
        }





        FUNC_1(VAR_1, VAR_12->log, 0,
                       "run task #%ui in thread pool \"%V\"",
                       VAR_15->id, &VAR_12->name);

        VAR_15->handler(VAR_15->ctx, VAR_12->log);

        FUNC_1(VAR_1, VAR_12->log, 0,
                       "complete task #%ui in thread pool \"%V\"",
                       VAR_15->id, &VAR_12->name);

        VAR_15->next = ((void*)0);

        FUNC_5(&VAR_9, 1, 2048);

        *VAR_8.last = VAR_15;
        VAR_8.last = &VAR_15->next;

        FUNC_3();

        FUNC_10(&VAR_9);

        (void) FUNC_4(VAR_10);
    }
}
