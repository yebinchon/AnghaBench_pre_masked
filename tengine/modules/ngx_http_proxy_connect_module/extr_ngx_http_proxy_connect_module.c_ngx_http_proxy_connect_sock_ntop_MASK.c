
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {int len; int * data; } ;
struct TYPE_8__ {TYPE_1__ host; int socklen; int sockaddr; } ;
typedef TYPE_2__ ngx_http_upstream_resolved_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_2__* resolved; } ;
typedef TYPE_4__ ngx_http_proxy_connect_upstream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_proxy_connect_upstream_t *VAR_4)
{
    u_char *VAR_5;
    ngx_int_t VAR_6;
    ngx_http_upstream_resolved_t *VAR_7;

    VAR_7 = VAR_4->resolved;



    VAR_5 = FUNC_1(VAR_3->pool, VAR_2);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_7->sockaddr, VAR_7->socklen, VAR_5, VAR_2, 1);

    VAR_4->resolved->host.data = VAR_5;
    VAR_4->resolved->host.len = VAR_6;

    return VAR_1;
}
