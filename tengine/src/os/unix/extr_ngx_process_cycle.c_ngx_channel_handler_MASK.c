
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int log; TYPE_2__* data; scalar_t__ timedout; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_12__ {scalar_t__ num_async_fds; scalar_t__ async_enable; int fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_13__ {scalar_t__ command; size_t slot; int fd; int pid; } ;
typedef TYPE_3__ ngx_channel_t ;
struct TYPE_14__ {int* channel; int pid; } ;


 scalar_t__ VAR_0 ;






 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,size_t,int ,int) ;
 int FUNC_8 (int ,int ,int ,char*,size_t,int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,int ,int ) ;
 TYPE_5__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (int ,TYPE_3__*,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_12(ngx_event_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_channel_t VAR_16;
    ngx_connection_t *VAR_17;

    if (VAR_14->timedout) {
        VAR_14->timedout = 0;
        return;
    }

    VAR_17 = VAR_14->data;

    FUNC_5(VAR_4, VAR_14->log, 0, "channel handler");

    for ( ;; ) {

        VAR_15 = FUNC_11(VAR_17->fd, &VAR_16, sizeof(ngx_channel_t), VAR_14->log);

        FUNC_6(VAR_4, VAR_14->log, 0, "channel: %i", VAR_15);

        if (VAR_15 == VAR_2) {

            if (VAR_9 & VAR_6) {
                FUNC_4(VAR_17, 0);
            }

            FUNC_2(VAR_17);
            return;
        }

        if (VAR_9 & VAR_7) {
            if (FUNC_1(VAR_14, VAR_5, 0) == VAR_2) {
                return;
            }
        }

        if (VAR_15 == VAR_0) {
            return;
        }

        FUNC_6(VAR_4, VAR_14->log, 0,
                       "channel command: %ui", VAR_16.command);

        switch (VAR_16.command) {

        case 130:
            VAR_11 = 1;
            break;

        case 128:
            VAR_13 = 1;
            break;

        case 129:
            VAR_12 = 1;
            break;

        case 132:

            FUNC_7(VAR_4, VAR_14->log, 0,
                           "get channel s:%i pid:%P fd:%d",
                           VAR_16.slot, VAR_16.pid, VAR_16.fd);

            VAR_10[VAR_16.slot].pid = VAR_16.pid;
            VAR_10[VAR_16.slot].channel[0] = VAR_16.fd;
            break;

        case 133:

            FUNC_8(VAR_4, VAR_14->log, 0,
                           "close channel s:%i pid:%P our:%P fd:%d",
                           VAR_16.slot, VAR_16.pid, VAR_10[VAR_16.slot].pid,
                           VAR_10[VAR_16.slot].channel[0]);

            if (FUNC_0(VAR_10[VAR_16.slot].channel[0]) == -1) {
                FUNC_9(VAR_3, VAR_14->log, VAR_8,
                              "close() channel failed");
            }

            VAR_10[VAR_16.slot].channel[0] = -1;
            break;






        }
    }
}
