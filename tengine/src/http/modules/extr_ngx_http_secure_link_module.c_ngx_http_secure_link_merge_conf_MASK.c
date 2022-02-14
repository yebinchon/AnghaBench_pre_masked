
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ secret; int * md5; int * variable; } ;
typedef TYPE_2__ ngx_http_secure_link_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_secure_link_conf_t *VAR_6 = VAR_4;
    ngx_http_secure_link_conf_t *VAR_7 = VAR_5;

    if (VAR_7->secret.data) {
        if (VAR_7->variable || VAR_7->md5) {
            FUNC_0(VAR_2, VAR_3, 0,
                               "\"secure_link_secret\" cannot be mixed with "
                               "\"secure_link\" and \"secure_link_md5\"");
            return VAR_0;
        }

        return VAR_1;
    }

    if (VAR_7->variable == ((void*)0)) {
        VAR_7->variable = VAR_6->variable;
    }

    if (VAR_7->md5 == ((void*)0)) {
        VAR_7->md5 = VAR_6->md5;
    }

    if (VAR_7->variable == ((void*)0) && VAR_7->md5 == ((void*)0)) {
        VAR_7->secret = VAR_6->secret;
    }

    return VAR_1;
}
