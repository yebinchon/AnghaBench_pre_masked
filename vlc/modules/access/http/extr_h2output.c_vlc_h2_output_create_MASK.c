
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_tls {int dummy; } ;
struct TYPE_4__ {int * first; int ** last; } ;
struct TYPE_3__ {int * first; int ** last; } ;
struct vlc_h2_output {int failed; int closing; int lock; int wait; int thread; scalar_t__ size; TYPE_2__ queue; TYPE_1__ prio; struct vlc_tls* tls; } ;


 int VAR_0 ;
 int FUNC_0 (struct vlc_h2_output*) ;
 struct vlc_h2_output* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,void* (*) (void*),struct vlc_h2_output*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct vlc_h2_output *FUNC_10(struct vlc_tls *VAR_1, bool VAR_2)
{
    struct vlc_h2_output *VAR_3 = FUNC_1(sizeof (*VAR_3));
    if (FUNC_2(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->tls = VAR_1;

    VAR_3->prio.first = ((void*)0);
    VAR_3->prio.last = &VAR_3->prio.first;
    VAR_3->queue.first = ((void*)0);
    VAR_3->queue.last = &VAR_3->queue.first;
    VAR_3->size = 0;
    VAR_3->failed = 0;
    VAR_3->closing = 0;

    FUNC_9(&VAR_3->lock);
    FUNC_5(&VAR_3->wait);

    void *(*VAR_4)(void *) = VAR_2 ? FUNC_6
                                 : FUNC_7;
    if (FUNC_3(&VAR_3->thread, VAR_4, VAR_3, VAR_0))
    {
        FUNC_4(&VAR_3->wait);
        FUNC_8(&VAR_3->lock);
        FUNC_0(VAR_3);
        VAR_3 = ((void*)0);
    }
    return VAR_3;
}
