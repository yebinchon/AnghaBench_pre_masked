
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr_text; int socklen; int sockaddr; TYPE_2__* connection; } ;
typedef TYPE_1__ ngx_http_realip_ctx_t ;
struct TYPE_4__ {int addr_text; int socklen; int sockaddr; } ;
typedef TYPE_2__ ngx_connection_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
    ngx_http_realip_ctx_t *VAR_1 = VAR_0;

    ngx_connection_t *VAR_2;

    VAR_2 = VAR_1->connection;

    VAR_2->sockaddr = VAR_1->sockaddr;
    VAR_2->socklen = VAR_1->socklen;
    VAR_2->addr_text = VAR_1->addr_text;
}
