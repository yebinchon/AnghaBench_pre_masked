
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int no_resolve; int host; } ;
typedef TYPE_3__ ngx_url_t ;
typedef int ngx_str_t ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_16__ {char* local_addr_text; int * rc_ctx; TYPE_2__ lock_file; scalar_t__ enable_rcs; int * ups_addr; } ;
typedef TYPE_4__ ngx_http_tfs_upstream_t ;
struct TYPE_17__ {void* handler_conf; int handler; TYPE_4__* ctx; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*) ;
 char* FUNC_1 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    char *VAR_8;
    ngx_url_t VAR_9;
    ngx_str_t *VAR_10;
    ngx_conf_t VAR_11;
    ngx_http_tfs_upstream_t *VAR_12;

    FUNC_3(&VAR_9, sizeof(ngx_url_t));

    VAR_10 = VAR_5->args->elts;
    VAR_9.host = VAR_10[1];
    VAR_9.no_resolve = 1;

    VAR_12 = FUNC_2(VAR_5, &VAR_9, VAR_2);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }



    VAR_11 = *VAR_5;
    VAR_5->ctx = VAR_12;
    VAR_5->handler = VAR_4;
    VAR_5->handler_conf = VAR_7;

    VAR_8 = FUNC_1(VAR_5, ((void*)0));

    *VAR_5 = VAR_11;

    if (VAR_8 != VAR_1) {
        return VAR_8;
    }

    if (VAR_12->ups_addr == ((void*)0)) {
        FUNC_0(VAR_3, VAR_5, 0,
                           "no servers are inside tfs upstream");
        return VAR_0;
    }

    if (VAR_12->enable_rcs) {
        if (VAR_12->local_addr_text[0] == '\0') {
            FUNC_0(VAR_3, VAR_5, 0,
                               "type rcs_server must set rcs_interface "
                               "directives in tfs_upstream block");
            return VAR_0;
        }

        if (VAR_12->lock_file.len == 0) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "type rcs must set rcs_heartbeat directives"
                               " in tfs_upstream block");
            return VAR_0;
        }

        if (VAR_12->rc_ctx == ((void*)0)) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "type rcs must set "
                               "rcs_zone directives in tfs_upstream block");
            return VAR_0;
        }
    }

    return VAR_8;
}
