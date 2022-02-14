
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {TYPE_1__* request_body; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_6__* buf; struct TYPE_9__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
typedef int lua_State ;
struct TYPE_10__ {size_t last; size_t pos; } ;
struct TYPE_7__ {TYPE_3__* bufs; scalar_t__ temp_file; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int * FUNC_7 (int *,size_t,size_t) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_0)
{
    ngx_http_request_t *VAR_1;
    int VAR_2;
    size_t VAR_3;
    ngx_chain_t *VAR_4;
    u_char *VAR_5;
    u_char *VAR_6;

    VAR_2 = FUNC_2(VAR_0);

    if (VAR_2 != 0) {
        return FUNC_1(VAR_0, "expecting 0 arguments but seen %d", VAR_2);
    }

    VAR_1 = FUNC_9(VAR_0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_1(VAR_0, "request object not found");
    }

    FUNC_8(VAR_0, VAR_1);

    if (VAR_1->request_body == ((void*)0)
        || VAR_1->request_body->temp_file
        || VAR_1->request_body->bufs == ((void*)0))
    {
        FUNC_5(VAR_0);
        return 1;
    }

    VAR_4 = VAR_1->request_body->bufs;

    if (VAR_4->next == ((void*)0)) {
        VAR_3 = VAR_4->buf->last - VAR_4->buf->pos;

        if (VAR_3 == 0) {
            FUNC_5(VAR_0);
            return 1;
        }

        FUNC_4(VAR_0, (char *) VAR_4->buf->pos, VAR_3);
        return 1;
    }



    VAR_3 = 0;

    for (; VAR_4; VAR_4 = VAR_4->next) {
        FUNC_0("body chunk len: %d", (int) FUNC_6(VAR_4->buf));
        VAR_3 += VAR_4->buf->last - VAR_4->buf->pos;
    }

    if (VAR_3 == 0) {
        FUNC_5(VAR_0);
        return 1;
    }

    VAR_6 = (u_char *) FUNC_3(VAR_0, VAR_3);

    VAR_5 = VAR_6;
    for (VAR_4 = VAR_1->request_body->bufs; VAR_4; VAR_4 = VAR_4->next) {
        VAR_5 = FUNC_7(VAR_5, VAR_4->buf->pos, VAR_4->buf->last - VAR_4->buf->pos);
    }

    FUNC_4(VAR_0, (char *) VAR_6, VAR_3);
    return 1;
}
