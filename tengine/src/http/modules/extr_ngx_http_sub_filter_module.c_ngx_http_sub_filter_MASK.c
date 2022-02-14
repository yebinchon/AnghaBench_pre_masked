
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_20__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_18__ {scalar_t__ len; int data; } ;
struct TYPE_19__ {TYPE_2__ value; int * lengths; } ;
struct TYPE_21__ {TYPE_3__ value; TYPE_3__ match; } ;
typedef TYPE_5__ ngx_http_sub_pair_t ;
struct TYPE_22__ {int dynamic; TYPE_14__* pairs; } ;
typedef TYPE_6__ ngx_http_sub_loc_conf_t ;
struct TYPE_23__ {TYPE_3__* complex_value; TYPE_4__* value; TYPE_8__* cf; } ;
typedef TYPE_7__ ngx_http_compile_complex_value_t ;
struct TYPE_24__ {int pool; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {TYPE_4__* elts; } ;
struct TYPE_16__ {int nelts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_14__* FUNC_0 (int ,int,int) ;
 TYPE_5__* FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (int ,TYPE_8__*,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_sub_loc_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_http_sub_pair_t *VAR_9;
    ngx_http_compile_complex_value_t VAR_10;

    VAR_8 = VAR_4->args->elts;

    if (VAR_8[1].len == 0) {
        FUNC_2(VAR_2, VAR_4, 0, "empty search pattern");
        return VAR_0;
    }

    if (VAR_7->pairs == ((void*)0)) {
        VAR_7->pairs = FUNC_0(VAR_4->pool, 1,
                                       sizeof(ngx_http_sub_pair_t));
        if (VAR_7->pairs == ((void*)0)) {
            return VAR_0;
        }
    }

    if (VAR_7->pairs->nelts == 255) {
        FUNC_2(VAR_2, VAR_4, 0,
                           "number of search patterns exceeds 255");
        return VAR_0;
    }

    FUNC_5(VAR_8[1].data, VAR_8[1].data, VAR_8[1].len);

    VAR_9 = FUNC_1(VAR_7->pairs);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(&VAR_10, sizeof(ngx_http_compile_complex_value_t));

    VAR_10.cf = VAR_4;
    VAR_10.value = &VAR_8[1];
    VAR_10.complex_value = &VAR_9->match;

    if (FUNC_3(&VAR_10) != VAR_3) {
        return VAR_0;
    }

    if (VAR_10.complex_value->lengths != ((void*)0)) {
        VAR_7->dynamic = 1;

    } else {
        FUNC_5(VAR_9->match.value.data, VAR_9->match.value.data,
                   VAR_9->match.value.len);
    }

    FUNC_4(&VAR_10, sizeof(ngx_http_compile_complex_value_t));

    VAR_10.cf = VAR_4;
    VAR_10.value = &VAR_8[2];
    VAR_10.complex_value = &VAR_9->value;

    if (FUNC_3(&VAR_10) != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
