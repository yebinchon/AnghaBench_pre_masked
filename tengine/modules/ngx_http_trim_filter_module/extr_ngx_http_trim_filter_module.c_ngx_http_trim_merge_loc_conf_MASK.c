
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * css; int * js; int * trim; int types; int types_keys; } ;
typedef TYPE_1__ ngx_http_trim_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_trim_loc_conf_t *VAR_7 = VAR_5;
    ngx_http_trim_loc_conf_t *VAR_8 = VAR_6;

    if (FUNC_0(VAR_4, &VAR_8->types_keys, &VAR_8->types,
                             &VAR_7->types_keys, &VAR_7->types,
                             VAR_3)
        != VAR_2)
    {
        return VAR_0;
    }

    if (VAR_8->trim == ((void*)0)) {
        VAR_8->trim = VAR_7->trim;
    }

    if (VAR_8->js == ((void*)0)) {
        VAR_8->js = VAR_7->js;
    }

    if (VAR_8->css == ((void*)0)) {
        VAR_8->css = VAR_7->css;
    }

    return VAR_1;
}
