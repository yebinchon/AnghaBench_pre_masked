
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {size_t len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_11__ {size_t len; int * data; scalar_t__ not_found; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_12__ {int ncaptures; int* captures; int * captures_data; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int *,size_t) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,TYPE_2__*,int) ;

int
FUNC_3(ngx_http_request_t *VAR_3, u_char *VAR_4,
    size_t VAR_5, u_char *VAR_6, int VAR_7, u_char **VAR_8,
    size_t *VAR_9, char **VAR_10)
{
    ngx_uint_t VAR_11;
    ngx_str_t VAR_12;
    ngx_http_variable_value_t *VAR_13;







    if (VAR_3 == ((void*)0)) {
        *VAR_10 = "no request object found";
        return VAR_1;
    }

    if ((VAR_3)->connection->fd == (ngx_socket_t) -1) {
        *VAR_10 = "API disabled in the current context";
        return VAR_1;
    }
    VAR_11 = FUNC_1(VAR_6, VAR_4, VAR_5);

    VAR_12.data = VAR_6;
    VAR_12.len = VAR_5;

    FUNC_0("variable name: %.*s", (int) VAR_5, *VAR_6);

    VAR_13 = FUNC_2(VAR_3, &VAR_12, VAR_11);
    if (VAR_13 == ((void*)0) || VAR_13->not_found) {
        return VAR_0;
    }

    *VAR_8 = VAR_13->data;
    *VAR_9 = VAR_13->len;
    return VAR_2;
}
