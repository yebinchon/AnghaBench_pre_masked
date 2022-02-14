
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_short ;
typedef void* u_char ;
struct TYPE_18__ {int tcp_timeout; } ;
typedef TYPE_3__ ngx_resolver_t ;
struct TYPE_19__ {TYPE_2__* tcp; int log; TYPE_5__* write_buf; TYPE_5__* read_buf; } ;
typedef TYPE_4__ ngx_resolver_connection_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int * last; int * end; int * start; int * pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_21__ {int (* handler ) (TYPE_7__*) ;} ;
struct TYPE_17__ {TYPE_7__* write; TYPE_1__* read; TYPE_4__* data; } ;
struct TYPE_16__ {int resolver; int handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int * FUNC_1 (int *,void**,int) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 void* FUNC_3 (TYPE_3__*,int) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_7__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_resolver_t *VAR_6, ngx_resolver_connection_t *VAR_7,
    u_char *VAR_8, u_short VAR_9)
{
    ngx_buf_t *VAR_10;
    ngx_int_t VAR_11;

    VAR_11 = VAR_2;

    if (VAR_7->tcp == ((void*)0)) {
        VAR_10 = VAR_7->read_buf;

        if (VAR_10 == ((void*)0)) {
            VAR_10 = FUNC_4(VAR_6, sizeof(ngx_buf_t));
            if (VAR_10 == ((void*)0)) {
                return VAR_0;
            }

            VAR_10->start = FUNC_3(VAR_6, VAR_3);
            if (VAR_10->start == ((void*)0)) {
                FUNC_5(VAR_6, VAR_10);
                return VAR_0;
            }

            VAR_10->end = VAR_10->start + VAR_3;

            VAR_7->read_buf = VAR_10;
        }

        VAR_10->pos = VAR_10->start;
        VAR_10->last = VAR_10->start;

        VAR_10 = VAR_7->write_buf;

        if (VAR_10 == ((void*)0)) {
            VAR_10 = FUNC_4(VAR_6, sizeof(ngx_buf_t));
            if (VAR_10 == ((void*)0)) {
                return VAR_0;
            }

            VAR_10->start = FUNC_3(VAR_6, VAR_4);
            if (VAR_10->start == ((void*)0)) {
                FUNC_5(VAR_6, VAR_10);
                return VAR_0;
            }

            VAR_10->end = VAR_10->start + VAR_4;

            VAR_7->write_buf = VAR_10;
        }

        VAR_10->pos = VAR_10->start;
        VAR_10->last = VAR_10->start;

        VAR_11 = FUNC_7(VAR_7);
        if (VAR_11 == VAR_0) {
            return VAR_0;
        }

        VAR_7->tcp->data = VAR_7;
        VAR_7->tcp->write->handler = FUNC_6;
        VAR_7->tcp->read->handler = VAR_5;
        VAR_7->tcp->read->resolver = 1;

        FUNC_0(VAR_7->tcp->write, (ngx_msec_t) (VAR_6->tcp_timeout * 1000));
    }

    VAR_10 = VAR_7->write_buf;

    if (VAR_10->end - VAR_10->last < 2 + VAR_9) {
        FUNC_2(VAR_1, &VAR_7->log, 0, "buffer overflow");
        return VAR_0;
    }

    *VAR_10->last++ = (u_char) (VAR_9 >> 8);
    *VAR_10->last++ = (u_char) VAR_9;
    VAR_10->last = FUNC_1(VAR_10->last, VAR_8, VAR_9);

    if (VAR_11 == VAR_2) {
        FUNC_6(VAR_7->tcp->write);
    }

    return VAR_2;
}
