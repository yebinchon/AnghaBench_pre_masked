
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_7__ {char* data; size_t len; } ;
struct TYPE_8__ {TYPE_1__ url; } ;
typedef TYPE_2__ ngx_url_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

ngx_int_t
FUNC_4(ngx_pool_t *VAR_0, ngx_url_t *VAR_1)
{
    u_char *VAR_2;
    size_t VAR_3;

    VAR_2 = VAR_1->url.data;
    VAR_3 = VAR_1->url.len;

    if (VAR_3 >= 5 && FUNC_3(VAR_2, (u_char *) "unix:", 5) == 0) {
        return FUNC_2(VAR_0, VAR_1);
    }

    if (VAR_3 && VAR_2[0] == '[') {
        return FUNC_0(VAR_0, VAR_1);
    }

    return FUNC_1(VAR_0, VAR_1);
}
