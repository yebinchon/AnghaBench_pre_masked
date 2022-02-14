
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_3__* write; TYPE_2__* read; int fd; int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_8__ {int active; } ;
struct TYPE_7__ {uintptr_t instance; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,struct epoll_event*) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_connection_t *VAR_11)
{
    struct epoll_event VAR_12;

    VAR_12.events = VAR_1|VAR_2|VAR_0|VAR_3;
    VAR_12.data.ptr = (void *) ((uintptr_t) VAR_11 | VAR_11->read->instance);

    FUNC_1(VAR_7, VAR_11->log, 0,
                   "epoll add connection: fd:%d ev:%08XD", VAR_11->fd, VAR_12.events);

    if (FUNC_0(VAR_9, VAR_4, VAR_11->fd, &VAR_12) == -1) {
        FUNC_2(VAR_6, VAR_11->log, VAR_10,
                      "epoll_ctl(EPOLL_CTL_ADD, %d) failed", VAR_11->fd);
        return VAR_5;
    }

    VAR_11->read->active = 1;
    VAR_11->write->active = 1;

    return VAR_8;
}
