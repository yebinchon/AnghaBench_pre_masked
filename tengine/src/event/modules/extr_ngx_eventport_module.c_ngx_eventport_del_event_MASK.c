
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {uintptr_t instance; scalar_t__ oneshot; scalar_t__ active; int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_5__ {int fd; TYPE_1__* read; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;


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
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ,void*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_event_t *VAR_11, ngx_int_t VAR_12, ngx_uint_t VAR_13)
{
    ngx_event_t *VAR_14;
    ngx_connection_t *VAR_15;







    if (VAR_13 & VAR_0) {
        VAR_11->active = 0;
        VAR_11->oneshot = 0;
        return VAR_4;
    }

    VAR_15 = VAR_11->data;

    if (VAR_12 == VAR_5) {
        VAR_14 = VAR_15->write;
        VAR_12 = VAR_7;

    } else {
        VAR_14 = VAR_15->read;
        VAR_12 = VAR_6;
    }

    if (VAR_14->oneshot) {
        FUNC_1(VAR_3, VAR_11->log, 0,
                       "eventport change event: fd:%d ev:%04Xi", VAR_15->fd, VAR_12);

        if (FUNC_3(VAR_9, VAR_8, VAR_15->fd, VAR_12,
                           (void *) ((uintptr_t) VAR_11 | VAR_11->instance))
            == -1)
        {
            FUNC_2(VAR_2, VAR_11->log, VAR_10,
                          "port_associate() failed");
            return VAR_1;
        }

    } else {
        FUNC_0(VAR_3, VAR_11->log, 0,
                       "eventport del event: fd:%d", VAR_15->fd);

        if (FUNC_4(VAR_9, VAR_8, VAR_15->fd) == -1) {
            FUNC_2(VAR_2, VAR_11->log, VAR_10,
                          "port_dissociate() failed");
            return VAR_1;
        }
    }

    VAR_11->active = 0;
    VAR_11->oneshot = 0;

    return VAR_4;
}
