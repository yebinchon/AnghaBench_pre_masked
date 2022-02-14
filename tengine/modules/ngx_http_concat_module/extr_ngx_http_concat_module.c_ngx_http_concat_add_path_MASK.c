
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_14__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {size_t nelts; } ;
typedef TYPE_4__ ngx_array_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 char* FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_3 (int ,int ,int ,char*,char*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 char* FUNC_5 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_6, ngx_array_t *VAR_7,
    size_t VAR_8, ngx_str_t *VAR_9, u_char *VAR_10, u_char *VAR_11)
{
    u_char *VAR_12;
    ngx_str_t *VAR_13, VAR_14;
    ngx_uint_t VAR_15;

    if (VAR_10 == VAR_11) {
        FUNC_4(VAR_4, VAR_6->connection->log, 0,
                      "client sent zero concat filename");
        return VAR_0;
    }

    if (VAR_7->nelts >= VAR_8) {
        FUNC_4(VAR_4, VAR_6->connection->log, 0,
                      "client sent too many concat filenames");
        return VAR_0;
    }

    VAR_13 = FUNC_0(VAR_7);
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }

    VAR_13->len = VAR_9->len + VAR_10 - VAR_11;
    VAR_13->data = FUNC_5(VAR_6->pool, VAR_13->len + 1);
    if (VAR_13->data == ((void*)0)) {
        return VAR_1;
    }

    VAR_12 = FUNC_1(VAR_13->data, VAR_9->data, VAR_9->len);
    VAR_12 = FUNC_1(VAR_12, VAR_11, VAR_10 - VAR_11);
    *VAR_12 = '\0';

    VAR_14.len = 0;
    VAR_14.data = ((void*)0);
    VAR_15 = VAR_2;

    if (FUNC_2(VAR_6, VAR_13, &VAR_14, &VAR_15) != VAR_5) {
        return VAR_0;
    }

    FUNC_3(VAR_3, VAR_6->connection->log, 0,
                   "http concat add file: \"%s\"", VAR_13->data);

    return VAR_5;
}
