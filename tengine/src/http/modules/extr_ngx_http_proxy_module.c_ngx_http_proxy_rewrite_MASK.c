
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {size_t len; int * data; } ;
struct TYPE_9__ {TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
struct TYPE_10__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int * FUNC_3 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3, size_t VAR_4,
    size_t VAR_5, ngx_str_t *VAR_6)
{
    u_char *VAR_7, *VAR_8;
    size_t VAR_9;

    VAR_9 = VAR_6->len + VAR_3->value.len - VAR_5;

    if (VAR_6->len > VAR_5) {

        VAR_8 = FUNC_3(VAR_2->pool, VAR_9 + 1);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7 = FUNC_0(VAR_8, VAR_3->value.data, VAR_4);
        VAR_7 = FUNC_0(VAR_7, VAR_6->data, VAR_6->len);

        FUNC_1(VAR_7, VAR_3->value.data + VAR_4 + VAR_5,
                   VAR_3->value.len - VAR_5 - VAR_4 + 1);

        VAR_3->value.data = VAR_8;

    } else {
        VAR_7 = FUNC_0(VAR_3->value.data + VAR_4, VAR_6->data,
                     VAR_6->len);

        FUNC_2(VAR_7, VAR_3->value.data + VAR_4 + VAR_5,
                    VAR_3->value.len - VAR_5 - VAR_4 + 1);
    }

    VAR_3->value.len = VAR_9;

    return VAR_1;
}
