
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_9__ {int log; int ctx; } ;
typedef TYPE_2__ ngx_ssl_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int cycle; } ;
typedef TYPE_3__ ngx_conf_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;

ngx_int_t
FUNC_5(ngx_conf_t *VAR_3, ngx_ssl_t *VAR_4, ngx_str_t *VAR_5,
    ngx_int_t VAR_6)
{
    FUNC_2(VAR_4->ctx, VAR_6);

    if (VAR_5->len == 0) {
        return VAR_2;
    }

    if (FUNC_3(VAR_3->cycle, VAR_5, 1) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_1(VAR_4->ctx, (char *) VAR_5->data, ((void*)0))
        == 0)
    {
        FUNC_4(VAR_1, VAR_4->log, 0,
                      "SSL_CTX_load_verify_locations(\"%s\") failed",
                      VAR_5->data);
        return VAR_0;
    }






    FUNC_0();

    return VAR_2;
}
