
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_10__ {int len; char* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_5__* www_authenticate; int headers; } ;
struct TYPE_11__ {TYPE_2__ headers_out; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_8__ {char* data; size_t len; } ;
struct TYPE_12__ {int hash; TYPE_1__ value; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*,int) ;
 TYPE_5__* FUNC_1 (int *) ;
 char* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3)
{
    size_t VAR_4;
    u_char *VAR_5, *VAR_6;

    VAR_2->headers_out.www_authenticate = FUNC_1(&VAR_2->headers_out.headers);
    if (VAR_2->headers_out.www_authenticate == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = sizeof("Basic realm=\"\"") - 1 + VAR_3->len;

    VAR_5 = FUNC_2(VAR_2->pool, VAR_4);
    if (VAR_5 == ((void*)0)) {
        VAR_2->headers_out.www_authenticate->hash = 0;
        VAR_2->headers_out.www_authenticate = ((void*)0);
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_5, "Basic realm=\"", sizeof("Basic realm=\"") - 1);
    VAR_6 = FUNC_0(VAR_6, VAR_3->data, VAR_3->len);
    *VAR_6 = '"';

    VAR_2->headers_out.www_authenticate->hash = 1;
    FUNC_3(&VAR_2->headers_out.www_authenticate->key, "WWW-Authenticate");
    VAR_2->headers_out.www_authenticate->value.data = VAR_5;
    VAR_2->headers_out.www_authenticate->value.len = VAR_4;

    return VAR_1;
}
