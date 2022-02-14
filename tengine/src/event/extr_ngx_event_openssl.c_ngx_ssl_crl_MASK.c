
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
typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int ,char*,...) ;

ngx_int_t
FUNC_7(ngx_conf_t *VAR_6, ngx_ssl_t *VAR_7, ngx_str_t *VAR_8)
{
    X509_STORE *VAR_9;
    X509_LOOKUP *VAR_10;

    if (VAR_8->len == 0) {
        return VAR_2;
    }

    if (FUNC_5(VAR_6->cycle, VAR_8, 1) != VAR_2) {
        return VAR_0;
    }

    VAR_9 = FUNC_0(VAR_7->ctx);

    if (VAR_9 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_7->log, 0,
                      "SSL_CTX_get_cert_store() failed");
        return VAR_0;
    }

    VAR_10 = FUNC_3(VAR_9, FUNC_1());

    if (VAR_10 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_7->log, 0,
                      "X509_STORE_add_lookup() failed");
        return VAR_0;
    }

    if (FUNC_2(VAR_10, (char *) VAR_8->data, VAR_3)
        == 0)
    {
        FUNC_6(VAR_1, VAR_7->log, 0,
                      "X509_LOOKUP_load_file(\"%s\") failed", VAR_8->data);
        return VAR_0;
    }

    FUNC_4(VAR_9,
                         VAR_4|VAR_5);

    return VAR_2;
}
