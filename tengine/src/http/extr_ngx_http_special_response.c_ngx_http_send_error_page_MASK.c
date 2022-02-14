
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_25__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_32__ {char* data; scalar_t__ len; } ;
struct TYPE_31__ {int hash; TYPE_4__ value; int key; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_30__ {scalar_t__ msie; } ;
struct TYPE_28__ {TYPE_3__* location; int headers; } ;
struct TYPE_33__ {int expect_tested; scalar_t__ err_status; scalar_t__ method; TYPE_2__ headers_in; TYPE_1__ headers_out; int method_name; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_29__ {scalar_t__ lengths; } ;
struct TYPE_34__ {scalar_t__ overwrite; TYPE_4__ args; TYPE_25__ value; } ;
typedef TYPE_6__ ngx_http_err_page_t ;
struct TYPE_35__ {scalar_t__ msie_refresh; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_25__*,TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_7__*,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_13, ngx_http_err_page_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_str_t VAR_16, VAR_17;
    ngx_table_elt_t *VAR_18;
    ngx_http_core_loc_conf_t *VAR_19;

    VAR_15 = VAR_14->overwrite;

    if (VAR_15 && VAR_15 != VAR_6) {
        VAR_13->expect_tested = 1;
    }

    if (VAR_15 >= 0) {
        VAR_13->err_status = VAR_15;
    }

    if (FUNC_1(VAR_13, &VAR_14->value, &VAR_16) != VAR_10) {
        return VAR_0;
    }

    if (VAR_16.len && VAR_16.data[0] == '/') {

        if (VAR_14->value.lengths) {
            FUNC_7(VAR_13, &VAR_16, &VAR_17);

        } else {
            VAR_17 = VAR_14->args;
        }

        if (VAR_13->method != VAR_2) {
            VAR_13->method = VAR_1;
            VAR_13->method_name = VAR_11;
        }

        return FUNC_3(VAR_13, &VAR_16, &VAR_17);
    }

    if (VAR_16.len && VAR_16.data[0] == '@') {
        return FUNC_4(VAR_13, &VAR_16);
    }

    VAR_18 = FUNC_8(&VAR_13->headers_out.headers);

    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_15 != VAR_3
        && VAR_15 != VAR_4
        && VAR_15 != VAR_8
        && VAR_15 != VAR_9
        && VAR_15 != VAR_7)
    {
        VAR_13->err_status = VAR_4;
    }

    VAR_18->hash = 1;
    FUNC_9(&VAR_18->key, "Location");
    VAR_18->value = VAR_16;

    FUNC_0(VAR_13);

    VAR_13->headers_out.location = VAR_18;

    VAR_19 = FUNC_2(VAR_13, VAR_12);

    if (VAR_19->msie_refresh && VAR_13->headers_in.msie) {
        return FUNC_5(VAR_13);
    }

    return FUNC_6(VAR_13, VAR_19, VAR_13->err_status
                                                   - VAR_3
                                                   + VAR_5);
}
