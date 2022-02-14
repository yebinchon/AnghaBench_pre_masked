
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_21__ {int data; int len; } ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_23__ {int pool; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_18__ {int data; int len; } ;
struct TYPE_24__ {TYPE_3__* root_values; TYPE_2__* root_lengths; TYPE_1__ root; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_20__ {int elts; } ;
struct TYPE_19__ {int elts; } ;
struct TYPE_17__ {int prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_16__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,TYPE_4__*) ;
 int VAR_3 ;
 TYPE_7__* FUNC_1 (TYPE_6__*,int ) ;
 int * FUNC_2 (TYPE_6__*,TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_str_t VAR_7;
    ngx_http_core_loc_conf_t *VAR_8;

    VAR_8 = FUNC_1(VAR_4, VAR_3);

    if (VAR_8->root_lengths == ((void*)0)) {
        VAR_5->len = VAR_8->root.len;
        VAR_5->valid = 1;
        VAR_5->no_cacheable = 0;
        VAR_5->not_found = 0;
        VAR_5->data = VAR_8->root.data;

    } else {
        if (FUNC_2(VAR_4, &VAR_7, VAR_8->root_lengths->elts, 0,
                                VAR_8->root_values->elts)
            == ((void*)0))
        {
            return VAR_0;
        }

        if (FUNC_0(VAR_4->pool, (ngx_str_t *) &VAR_2->prefix, &VAR_7)
            != VAR_1)
        {
            return VAR_0;
        }

        VAR_5->len = VAR_7.len;
        VAR_5->valid = 1;
        VAR_5->no_cacheable = 0;
        VAR_5->not_found = 0;
        VAR_5->data = VAR_7.data;
    }

    return VAR_1;
}
