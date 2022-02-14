
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_str_t *VAR_5 = VAR_4;

    u_char *VAR_6, *VAR_7;

    if (FUNC_4(VAR_5->data, "none") == 0) {
        FUNC_3(VAR_5, "");
        return VAR_1;
    }

    VAR_7 = FUNC_2(VAR_2->pool, sizeof("; domain=") - 1 + VAR_5->len);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_7, "; domain=", sizeof("; domain=") - 1);
    FUNC_1(VAR_6, VAR_5->data, VAR_5->len);

    VAR_5->len += sizeof("; domain=") - 1;
    VAR_5->data = VAR_7;

    return VAR_1;
}
