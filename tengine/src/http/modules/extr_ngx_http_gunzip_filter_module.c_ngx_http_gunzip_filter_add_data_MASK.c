
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ avail_in; scalar_t__ next_in; } ;
struct TYPE_12__ {scalar_t__ flush; TYPE_2__ zstream; TYPE_5__* in_buf; TYPE_6__* in; scalar_t__ redo; } ;
typedef TYPE_4__ ngx_http_gunzip_ctx_t ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_5__* buf; } ;
struct TYPE_13__ {scalar_t__ pos; scalar_t__ last; scalar_t__ flush; scalar_t__ last_in_chain; scalar_t__ last_buf; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_7,
    ngx_http_gunzip_ctx_t *VAR_8)
{
    if (VAR_8->zstream.avail_in || VAR_8->flush != VAR_5 || VAR_8->redo) {
        return VAR_3;
    }

    FUNC_0(VAR_2, VAR_7->connection->log, 0,
                   "gunzip in: %p", VAR_8->in);

    if (VAR_8->in == ((void*)0)) {
        return VAR_1;
    }

    VAR_8->in_buf = VAR_8->in->buf;
    VAR_8->in = VAR_8->in->next;

    VAR_8->zstream.next_in = VAR_8->in_buf->pos;
    VAR_8->zstream.avail_in = VAR_8->in_buf->last - VAR_8->in_buf->pos;

    FUNC_1(VAR_2, VAR_7->connection->log, 0,
                   "gunzip in_buf:%p ni:%p ai:%ud",
                   VAR_8->in_buf,
                   VAR_8->zstream.next_in, VAR_8->zstream.avail_in);

    if (VAR_8->in_buf->last_buf || VAR_8->in_buf->last_in_chain) {
        VAR_8->flush = VAR_4;

    } else if (VAR_8->in_buf->flush) {
        VAR_8->flush = VAR_6;

    } else if (VAR_8->zstream.avail_in == 0) {

        return VAR_0;
    }

    return VAR_3;
}
