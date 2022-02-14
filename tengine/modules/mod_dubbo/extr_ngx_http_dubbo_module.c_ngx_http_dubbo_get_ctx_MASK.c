
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int peer; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
struct TYPE_16__ {TYPE_2__* upstream; TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {int * connection; TYPE_3__* request; } ;
typedef TYPE_4__ ngx_http_dubbo_ctx_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_http_dubbo_ctx_t*
FUNC_5(ngx_http_request_t *VAR_3)
{
    ngx_http_dubbo_ctx_t *VAR_4;
    ngx_http_upstream_t *VAR_5;

    VAR_4 = FUNC_1(VAR_3, VAR_2);

    if (VAR_4 == ((void*)0)) {

        VAR_4 = FUNC_4(VAR_3->pool, sizeof(ngx_http_dubbo_ctx_t));
        if (VAR_4 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_4->request = VAR_3;

        FUNC_2(VAR_3, VAR_4, VAR_2);

        FUNC_3(VAR_0, VAR_3->connection->log, 0,
                "create dubbo ctx on create request, maybe fake_r");
    }

    if (VAR_4->connection == ((void*)0)) {
        VAR_5 = VAR_3->upstream;

        if (FUNC_0(VAR_3, VAR_4, &VAR_5->peer) != VAR_1) {
            return ((void*)0);
        }
    }

    return VAR_4;
}
