
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_17__ {char* data; } ;
struct TYPE_15__ {TYPE_8__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_4__* location; int headers; } ;
struct TYPE_16__ {TYPE_3__ headers_out; TYPE_2__* connection; TYPE_1__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {scalar_t__ (* rewrite_redirect ) (TYPE_5__*,TYPE_4__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4, ngx_table_elt_t *VAR_5,
    ngx_uint_t VAR_6)
{
    ngx_int_t VAR_7;
    ngx_table_elt_t *VAR_8;

    VAR_8 = FUNC_0(&VAR_4->headers_out.headers);
    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    *VAR_8 = *VAR_5;

    if (VAR_4->upstream->rewrite_redirect) {
        VAR_7 = VAR_4->upstream->rewrite_redirect(VAR_4, VAR_8, 0);

        if (VAR_7 == VAR_0) {
            return VAR_3;
        }

        if (VAR_7 == VAR_3) {
            VAR_4->headers_out.location = VAR_8;

            FUNC_1(VAR_2, VAR_4->connection->log, 0,
                           "rewritten location: \"%V\"", &VAR_8->value);
        }

        return VAR_7;
    }

    if (VAR_8->value.data[0] != '/') {
        VAR_4->headers_out.location = VAR_8;
    }






    return VAR_3;
}
