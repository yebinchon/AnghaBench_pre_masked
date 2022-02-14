
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {int tcp_timeout; } ;
typedef TYPE_1__ ngx_resolver_t ;
struct TYPE_12__ {int * tcp; TYPE_1__* resolver; TYPE_5__* write_buf; } ;
typedef TYPE_2__ ngx_resolver_connection_t ;
typedef int ngx_msec_t ;
struct TYPE_13__ {scalar_t__ ready; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_14__ {scalar_t__ sent; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_15__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;
typedef TYPE_5__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_3)
{
    off_t VAR_4;
    ssize_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_resolver_t *VAR_7;
    ngx_connection_t *VAR_8;
    ngx_resolver_connection_t *VAR_9;

    VAR_8 = VAR_3->data;
    VAR_9 = VAR_8->data;
    VAR_6 = VAR_9->write_buf;
    VAR_7 = VAR_9->resolver;

    if (VAR_3->timedout) {
        goto failed;
    }

    VAR_4 = VAR_8->sent;

    while (VAR_3->ready && VAR_6->pos < VAR_6->last) {
        VAR_5 = FUNC_4(VAR_8, VAR_6->pos, VAR_6->last - VAR_6->pos);

        if (VAR_5 == VAR_0) {
            break;
        }

        if (VAR_5 == VAR_1) {
            goto failed;
        }

        VAR_6->pos += VAR_5;
    }

    if (VAR_6->pos != VAR_6->start) {
        VAR_6->last = FUNC_3(VAR_6->start, VAR_6->pos, VAR_6->last - VAR_6->pos);
        VAR_6->pos = VAR_6->start;
    }

    if (VAR_8->sent != VAR_4) {
        FUNC_0(VAR_3, (ngx_msec_t) (VAR_7->tcp_timeout * 1000));
    }

    if (FUNC_2(VAR_3, 0) != VAR_2) {
        goto failed;
    }

    return;

failed:

    FUNC_1(VAR_8);
    VAR_9->tcp = ((void*)0);
}
