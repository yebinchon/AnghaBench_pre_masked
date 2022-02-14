
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {int flag; TYPE_4__* format; } ;
typedef TYPE_6__ ngx_http_upstream_check_status_ctx_t ;
struct TYPE_30__ {int nelts; } ;
struct TYPE_34__ {TYPE_3__ peers; } ;
typedef TYPE_7__ ngx_http_upstream_check_peers_t ;
struct TYPE_35__ {TYPE_4__* format; } ;
typedef TYPE_8__ ngx_http_upstream_check_loc_conf_t ;
struct TYPE_28__ {int len; } ;
struct TYPE_32__ {scalar_t__ content_length_n; void* status; int * content_type_lowcase; TYPE_1__ content_type; int content_type_len; } ;
struct TYPE_36__ {scalar_t__ method; int header_only; TYPE_5__ headers_out; int pool; TYPE_2__* connection; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_26__ {int * next; TYPE_11__* buf; } ;
typedef TYPE_10__ ngx_chain_t ;
struct TYPE_27__ {scalar_t__ last; scalar_t__ pos; int last_buf; } ;
typedef TYPE_11__ ngx_buf_t ;
struct TYPE_31__ {int (* output ) (TYPE_11__*,TYPE_7__*,int ) ;TYPE_1__ content_type; } ;
struct TYPE_29__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__* VAR_8 ;
 int FUNC_0 (size_t,int) ;
 TYPE_11__* FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 TYPE_8__* FUNC_3 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*,TYPE_10__*) ;
 scalar_t__ FUNC_5 (TYPE_9__*) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int VAR_10 ;
 TYPE_6__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_11__*,TYPE_7__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_11)
{
    size_t VAR_12;
    ngx_int_t VAR_13;
    ngx_buf_t *VAR_14;
    ngx_chain_t VAR_15;
    ngx_http_upstream_check_peers_t *VAR_16;
    ngx_http_upstream_check_loc_conf_t *VAR_17;
    ngx_http_upstream_check_status_ctx_t *VAR_18;

    if (VAR_11->method != VAR_1 && VAR_11->method != VAR_2) {
        return VAR_4;
    }

    VAR_13 = FUNC_2(VAR_11);

    if (VAR_13 != VAR_7) {
        return VAR_13;
    }

    VAR_17 = FUNC_3(VAR_11, VAR_9);

    VAR_18 = FUNC_8(VAR_11->pool, sizeof(ngx_http_upstream_check_status_ctx_t));
    if (VAR_18 == ((void*)0)) {
        return VAR_3;
    }

    FUNC_6(VAR_11, VAR_18);

    if (VAR_18->format == ((void*)0)) {
        VAR_18->format = VAR_17->format;
    }

    VAR_11->headers_out.content_type_len = VAR_18->format->content_type.len;
    VAR_11->headers_out.content_type = VAR_18->format->content_type;
    VAR_11->headers_out.content_type_lowcase = ((void*)0);

    if (VAR_11->method == VAR_2) {
        VAR_11->headers_out.status = VAR_5;

        VAR_13 = FUNC_5(VAR_11);

        if (VAR_13 == VAR_0 || VAR_13 > VAR_7 || VAR_11->header_only) {
            return VAR_13;
        }
    }

    VAR_16 = VAR_8;
    if (VAR_16 == ((void*)0)) {
        FUNC_7(VAR_6, VAR_11->connection->log, 0,
                      "http upstream check module can not find any check "
                      "server, make sure you've added the check servers");

        return VAR_3;
    }


    VAR_12 = VAR_16->peers.nelts * VAR_10 / 4;
    VAR_12 = FUNC_0(VAR_12, VAR_10) + VAR_10;

    VAR_14 = FUNC_1(VAR_11->pool, VAR_12);
    if (VAR_14 == ((void*)0)) {
        return VAR_3;
    }

    VAR_15.buf = VAR_14;
    VAR_15.next = ((void*)0);

    VAR_18->format->output(VAR_14, VAR_16, VAR_18->flag);

    VAR_11->headers_out.status = VAR_5;
    VAR_11->headers_out.content_length_n = VAR_14->last - VAR_14->pos;

    if (VAR_11->headers_out.content_length_n == 0) {
        VAR_11->header_only = 1;
    }

    VAR_14->last_buf = 1;

    VAR_13 = FUNC_5(VAR_11);

    if (VAR_13 == VAR_0 || VAR_13 > VAR_7 || VAR_11->header_only) {
        return VAR_13;
    }

    return FUNC_4(VAR_11, &VAR_15);
}
