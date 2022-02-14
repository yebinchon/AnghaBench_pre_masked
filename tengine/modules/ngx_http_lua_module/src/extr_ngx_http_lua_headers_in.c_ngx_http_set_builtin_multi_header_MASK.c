
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_table_elt_t ;
struct TYPE_14__ {scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int pool; int headers_in; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_16__ {int offset; int no_override; } ;
typedef TYPE_3__ ngx_http_lua_header_val_t ;
struct TYPE_17__ {scalar_t__ nelts; scalar_t__ nalloc; } ;
typedef TYPE_4__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int,int) ;
 int ** FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_1__*,int **) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_2,
    ngx_http_lua_header_val_t *VAR_3, ngx_str_t *VAR_4)
{
    ngx_array_t *VAR_5;
    ngx_table_elt_t **VAR_6, *VAR_7;

    VAR_5 = (ngx_array_t *) ((char *) &VAR_2->headers_in + VAR_3->offset);

    if (!VAR_3->no_override && VAR_5->nelts > 0) {
        FUNC_1(VAR_5);

        if (FUNC_2(VAR_5, VAR_2->pool, 2,
                           sizeof(ngx_table_elt_t *))
            != VAR_1)
        {
            return VAR_0;
        }

        FUNC_0("clear multi-value headers: %d", (int) VAR_5->nelts);
    }


    if (VAR_5->nalloc == 0) {
        if (FUNC_2(VAR_5, VAR_2->pool, 2,
                           sizeof(ngx_table_elt_t *))
            != VAR_1)
        {
            return VAR_0;
        }
    }


    if (FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_7) == VAR_0) {
        return VAR_0;
    }

    if (VAR_4->len == 0) {
        return VAR_1;
    }

    FUNC_0("new multi-value header: %p", *VAR_7);

    VAR_6 = FUNC_3(VAR_5);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_6 = VAR_7;
    return VAR_1;
}
