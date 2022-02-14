
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_14__ {int len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_http_geo_range_t ;
struct TYPE_13__ {int * low; int * default_value; } ;
struct TYPE_12__ {TYPE_3__* data; } ;
struct TYPE_15__ {int outside_entries; TYPE_3__* net; int * value; int entries; TYPE_2__ high; int pool; TYPE_1__ include_name; scalar_t__ binary_include; } ;
typedef TYPE_4__ ngx_http_geo_conf_ctx_t ;
typedef int ngx_conf_t ;
typedef scalar_t__ in_addr_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_3__*,...) ;
 char* FUNC_1 (int *,TYPE_4__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,scalar_t__,scalar_t__) ;
 void* FUNC_3 (int *,TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,int *,char) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_5, ngx_http_geo_conf_ctx_t *VAR_6,
    ngx_str_t *VAR_7)
{
    u_char *VAR_8, *VAR_9;
    in_addr_t VAR_10, VAR_11;
    ngx_str_t *VAR_12;
    ngx_uint_t VAR_13;

    if (FUNC_6(VAR_7[0].data, "default") == 0) {

        if (VAR_6->high.default_value) {
            FUNC_0(VAR_4, VAR_5, 0,
                "duplicate default geo range value: \"%V\", old value: \"%v\"",
                &VAR_7[1], VAR_6->high.default_value);
        }

        VAR_6->high.default_value = FUNC_3(VAR_5, VAR_6, &VAR_7[1]);
        if (VAR_6->high.default_value == ((void*)0)) {
            return VAR_1;
        }

        return VAR_2;
    }

    if (VAR_6->binary_include) {
        FUNC_0(VAR_3, VAR_5, 0,
            "binary geo range base \"%s\" cannot be mixed with usual entries",
            VAR_6->include_name.data);
        return VAR_1;
    }

    if (VAR_6->high.low == ((void*)0)) {
        VAR_6->high.low = FUNC_5(VAR_6->pool,
                                    0x10000 * sizeof(ngx_http_geo_range_t *));
        if (VAR_6->high.low == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_6->entries++;
    VAR_6->outside_entries = 1;

    if (FUNC_6(VAR_7[0].data, "delete") == 0) {
        VAR_12 = &VAR_7[1];
        VAR_13 = 1;

    } else {
        VAR_12 = &VAR_7[0];
        VAR_13 = 0;
    }

    VAR_9 = VAR_12->data + VAR_12->len;

    VAR_8 = FUNC_7(VAR_12->data, VAR_9, '-');

    if (VAR_8 == ((void*)0)) {
        goto invalid;
    }

    VAR_10 = FUNC_4(VAR_12->data, VAR_8 - VAR_12->data);

    if (VAR_10 == VAR_0) {
        goto invalid;
    }

    VAR_10 = FUNC_8(VAR_10);

    VAR_8++;

    VAR_11 = FUNC_4(VAR_8, VAR_9 - VAR_8);

    if (VAR_11 == VAR_0) {
        goto invalid;
    }

    VAR_11 = FUNC_8(VAR_11);

    if (VAR_10 > VAR_11) {
        goto invalid;
    }

    if (VAR_13) {
        if (FUNC_2(VAR_5, VAR_6, VAR_10, VAR_11)) {
            FUNC_0(VAR_4, VAR_5, 0,
                               "no address range \"%V\" to delete", VAR_12);
        }

        return VAR_2;
    }

    VAR_6->value = FUNC_3(VAR_5, VAR_6, &VAR_7[1]);

    if (VAR_6->value == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->net = VAR_12;

    return FUNC_1(VAR_5, VAR_6, VAR_10, VAR_11);

invalid:

    FUNC_0(VAR_3, VAR_5, 0, "invalid range \"%V\"", VAR_12);

    return VAR_1;
}
