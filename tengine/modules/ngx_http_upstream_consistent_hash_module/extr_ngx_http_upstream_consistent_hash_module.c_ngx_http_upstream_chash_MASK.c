
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


typedef int ngx_str_t ;
struct TYPE_15__ {int init_upstream; } ;
struct TYPE_16__ {int flags; TYPE_2__ peer; } ;
typedef TYPE_3__ ngx_http_upstream_srv_conf_t ;
struct TYPE_17__ {int values; int lengths; } ;
typedef TYPE_4__ ngx_http_upstream_chash_srv_conf_t ;
struct TYPE_18__ {int complete_lengths; int complete_values; int * values; int * lengths; int * source; TYPE_6__* cf; } ;
typedef TYPE_5__ ngx_http_script_compile_t ;
struct TYPE_19__ {TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_0 (TYPE_6__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_5__*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_12, ngx_command_t *VAR_13, void *VAR_14)
{
    ngx_str_t *VAR_15;
    ngx_http_script_compile_t VAR_16;
    ngx_http_upstream_srv_conf_t *VAR_17;
    ngx_http_upstream_chash_srv_conf_t *VAR_18;

    VAR_17 = FUNC_0(VAR_12, VAR_11);
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }

    VAR_18 = FUNC_1(VAR_17,
                                     VAR_9);
    if(VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    VAR_15 = VAR_12->args->elts;
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(&VAR_16, sizeof(ngx_http_script_compile_t));

    VAR_16.cf = VAR_12;
    VAR_16.source = &VAR_15[1];
    VAR_16.lengths = &VAR_18->lengths;
    VAR_16.values = &VAR_18->values;
    VAR_16.complete_lengths = 1;
    VAR_16.complete_values = 1;

    if (FUNC_2(&VAR_16) != VAR_8) {
        return VAR_0;
    }

    VAR_17->peer.init_upstream = VAR_10;

    VAR_17->flags = VAR_2



                  |VAR_7
                  |VAR_6
                  |VAR_4
                  |VAR_3;

    return VAR_1;
}
