
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {int handler; TYPE_4__* data; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_5__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {size_t len; int * data; } ;
struct TYPE_15__ {TYPE_1__ addr_text; int socklen; int sockaddr; TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_http_realip_ctx_t ;
struct TYPE_16__ {TYPE_1__ addr_text; int socklen; int sockaddr; int pool; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_17__ {int socklen; int sockaddr; } ;
typedef TYPE_6__ ngx_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_1 (int *,int *,size_t) ;
 int * FUNC_2 (int ,size_t) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 size_t FUNC_4 (int ,int ,int *,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_5, ngx_addr_t *VAR_6)
{
    size_t VAR_7;
    u_char *VAR_8;
    u_char VAR_9[VAR_2];
    ngx_connection_t *VAR_10;
    ngx_pool_cleanup_t *VAR_11;
    ngx_http_realip_ctx_t *VAR_12;

    VAR_11 = FUNC_3(VAR_5->pool, sizeof(ngx_http_realip_ctx_t));
    if (VAR_11 == ((void*)0)) {
        return VAR_1;
    }

    VAR_12 = VAR_11->data;

    VAR_10 = VAR_5->connection;

    VAR_7 = FUNC_4(VAR_6->sockaddr, VAR_6->socklen, VAR_9,
                        VAR_2, 0);
    if (VAR_7 == 0) {
        return VAR_1;
    }

    VAR_8 = FUNC_2(VAR_10->pool, VAR_7);
    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(VAR_8, VAR_9, VAR_7);

    VAR_11->handler = VAR_3;
    FUNC_0(VAR_5, VAR_12, VAR_4);

    VAR_12->connection = VAR_10;
    VAR_12->sockaddr = VAR_10->sockaddr;
    VAR_12->socklen = VAR_10->socklen;
    VAR_12->addr_text = VAR_10->addr_text;

    VAR_10->sockaddr = VAR_6->sockaddr;
    VAR_10->socklen = VAR_6->socklen;
    VAR_10->addr_text.len = VAR_7;
    VAR_10->addr_text.data = VAR_8;

    return VAR_0;
}
