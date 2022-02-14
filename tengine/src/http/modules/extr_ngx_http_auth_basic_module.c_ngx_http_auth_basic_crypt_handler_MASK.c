
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int data; } ;
struct TYPE_13__ {int user; TYPE_1__ passwd; } ;
struct TYPE_15__ {TYPE_3__ headers_in; TYPE_2__* connection; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_12__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,int *,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_4, ngx_str_t *VAR_5,
    ngx_str_t *VAR_6)
{
    ngx_int_t VAR_7;
    u_char *VAR_8;

    VAR_7 = FUNC_0(VAR_4->pool, VAR_4->headers_in.passwd.data, VAR_5->data,
                   &VAR_8);

    FUNC_3(VAR_1, VAR_4->connection->log, 0,
                   "rc: %i user: \"%V\" salt: \"%s\"",
                   VAR_7, &VAR_4->headers_in.user, VAR_5->data);

    if (VAR_7 != VAR_3) {
        return VAR_0;
    }

    if (FUNC_5(VAR_8, VAR_5->data) == 0) {
        return VAR_3;
    }

    FUNC_2(VAR_1, VAR_4->connection->log, 0,
                   "encrypted: \"%s\"", VAR_8);

    FUNC_4(VAR_2, VAR_4->connection->log, 0,
                  "user \"%V\": password mismatch",
                  &VAR_4->headers_in.user);

    return FUNC_1(VAR_4, VAR_6);
}
