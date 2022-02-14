
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {scalar_t__ avail_out; scalar_t__ avail_in; int total_out; int total_in; } ;
struct TYPE_14__ {int done; TYPE_10__ zstream; TYPE_4__** last_out; TYPE_5__* out_buf; int preallocated; int zout; int zin; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_16__ {int last_buf; scalar_t__ temporary; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {int buffered; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_10__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_5,
    ngx_http_gzip_ctx_t *VAR_6)
{
    int VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t *VAR_9;

    VAR_6->zin = VAR_6->zstream.total_in;
    VAR_6->zout = VAR_6->zstream.total_out;

    VAR_7 = FUNC_0(&VAR_6->zstream);

    if (VAR_7 != VAR_4) {
        FUNC_3(VAR_2, VAR_5->connection->log, 0,
                      "deflateEnd() failed: %d", VAR_7);
        return VAR_0;
    }

    FUNC_4(VAR_5->pool, VAR_6->preallocated);

    VAR_9 = FUNC_1(VAR_5->pool);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = VAR_6->out_buf;

    if (FUNC_2(VAR_8) == 0) {
        VAR_8->temporary = 0;
    }

    VAR_8->last_buf = 1;

    VAR_9->buf = VAR_8;
    VAR_9->next = ((void*)0);
    *VAR_6->last_out = VAR_9;
    VAR_6->last_out = &VAR_9->next;

    VAR_6->zstream.avail_in = 0;
    VAR_6->zstream.avail_out = 0;

    VAR_6->done = 1;

    VAR_5->connection->buffered &= ~VAR_1;

    return VAR_3;
}
