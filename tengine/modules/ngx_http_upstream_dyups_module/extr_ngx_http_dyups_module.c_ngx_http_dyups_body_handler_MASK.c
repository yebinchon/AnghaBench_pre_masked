
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_18__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {scalar_t__ method; TYPE_2__* connection; TYPE_1__* request_body; int uri; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_buf_t ;
struct TYPE_20__ {int nelts; TYPE_3__* elts; } ;
typedef TYPE_5__ ngx_array_t ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {scalar_t__ temp_file; int * bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_3__*) ;
 int * FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_8 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_9(ngx_http_request_t *VAR_7)
{
    ngx_str_t *VAR_8, VAR_9, VAR_10;
    ngx_int_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_array_t *VAR_13;

    FUNC_7(&VAR_9, "");

    if (VAR_7->method != VAR_4) {
        VAR_11 = VAR_1;
        goto finish;
    }

    VAR_13 = FUNC_0(VAR_7->pool, &VAR_7->uri);
    if (VAR_13 == ((void*)0)) {
        FUNC_7(&VAR_9, "out of memory");
        VAR_11 = VAR_0;
        goto finish;
    }

    if (VAR_7->request_body == ((void*)0) || VAR_7->request_body->bufs == ((void*)0)) {
        VAR_11 = VAR_3;
        FUNC_5(VAR_5, VAR_7->connection->log, 0,
                       "[dyups] interface no content");
        FUNC_7(&VAR_9, "no content\n");
        goto finish;
    }

    if (VAR_7->request_body->temp_file) {

        VAR_12 = FUNC_3(VAR_7);
    } else {

        VAR_12 = FUNC_2(VAR_7);
    }

    if (VAR_12 == ((void*)0)) {
        VAR_11 = VAR_0;
        FUNC_7(&VAR_9, "out of memory\n");
        goto finish;
    }

    if (VAR_13->nelts != 2) {
        FUNC_7(&VAR_9, "not support this interface");
        VAR_11 = VAR_2;
        goto finish;
    }






    VAR_8 = VAR_13->elts;

    if (VAR_8[0].len != 8
        || FUNC_8(VAR_8[0].data, (u_char *) "upstream", 8) != 0)
    {
        FUNC_7(&VAR_9, "not support this api");
        VAR_11 = VAR_2;
        goto finish;
    }

    VAR_10 = VAR_8[1];

    FUNC_6(VAR_6, VAR_7->connection->log, 0,
                  "[dyups] post upstream name: %V", &VAR_10);

    VAR_11 = FUNC_1(&VAR_10, VAR_12, &VAR_9);

finish:

    FUNC_4(VAR_7, VAR_11, &VAR_9);
}
