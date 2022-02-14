
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_11__ {TYPE_2__* proxy; TYPE_3__ login; int addr_text; scalar_t__ starttls; } ;
typedef TYPE_4__ ngx_mail_session_t ;
struct TYPE_12__ {TYPE_4__* session; TYPE_3__* client; } ;
typedef TYPE_5__ ngx_mail_log_ctx_t ;
struct TYPE_13__ {TYPE_5__* data; TYPE_3__* action; } ;
typedef TYPE_6__ ngx_log_t ;
struct TYPE_8__ {TYPE_3__* name; } ;
struct TYPE_9__ {TYPE_1__ upstream; } ;


 int * FUNC_0 (int *,size_t,char*,...) ;

u_char *
FUNC_1(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;
    ngx_mail_session_t *VAR_4;
    ngx_mail_log_ctx_t *VAR_5;

    if (VAR_0->action) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    VAR_5 = VAR_0->data;

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", client: %V", VAR_5->client);
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    VAR_4 = VAR_5->session;

    if (VAR_4 == ((void*)0)) {
        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1, VAR_2, "%s, server: %V",
                     VAR_4->starttls ? " using starttls" : "",
                     VAR_4->addr_text);
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    if (VAR_4->login.len == 0) {
        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", login: \"%V\"", &VAR_4->login);
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    if (VAR_4->proxy == ((void*)0)) {
        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", upstream: %V", VAR_4->proxy->upstream.name);

    return VAR_3;
}
