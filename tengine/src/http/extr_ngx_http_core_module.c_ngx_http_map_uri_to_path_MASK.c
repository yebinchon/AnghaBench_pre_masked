
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef char u_char ;
struct TYPE_24__ {size_t len; char* data; } ;
typedef TYPE_6__ ngx_str_t ;
struct TYPE_23__ {size_t len; scalar_t__ data; } ;
struct TYPE_25__ {TYPE_5__ uri; scalar_t__ add_uri_to_alias; int pool; TYPE_1__* connection; int valid_location; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_20__ {size_t len; int data; } ;
struct TYPE_26__ {size_t alias; TYPE_4__* root_values; TYPE_3__* root_lengths; TYPE_2__ root; int name; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {int elts; } ;
struct TYPE_21__ {int elts; } ;
struct TYPE_19__ {int log; } ;
struct TYPE_18__ {int prefix; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*,int ,size_t) ;
 char* FUNC_1 (char*,scalar_t__,size_t) ;
 TYPE_17__* VAR_3 ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,TYPE_6__*) ;
 int VAR_4 ;
 TYPE_8__* FUNC_3 (TYPE_7__*,int ) ;
 int * FUNC_4 (TYPE_7__*,TYPE_6__*,int ,size_t,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 char* FUNC_6 (int ,size_t) ;

u_char *
FUNC_7(ngx_http_request_t *VAR_5, ngx_str_t *VAR_6,
    size_t *VAR_7, size_t VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    ngx_http_core_loc_conf_t *VAR_11;

    VAR_11 = FUNC_3(VAR_5, VAR_4);

    VAR_10 = VAR_11->alias;

    if (VAR_10 && !VAR_5->valid_location) {
        FUNC_5(VAR_0, VAR_5->connection->log, 0,
                      "\"alias\" cannot be used in location \"%V\" "
                      "where URI was rewritten", &VAR_11->name);
        return ((void*)0);
    }

    if (VAR_11->root_lengths == ((void*)0)) {

        *VAR_7 = VAR_11->root.len;

        VAR_6->len = VAR_11->root.len + VAR_8 + VAR_5->uri.len - VAR_10 + 1;

        VAR_6->data = FUNC_6(VAR_5->pool, VAR_6->len);
        if (VAR_6->data == ((void*)0)) {
            return ((void*)0);
        }

        VAR_9 = FUNC_0(VAR_6->data, VAR_11->root.data, VAR_11->root.len);

    } else {

        if (VAR_10 == VAR_1) {
            VAR_8 += VAR_5->add_uri_to_alias ? VAR_5->uri.len + 1 : 1;

        } else {
            VAR_8 += VAR_5->uri.len - VAR_10 + 1;
        }

        if (FUNC_4(VAR_5, VAR_6, VAR_11->root_lengths->elts, VAR_8,
                                VAR_11->root_values->elts)
            == ((void*)0))
        {
            return ((void*)0);
        }

        if (FUNC_2(VAR_5->pool, (ngx_str_t *) &VAR_3->prefix, VAR_6)
            != VAR_2)
        {
            return ((void*)0);
        }

        *VAR_7 = VAR_6->len - VAR_8;
        VAR_9 = VAR_6->data + *VAR_7;

        if (VAR_10 == VAR_1) {
            if (!VAR_5->add_uri_to_alias) {
                *VAR_9 = '\0';
                return VAR_9;
            }

            VAR_10 = 0;
        }
    }

    VAR_9 = FUNC_1(VAR_9, VAR_5->uri.data + VAR_10, VAR_5->uri.len - VAR_10 + 1);

    return VAR_9;
}
