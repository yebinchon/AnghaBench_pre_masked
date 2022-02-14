
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {int len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_13__ {scalar_t__ state; size_t naddrs; TYPE_1__* addrs; int name; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_resolver_ctx_t ;
struct TYPE_14__ {void* host; TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_mail_session_t ;
struct TYPE_15__ {int socklen; int sockaddr; int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_11__ {int socklen; int sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int *,int,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void
FUNC_7(ngx_resolver_ctx_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_mail_session_t *VAR_10;

    VAR_10 = VAR_7->data;
    VAR_9 = VAR_10->connection;

    if (VAR_7->state) {
        FUNC_2(VAR_1, VAR_9->log, 0,
                      "\"%V\" could not be resolved (%i: %s)",
                      &VAR_7->name, VAR_7->state,
                      FUNC_5(VAR_7->state));

        if (VAR_7->state == VAR_3) {
            VAR_10->host = VAR_6;

        } else {
            VAR_10->host = VAR_5;
        }

    } else {
        for (VAR_8 = 0; VAR_8 < VAR_7->naddrs; VAR_8++) {
            if (FUNC_0(VAR_7->addrs[VAR_8].sockaddr, VAR_7->addrs[VAR_8].socklen,
                                 VAR_9->sockaddr, VAR_9->socklen, 0)
                == VAR_2)
            {
                goto found;
            }
        }

        VAR_10->host = VAR_6;
    }

found:

    FUNC_4(VAR_7);

    FUNC_3(VAR_10, VAR_9);
}
