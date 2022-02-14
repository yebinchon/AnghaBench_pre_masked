
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int pool; TYPE_1__* request_body; scalar_t__ discard_body; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_2__* buf; struct TYPE_10__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
typedef int lua_State ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_7__ {TYPE_4__* bufs; scalar_t__ temp_file; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,int) ;
 int * FUNC_12 (int ,size_t) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    u_char *VAR_3;
    int VAR_4;
    size_t VAR_5;
    ngx_chain_t *VAR_6;
    u_char *VAR_7;
    u_char *VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_9 = FUNC_4(VAR_1);

    if (VAR_9 != 0 && VAR_9 != 1) {
        return FUNC_2(VAR_1, "expecting 0 or 1 arguments but seen %d", VAR_9);
    }

    if (VAR_9 == 1) {
        VAR_10 = FUNC_1(VAR_1, 1);
        FUNC_5(VAR_1, 1);

    } else {
        VAR_10 = VAR_0;
    }

    VAR_2 = FUNC_10(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_2(VAR_1, "no request object found");
    }

    FUNC_9(VAR_1, VAR_2);

    if (VAR_2->discard_body) {
        FUNC_3(VAR_1, 0, 0);
        return 1;
    }

    if (VAR_2->request_body == ((void*)0)) {
        return FUNC_2(VAR_1, "no request body found; "
                          "maybe you should turn on lua_need_request_body?");
    }

    if (VAR_2->request_body->temp_file) {
        FUNC_7(VAR_1);
        FUNC_6(VAR_1, "request body in temp file not supported");
        return 2;
    }

    if (VAR_2->request_body->bufs == ((void*)0)) {
        FUNC_3(VAR_1, 0, 0);
        return 1;
    }




    VAR_5 = 0;
    for (VAR_6 = VAR_2->request_body->bufs; VAR_6; VAR_6 = VAR_6->next) {
        VAR_5 += VAR_6->buf->last - VAR_6->buf->pos;
    }

    FUNC_0("post body length: %d", (int) VAR_5);

    if (VAR_5 == 0) {
        FUNC_3(VAR_1, 0, 0);
        return 1;
    }

    VAR_3 = FUNC_12(VAR_2->pool, VAR_5);
    if (VAR_3 == ((void*)0)) {
        return FUNC_2(VAR_1, "no memory");
    }

    FUNC_3(VAR_1, 0, 4);

    VAR_7 = VAR_3;
    for (VAR_6 = VAR_2->request_body->bufs; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = FUNC_8(VAR_7, VAR_6->buf->pos, VAR_6->buf->last - VAR_6->buf->pos);
    }

    FUNC_0("post body: %.*s", (int) VAR_5, VAR_3);

    VAR_8 = VAR_3 + VAR_5;

    VAR_4 = FUNC_11(VAR_1, VAR_3, VAR_8, VAR_10);

    FUNC_13(VAR_2->pool, VAR_3);

    return VAR_4;
}
