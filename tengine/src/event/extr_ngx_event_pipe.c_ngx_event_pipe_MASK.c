
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {scalar_t__ timer_set; int ready; scalar_t__ active; int delayed; scalar_t__ error; scalar_t__ eof; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_17__ {scalar_t__ output_ctx; int send_timeout; int send_lowat; TYPE_3__* downstream; int read_timeout; TYPE_2__* upstream; scalar_t__ upstream_blocked; scalar_t__ read; TYPE_1__* log; } ;
typedef TYPE_5__ ngx_event_pipe_t ;
struct TYPE_15__ {scalar_t__ fd; scalar_t__ data; TYPE_4__* write; } ;
struct TYPE_14__ {scalar_t__ fd; TYPE_4__* read; } ;
struct TYPE_13__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;

ngx_int_t
FUNC_6(ngx_event_pipe_t *VAR_4, ngx_int_t VAR_5)
{
    ngx_int_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_event_t *VAR_8, *VAR_9;

    for ( ;; ) {
        if (VAR_5) {
            VAR_4->log->action = "sending to client";

            VAR_6 = FUNC_3(VAR_4);

            if (VAR_6 == VAR_0) {
                return VAR_0;
            }

            if (VAR_6 == VAR_1) {
                return VAR_3;
            }
        }

        VAR_4->read = 0;
        VAR_4->upstream_blocked = 0;

        VAR_4->log->action = "reading upstream";

        if (FUNC_2(VAR_4) == VAR_0) {
            return VAR_0;
        }

        if (!VAR_4->read && !VAR_4->upstream_blocked) {
            break;
        }

        VAR_5 = 1;
    }

    if (VAR_4->upstream->fd != (ngx_socket_t) -1) {
        VAR_8 = VAR_4->upstream->read;

        VAR_7 = (VAR_8->eof || VAR_8->error) ? VAR_2 : 0;

        if (FUNC_4(VAR_8, VAR_7) != VAR_3) {
            return VAR_0;
        }

        if (!VAR_8->delayed) {
            if (VAR_8->active && !VAR_8->ready) {
                FUNC_0(VAR_8, VAR_4->read_timeout);

            } else if (VAR_8->timer_set) {
                FUNC_1(VAR_8);
            }
        }
    }

    if (VAR_4->downstream->fd != (ngx_socket_t) -1
        && VAR_4->downstream->data == VAR_4->output_ctx)
    {
        VAR_9 = VAR_4->downstream->write;
        if (FUNC_5(VAR_9, VAR_4->send_lowat) != VAR_3) {
            return VAR_0;
        }

        if (!VAR_9->delayed) {
            if (VAR_9->active && !VAR_9->ready) {
                FUNC_0(VAR_9, VAR_4->send_timeout);

            } else if (VAR_9->timer_set) {
                FUNC_1(VAR_9);
            }
        }
    }

    return VAR_3;
}
