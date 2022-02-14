
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int types; int types_keys; int after_body; int before_body; } ;
typedef TYPE_1__ ngx_http_addition_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_addition_conf_t *VAR_7 = VAR_5;
    ngx_http_addition_conf_t *VAR_8 = VAR_6;

    FUNC_0(VAR_8->before_body, VAR_7->before_body, "");
    FUNC_0(VAR_8->after_body, VAR_7->after_body, "");

    if (FUNC_1(VAR_4, &VAR_8->types_keys, &VAR_8->types,
                             &VAR_7->types_keys, &VAR_7->types,
                             VAR_3)
        != VAR_2)
    {
        return VAR_0;
    }

    return VAR_1;
}
