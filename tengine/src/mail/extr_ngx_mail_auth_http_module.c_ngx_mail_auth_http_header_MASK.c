
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* value; void* key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef void* ngx_str_t ;
struct TYPE_9__ {int * headers; } ;
typedef TYPE_3__ ngx_mail_auth_http_conf_t ;
struct TYPE_10__ {TYPE_1__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {void** elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_mail_auth_http_conf_t *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;
    ngx_table_elt_t *VAR_7;

    if (VAR_5->headers == ((void*)0)) {
        VAR_5->headers = FUNC_0(VAR_2->pool, 1, sizeof(ngx_table_elt_t));
        if (VAR_5->headers == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_7 = FUNC_1(VAR_5->headers);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_2->args->elts;

    VAR_7->key = VAR_6[1];
    VAR_7->value = VAR_6[2];

    return VAR_1;
}
