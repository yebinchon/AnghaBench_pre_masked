
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * types; } ;
typedef TYPE_1__ ngx_http_core_loc_conf_t ;
typedef int ngx_hash_key_t ;
struct TYPE_6__ {void* handler_conf; int handler; int pool; } ;
typedef TYPE_2__ ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 int * FUNC_0 (int ,int,int) ;
 char* FUNC_1 (TYPE_2__*,int *) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_http_core_loc_conf_t *VAR_5 = VAR_4;

    char *VAR_6;
    ngx_conf_t VAR_7;

    if (VAR_5->types == ((void*)0)) {
        VAR_5->types = FUNC_0(VAR_2->pool, 64, sizeof(ngx_hash_key_t));
        if (VAR_5->types == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_7 = *VAR_2;
    VAR_2->handler = VAR_1;
    VAR_2->handler_conf = VAR_4;

    VAR_6 = FUNC_1(VAR_2, ((void*)0));

    *VAR_2 = VAR_7;

    return VAR_6;
}
