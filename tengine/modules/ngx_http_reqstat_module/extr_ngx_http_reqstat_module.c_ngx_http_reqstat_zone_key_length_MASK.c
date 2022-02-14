
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_13__ {TYPE_4__* data; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
struct TYPE_14__ {scalar_t__ key_len; } ;
typedef TYPE_4__ ngx_http_reqstat_ctx_t ;
struct TYPE_15__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_11__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*,...) ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (TYPE_5__*,TYPE_2__*,int ,int *) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    ngx_str_t *VAR_8;
    ngx_shm_zone_t *VAR_9;
    ngx_http_reqstat_ctx_t *VAR_10;

    VAR_8 = VAR_5->args->elts;

    VAR_9 = FUNC_2(VAR_5, &VAR_8[1], 0,
                                     &VAR_4);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_9->data == ((void*)0)) {
        FUNC_1(VAR_3, VAR_5, 0,
                           "zone \"%V\" should be defined first",
                           &VAR_8[1]);
        return VAR_0;
    }

    VAR_10 = VAR_9->data;

    VAR_10->key_len = FUNC_0(VAR_8[2].data, VAR_8[2].len);
    if (VAR_10->key_len == VAR_2) {
        FUNC_1(VAR_3, VAR_5, 0,
                           "invalid key length");
        return VAR_0;
    }

    return VAR_1;
}
