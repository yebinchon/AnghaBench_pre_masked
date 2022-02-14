
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int busy_bufs; int free_bufs; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int ngx_chain_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_8__ {TYPE_2__* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_http_lua_ctx_t *VAR_5;
    ngx_http_request_t *VAR_6;

    VAR_6 = VAR_2->connection->data;

    if (VAR_6 != VAR_2) {



        VAR_2->connection->data = VAR_2;
        VAR_4 = FUNC_2(VAR_2, VAR_3);
        VAR_2->connection->data = VAR_6;
        return VAR_4;
    }

    VAR_4 = FUNC_2(VAR_2, VAR_3);

    if (VAR_4 == VAR_0) {
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_2, VAR_1);




    FUNC_0(

                            VAR_5->free_bufs, VAR_5->busy_bufs, &VAR_3,
                            (ngx_buf_tag_t) &VAR_1);

    return VAR_4;
}
