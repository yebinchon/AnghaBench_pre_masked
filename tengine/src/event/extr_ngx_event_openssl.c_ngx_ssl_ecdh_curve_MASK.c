
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_6__ {int ctx; int log; } ;
typedef TYPE_2__ ngx_ssl_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int ,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

ngx_int_t
FUNC_9(ngx_conf_t *VAR_4, ngx_ssl_t *VAR_5, ngx_str_t *VAR_6)
{
    int VAR_7;
    char *VAR_8;
    EC_KEY *VAR_9;

    if (FUNC_8(VAR_6->data, "auto") == 0) {
        VAR_8 = "prime256v1";

    } else {
        VAR_8 = (char *) VAR_6->data;
    }

    VAR_7 = FUNC_2(VAR_8);
    if (VAR_7 == 0) {
        FUNC_7(VAR_1, VAR_5->log, 0,
                      "OBJ_sn2nid(\"%s\") failed: unknown curve", VAR_8);
        return VAR_0;
    }

    VAR_9 = FUNC_1(VAR_7);
    if (VAR_9 == ((void*)0)) {
        FUNC_7(VAR_1, VAR_5->log, 0,
                      "EC_KEY_new_by_curve_name(\"%s\") failed", VAR_8);
        return VAR_0;
    }

    FUNC_5(VAR_5->ctx, VAR_3);

    FUNC_6(VAR_5->ctx, VAR_9);

    FUNC_0(VAR_9);



    return VAR_2;
}
