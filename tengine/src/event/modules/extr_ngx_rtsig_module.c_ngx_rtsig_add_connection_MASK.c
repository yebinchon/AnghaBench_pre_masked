
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {scalar_t__ signo; } ;
typedef TYPE_3__ ngx_rtsig_conf_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_2__* write; TYPE_1__* read; int log; int fd; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_12__ {int conf_ctx; } ;
struct TYPE_9__ {int active; } ;
struct TYPE_8__ {int active; scalar_t__ instance; scalar_t__ disabled; scalar_t__ accept; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_7__* VAR_12 ;
 int VAR_13 ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_connection_t *VAR_16)
{
    ngx_uint_t VAR_17;
    ngx_rtsig_conf_t *VAR_18;

    if (VAR_16->read->accept && VAR_16->read->disabled) {

        FUNC_2(VAR_6, VAR_16->log, 0,
                       "rtsig enable connection: fd:%d", VAR_16->fd);

        if (FUNC_0(VAR_16->fd, VAR_2, VAR_14) == -1) {
            FUNC_4(VAR_5, VAR_16->log, VAR_13,
                          "fcntl(F_SETOWN) failed");
            return VAR_4;
        }

        VAR_16->read->active = 1;
        VAR_16->read->disabled = 0;
    }

    VAR_18 = FUNC_1(VAR_12->conf_ctx, VAR_15);

    VAR_17 = VAR_18->signo + VAR_16->read->instance;

    FUNC_3(VAR_6, VAR_16->log, 0,
                   "rtsig add connection: fd:%d signo:%ui", VAR_16->fd, VAR_17);

    if (FUNC_0(VAR_16->fd, VAR_1, VAR_11|VAR_9|VAR_8) == -1) {
        FUNC_4(VAR_5, VAR_16->log, VAR_13,
                      "fcntl(O_RDWR|O_NONBLOCK|O_ASYNC) failed");
        return VAR_4;
    }

    if (FUNC_0(VAR_16->fd, VAR_3, (int) VAR_17) == -1) {
        FUNC_4(VAR_5, VAR_16->log, VAR_13,
                      "fcntl(F_SETSIG) failed");
        return VAR_4;
    }

    if (FUNC_0(VAR_16->fd, VAR_2, VAR_14) == -1) {
        FUNC_4(VAR_5, VAR_16->log, VAR_13,
                      "fcntl(F_SETOWN) failed");
        return VAR_4;
    }
    VAR_16->read->active = 1;
    VAR_16->write->active = 1;

    return VAR_7;
}
