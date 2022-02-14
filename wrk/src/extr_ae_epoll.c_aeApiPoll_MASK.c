
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int fd; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct TYPE_8__ {TYPE_2__* fired; int setsize; TYPE_4__* apidata; } ;
typedef TYPE_3__ aeEventLoop ;
struct TYPE_9__ {struct epoll_event* events; int epfd; } ;
typedef TYPE_4__ aeApiState ;
struct TYPE_7__ {int mask; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct epoll_event*,int ,int) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_6, struct timeval *VAR_7) {
    aeApiState *VAR_8 = VAR_6->apidata;
    int VAR_9, VAR_10 = 0;

    VAR_9 = FUNC_0(VAR_8->epfd,VAR_8->events,VAR_6->setsize,
            VAR_7 ? (VAR_7->tv_sec*1000 + VAR_7->tv_usec/1000) : -1);
    if (VAR_9 > 0) {
        int VAR_11;

        VAR_10 = VAR_9;
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            int VAR_12 = 0;
            struct epoll_event *VAR_13 = VAR_8->events+VAR_11;

            if (VAR_13->events & VAR_4) VAR_12 |= VAR_0;
            if (VAR_13->events & VAR_5) VAR_12 |= VAR_1;
            if (VAR_13->events & VAR_2) VAR_12 |= VAR_1;
            if (VAR_13->events & VAR_3) VAR_12 |= VAR_1;
            VAR_6->fired[VAR_11].fd = VAR_13->data.fd;
            VAR_6->fired[VAR_11].mask = VAR_12;
        }
    }
    return VAR_10;
}
