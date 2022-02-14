
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {int avail_out; int next_out; } ;
struct TYPE_17__ {scalar_t__ bufs; int nomem; TYPE_2__ zstream; TYPE_11__* out_buf; TYPE_1__* free; } ;
typedef TYPE_5__ ngx_http_gunzip_ctx_t ;
struct TYPE_15__ {scalar_t__ num; int size; } ;
struct TYPE_18__ {TYPE_3__ bufs; } ;
typedef TYPE_6__ ngx_http_gunzip_conf_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_11__* buf; } ;
struct TYPE_12__ {int recycled; int pos; scalar_t__ tag; scalar_t__ flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__* FUNC_0 (int ,int ) ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4,
    ngx_http_gunzip_ctx_t *VAR_5)
{
    ngx_http_gunzip_conf_t *VAR_6;

    if (VAR_5->zstream.avail_out) {
        return VAR_2;
    }

    VAR_6 = FUNC_1(VAR_4, VAR_3);

    if (VAR_5->free) {
        VAR_5->out_buf = VAR_5->free->buf;
        VAR_5->free = VAR_5->free->next;

        VAR_5->out_buf->flush = 0;

    } else if (VAR_5->bufs < VAR_6->bufs.num) {

        VAR_5->out_buf = FUNC_0(VAR_4->pool, VAR_6->bufs.size);
        if (VAR_5->out_buf == ((void*)0)) {
            return VAR_1;
        }

        VAR_5->out_buf->tag = (ngx_buf_tag_t) &VAR_3;
        VAR_5->out_buf->recycled = 1;
        VAR_5->bufs++;

    } else {
        VAR_5->nomem = 1;
        return VAR_0;
    }

    VAR_5->zstream.next_out = VAR_5->out_buf->pos;
    VAR_5->zstream.avail_out = VAR_6->bufs.size;

    return VAR_2;
}
