
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pool; TYPE_2__* request_body; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_3__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_15__ {size_t last; size_t pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {TYPE_6__* buf; } ;
struct TYPE_11__ {TYPE_5__* bufs; } ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 void* FUNC_0 (size_t,size_t,size_t) ;
 TYPE_6__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_buf_t *
FUNC_3(ngx_http_request_t *VAR_1)
{
    size_t VAR_2;
    ngx_buf_t *VAR_3, *VAR_4, *VAR_5;
    ngx_chain_t *VAR_6;

    FUNC_2(VAR_0, VAR_1->connection->log, 0,
                   "[dyups] interface read post body");

    VAR_6 = VAR_1->request_body->bufs;
    VAR_3 = VAR_6->buf;

    if (VAR_6->next == ((void*)0)) {

        return VAR_3;

    } else {

        VAR_4 = VAR_6->next->buf;
        VAR_2 = (VAR_3->last - VAR_3->pos) + (VAR_4->last - VAR_4->pos);

        VAR_5 = FUNC_1(VAR_1->pool, VAR_2);
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_5->last = FUNC_0(VAR_5->last, VAR_3->pos, VAR_3->last - VAR_3->pos);
        VAR_5->last = FUNC_0(VAR_5->last, VAR_4->pos, VAR_4->last - VAR_4->pos);
    }

    return VAR_5;
}
