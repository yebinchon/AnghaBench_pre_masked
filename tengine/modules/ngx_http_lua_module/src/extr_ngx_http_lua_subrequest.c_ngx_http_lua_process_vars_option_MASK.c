
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int len; int * data; } ;
struct TYPE_7__ {int len; int * data; } ;
struct TYPE_9__ {TYPE_2__ value; TYPE_1__ key; } ;
typedef TYPE_3__ ngx_keyval_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_array_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int,int *) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int * FUNC_10 (int ,int,int) ;
 TYPE_3__* FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(ngx_http_request_t *VAR_1, lua_State *VAR_2,
    int VAR_3, ngx_array_t **VAR_4)
{
    ngx_array_t *VAR_5;
    ngx_keyval_t *VAR_6;

    if (VAR_3 < 0) {
        VAR_3 = FUNC_3(VAR_2) + VAR_3 + 1;
    }

    VAR_5 = *VAR_4;

    if (VAR_5 == ((void*)0)) {

        VAR_5 = FUNC_10(VAR_1->pool, 4, sizeof(ngx_keyval_t));
        if (VAR_5 == ((void*)0)) {
            FUNC_0("here");
            FUNC_1(VAR_2, "no memory");
            return;
        }

        *VAR_4 = VAR_5;
    }

    FUNC_7(VAR_2);
    while (FUNC_5(VAR_2, VAR_3) != 0) {

        if (FUNC_9(VAR_2, -2) != VAR_0) {
            FUNC_1(VAR_2, "attempt to use a non-string key in the "
                       "\"vars\" option table");
            return;
        }

        if (!FUNC_4(VAR_2, -1)) {
            FUNC_1(VAR_2, "attempt to use bad variable value type %s",
                       FUNC_2(VAR_2, -1));
            return;
        }

        VAR_6 = FUNC_11(VAR_5);
        if (VAR_6 == ((void*)0)) {
            FUNC_0("here");
            FUNC_1(VAR_2, "no memory");
            return;
        }

        VAR_6->key.data = (u_char *) FUNC_8(VAR_2, -2, &VAR_6->key.len);
        VAR_6->value.data = (u_char *) FUNC_8(VAR_2, -1, &VAR_6->value.len);

        FUNC_6(VAR_2, 1);
    }
}
