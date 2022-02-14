
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_18__ {char* data; scalar_t__ len; } ;
struct TYPE_16__ {TYPE_5__ name; TYPE_4__* server; } ;
typedef TYPE_3__ ngx_stream_server_name_t ;
struct TYPE_15__ {int * data; scalar_t__ len; } ;
struct TYPE_13__ {scalar_t__ nelts; TYPE_3__* elts; } ;
struct TYPE_17__ {TYPE_2__ server_name; TYPE_12__ server_names; int preread_timeout; int preread_buffer_size; int tcp_nodelay; int proxy_protocol_timeout; int * error_log; int line; int file_name; int * handler; int * resolver; int resolver_timeout; } ;
typedef TYPE_4__ ngx_stream_core_srv_conf_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_19__ {int pool; TYPE_1__* cycle; int log; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_14__ {int new_log; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_12__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ) ;
 int * FUNC_5 (int ,TYPE_5__*) ;
 int * FUNC_6 (TYPE_6__*,int *,int ) ;
 int FUNC_7 (TYPE_5__*,char*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_stream_core_srv_conf_t *VAR_6 = VAR_4;
    ngx_stream_core_srv_conf_t *VAR_7 = VAR_5;






    FUNC_1(VAR_7->resolver_timeout,
                              VAR_6->resolver_timeout, 30000);

    if (VAR_7->resolver == ((void*)0)) {

        if (VAR_6->resolver == ((void*)0)) {






            VAR_6->resolver = FUNC_6(VAR_3, ((void*)0), 0);
            if (VAR_6->resolver == ((void*)0)) {
                return VAR_0;
            }
        }

        VAR_7->resolver = VAR_6->resolver;
    }

    if (VAR_7->handler == ((void*)0)) {
        FUNC_4(VAR_2, VAR_3->log, 0,
                      "no handler for server in %s:%ui",
                      VAR_7->file_name, VAR_7->line);
        return VAR_0;
    }

    if (VAR_7->error_log == ((void*)0)) {
        if (VAR_6->error_log) {
            VAR_7->error_log = VAR_6->error_log;
        } else {
            VAR_7->error_log = &VAR_3->cycle->new_log;
        }
    }

    FUNC_1(VAR_7->proxy_protocol_timeout,
                              VAR_6->proxy_protocol_timeout, 30000);

    FUNC_3(VAR_7->tcp_nodelay, VAR_6->tcp_nodelay, 1);

    FUNC_2(VAR_7->preread_buffer_size,
                              VAR_6->preread_buffer_size, 16384);

    FUNC_1(VAR_7->preread_timeout,
                              VAR_6->preread_timeout, 30000);
    return VAR_1;
}
