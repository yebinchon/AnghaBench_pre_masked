
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {uintptr_t instance; scalar_t__ active; int log; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_7__ {int fd; TYPE_2__* read; TYPE_2__* write; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,int ,struct epoll_event*) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_13, ngx_int_t VAR_14, ngx_uint_t VAR_15)
{
    int VAR_16;
    uint32_t VAR_17;
    ngx_event_t *VAR_18;
    ngx_connection_t *VAR_19;
    struct epoll_event VAR_20;







    if (VAR_15 & VAR_5) {
        VAR_13->active = 0;
        return VAR_9;
    }

    VAR_19 = VAR_13->data;

    if (VAR_14 == VAR_10) {
        VAR_18 = VAR_19->write;
        VAR_17 = VAR_1;

    } else {
        VAR_18 = VAR_19->read;
        VAR_17 = VAR_0|VAR_2;
    }

    if (VAR_18->active) {
        VAR_16 = VAR_4;
        VAR_20.events = VAR_17 | (uint32_t) VAR_15;
        VAR_20.data.ptr = (void *) ((uintptr_t) VAR_19 | VAR_13->instance);

    } else {
        VAR_16 = VAR_3;
        VAR_20.events = 0;
        VAR_20.data.ptr = ((void*)0);
    }

    FUNC_1(VAR_8, VAR_13->log, 0,
                   "epoll del event: fd:%d op:%d ev:%08XD",
                   VAR_19->fd, VAR_16, VAR_20.events);

    if (FUNC_0(VAR_11, VAR_16, VAR_19->fd, &VAR_20) == -1) {
        FUNC_2(VAR_7, VAR_13->log, VAR_12,
                      "epoll_ctl(%d, %d) failed", VAR_16, VAR_19->fd);
        return VAR_6;
    }

    VAR_13->active = 0;

    return VAR_9;
}
