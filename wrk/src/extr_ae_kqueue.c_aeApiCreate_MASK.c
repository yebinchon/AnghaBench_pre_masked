
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kevent {int dummy; } ;
struct TYPE_5__ {int setsize; TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_6__ {int kqfd; struct TYPE_6__* events; } ;
typedef TYPE_2__ aeApiState ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(aeEventLoop *VAR_0) {
    aeApiState *VAR_1 = FUNC_2(sizeof(aeApiState));

    if (!VAR_1) return -1;
    VAR_1->events = FUNC_2(sizeof(struct kevent)*VAR_0->setsize);
    if (!VAR_1->events) {
        FUNC_1(VAR_1);
        return -1;
    }
    VAR_1->kqfd = FUNC_0();
    if (VAR_1->kqfd == -1) {
        FUNC_1(VAR_1->events);
        FUNC_1(VAR_1);
        return -1;
    }
    VAR_0->apidata = VAR_1;
    return 0;
}
