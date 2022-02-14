
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
struct TYPE_6__ {int pool; TYPE_1__ args; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int * FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    u_char *VAR_3;
    u_char *VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;

    VAR_6 = FUNC_3(VAR_1);

    if (VAR_6 != 0 && VAR_6 != 1) {
        return FUNC_1(VAR_1, "expecting 0 or 1 arguments but seen %d", VAR_6);
    }

    if (VAR_6 == 1) {
        VAR_7 = FUNC_0(VAR_1, 1);
        FUNC_4(VAR_1, 1);

    } else {
        VAR_7 = VAR_0;
    }

    VAR_2 = FUNC_6(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_1(VAR_1, "no request object found");
    }

    FUNC_5(VAR_1, VAR_2);

    if (VAR_2->args.len == 0) {
        FUNC_2(VAR_1, 0, 0);
        return 1;
    }




    VAR_3 = FUNC_9(VAR_2->pool, VAR_2->args.len);
    if (VAR_3 == ((void*)0)) {
        return FUNC_1(VAR_1, "no memory");
    }

    FUNC_2(VAR_1, 0, 4);

    FUNC_8(VAR_3, VAR_2->args.data, VAR_2->args.len);

    VAR_4 = VAR_3 + VAR_2->args.len;

    VAR_5 = FUNC_7(VAR_1, VAR_3, VAR_4, VAR_7);

    FUNC_10(VAR_2->pool, VAR_3);

    return VAR_5;
}
