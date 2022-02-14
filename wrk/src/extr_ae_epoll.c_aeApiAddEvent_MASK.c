
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; int member_0; } ;
struct TYPE_8__ {TYPE_2__* events; TYPE_4__* apidata; } ;
typedef TYPE_3__ aeEventLoop ;
struct TYPE_9__ {int epfd; } ;
typedef TYPE_4__ aeApiState ;
struct TYPE_7__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int,struct epoll_event*) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_7, int VAR_8, int VAR_9) {
    aeApiState *VAR_10 = VAR_7->apidata;
    struct epoll_event VAR_11 = {0};


    int VAR_12 = VAR_7->events[VAR_8].mask == VAR_0 ?
            VAR_5 : VAR_6;

    VAR_11.events = 0;
    VAR_9 |= VAR_7->events[VAR_8].mask;
    if (VAR_9 & VAR_1) VAR_11.events |= VAR_3;
    if (VAR_9 & VAR_2) VAR_11.events |= VAR_4;
    VAR_11.data.fd = VAR_8;
    if (FUNC_0(VAR_10->epfd,VAR_12,VAR_8,&VAR_11) == -1) return -1;
    return 0;
}
