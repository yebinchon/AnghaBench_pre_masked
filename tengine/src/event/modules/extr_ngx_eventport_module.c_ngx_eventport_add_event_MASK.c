
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {int oneshot; uintptr_t instance; int active; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_5__ {int fd; TYPE_1__* read; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,void*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_10, ngx_int_t VAR_11, ngx_uint_t VAR_12)
{
    ngx_int_t VAR_13, VAR_14;
    ngx_event_t *VAR_15;
    ngx_connection_t *VAR_16;

    VAR_16 = VAR_10->data;

    VAR_13 = VAR_11;

    if (VAR_11 == VAR_4) {
        VAR_15 = VAR_16->write;
        VAR_14 = VAR_6;




    } else {
        VAR_15 = VAR_16->read;
        VAR_14 = VAR_5;



    }

    if (VAR_15->oneshot) {
        VAR_13 |= VAR_14;
    }

    FUNC_0(VAR_2, VAR_10->log, 0,
                   "eventport add event: fd:%d ev:%04Xi", VAR_16->fd, VAR_13);

    if (FUNC_2(VAR_8, VAR_7, VAR_16->fd, VAR_13,
                       (void *) ((uintptr_t) VAR_10 | VAR_10->instance))
        == -1)
    {
        FUNC_1(VAR_1, VAR_10->log, VAR_9,
                      "port_associate() failed");
        return VAR_0;
    }

    VAR_10->active = 1;
    VAR_10->oneshot = 1;

    return VAR_3;
}
