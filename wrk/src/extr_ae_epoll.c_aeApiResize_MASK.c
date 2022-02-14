
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct epoll_event {int dummy; } ;
struct TYPE_4__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_5__ {int events; } ;
typedef TYPE_2__ aeApiState ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_0, int VAR_1) {
    aeApiState *VAR_2 = VAR_0->apidata;

    VAR_2->events = FUNC_0(VAR_2->events, sizeof(struct epoll_event)*VAR_1);
    return 0;
}
