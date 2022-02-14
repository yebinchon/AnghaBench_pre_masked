
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ init_upstream; } ;
struct TYPE_17__ {TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_18__ {scalar_t__ original_init_upstream; scalar_t__ max_cached; } ;
typedef TYPE_5__ ngx_http_multi_upstream_srv_conf_t ;
struct TYPE_19__ {TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_20__ {int name; } ;
typedef TYPE_7__ ngx_command_t ;
struct TYPE_14__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,TYPE_3__*,int *) ;
 TYPE_4__* FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    ngx_http_upstream_srv_conf_t *VAR_10;
    ngx_http_multi_upstream_srv_conf_t *VAR_11 = VAR_9;

    ngx_int_t VAR_12;
    ngx_str_t *VAR_13;

    if (VAR_11->max_cached) {
        return "is duplicate";
    }



    VAR_13 = VAR_7->args->elts;

    VAR_12 = FUNC_0(VAR_13[1].data, VAR_13[1].len);

    if (VAR_12 == VAR_2 || VAR_12 == 0) {
        FUNC_1(VAR_3, VAR_7, 0,
                           "multi: invalid value \"%V\" in \"%V\" directive",
                           &VAR_13[1], &VAR_8->name);
        return VAR_0;
    }

    VAR_11->max_cached = VAR_12;

    VAR_10 = FUNC_2(VAR_7, VAR_6);

    VAR_11->original_init_upstream = VAR_10->peer.init_upstream
                                  ? VAR_10->peer.init_upstream
                                  : VAR_5;

    VAR_10->peer.init_upstream = VAR_4;

    return VAR_1;
}
