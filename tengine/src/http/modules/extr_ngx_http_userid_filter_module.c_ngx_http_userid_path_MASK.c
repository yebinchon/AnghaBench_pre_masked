
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_5__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_str_t *VAR_5 = VAR_4;

    u_char *VAR_6, *VAR_7;

    VAR_7 = FUNC_2(VAR_2->pool, sizeof("; path=") - 1 + VAR_5->len);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_7, "; path=", sizeof("; path=") - 1);
    FUNC_1(VAR_6, VAR_5->data, VAR_5->len);

    VAR_5->len += sizeof("; path=") - 1;
    VAR_5->data = VAR_7;

    return VAR_1;
}
