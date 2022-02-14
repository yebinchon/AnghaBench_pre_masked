
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_9__ {int ctx; int log; } ;
typedef TYPE_2__ ngx_ssl_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int cycle; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int DH ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__) ;

ngx_int_t
FUNC_7(ngx_conf_t *VAR_3, ngx_ssl_t *VAR_4, ngx_str_t *VAR_5)
{
    DH *VAR_6;
    BIO *VAR_7;

    if (VAR_5->len == 0) {
        return VAR_2;
    }

    if (FUNC_5(VAR_3->cycle, VAR_5, 1) != VAR_2) {
        return VAR_0;
    }

    VAR_7 = FUNC_1((char *) VAR_5->data, "r");
    if (VAR_7 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_4->log, 0,
                      "BIO_new_file(\"%s\") failed", VAR_5->data);
        return VAR_0;
    }

    VAR_6 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_6 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_4->log, 0,
                      "PEM_read_bio_DHparams(\"%s\") failed", VAR_5->data);
        FUNC_0(VAR_7);
        return VAR_0;
    }

    FUNC_4(VAR_4->ctx, VAR_6);

    FUNC_2(VAR_6);
    FUNC_0(VAR_7);

    return VAR_2;
}
