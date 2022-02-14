
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ngx_conf_t ;
struct TYPE_2__ {int new_name; int old_name; } ;
typedef TYPE_1__ ngx_conf_deprecated_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*,int ,int ) ;

char *
FUNC_1(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_conf_deprecated_t *VAR_5 = VAR_3;

    FUNC_0(VAR_1, VAR_2, 0,
                       "the \"%s\" directive is deprecated, "
                       "use the \"%s\" directive instead",
                       VAR_5->old_name, VAR_5->new_name);

    return VAR_0;
}
