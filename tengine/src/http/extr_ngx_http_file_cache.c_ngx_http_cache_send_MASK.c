
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_3__* connection; struct TYPE_17__* main; scalar_t__ header_only; int pool; TYPE_5__* cache; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {int data; } ;
struct TYPE_15__ {TYPE_1__ name; int fd; } ;
struct TYPE_18__ {scalar_t__ length; scalar_t__ body_start; TYPE_2__ file; } ;
typedef TYPE_5__ ngx_http_cache_t ;
typedef int ngx_file_t ;
struct TYPE_19__ {int * next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_20__ {scalar_t__ file_pos; scalar_t__ file_last; int in_file; int last_buf; int last_in_chain; TYPE_8__* file; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_21__ {int log; TYPE_1__ name; int fd; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_7__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 TYPE_8__* FUNC_4 (int ,int) ;

ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_chain_t VAR_7;
    ngx_http_cache_t *VAR_8;

    VAR_8 = VAR_4->cache;

    FUNC_3(VAR_2, VAR_4->connection->log, 0,
                   "http file cache send: %s", VAR_8->file.name.data);

    if (VAR_4 != VAR_4->main && VAR_8->length - VAR_8->body_start == 0) {
        return FUNC_2(VAR_4);
    }



    VAR_6 = FUNC_0(VAR_4->pool);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->file = FUNC_4(VAR_4->pool, sizeof(ngx_file_t));
    if (VAR_6->file == ((void*)0)) {
        return VAR_1;
    }

    VAR_5 = FUNC_2(VAR_4);

    if (VAR_5 == VAR_0 || VAR_5 > VAR_3 || VAR_4->header_only) {
        return VAR_5;
    }

    VAR_6->file_pos = VAR_8->body_start;
    VAR_6->file_last = VAR_8->length;

    VAR_6->in_file = (VAR_8->length - VAR_8->body_start) ? 1: 0;
    VAR_6->last_buf = (VAR_4 == VAR_4->main) ? 1: 0;
    VAR_6->last_in_chain = 1;

    VAR_6->file->fd = VAR_8->file.fd;
    VAR_6->file->name = VAR_8->file.name;
    VAR_6->file->log = VAR_4->connection->log;

    VAR_7.buf = VAR_6;
    VAR_7.next = ((void*)0);

    return FUNC_1(VAR_4, &VAR_7);
}
