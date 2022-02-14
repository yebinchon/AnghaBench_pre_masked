
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {int len; scalar_t__ data; } ;
struct TYPE_14__ {int len; scalar_t__ data; } ;
struct TYPE_16__ {TYPE_5__ value; TYPE_4__ key; scalar_t__ lowcase_key; } ;
typedef TYPE_6__ ngx_table_elt_t ;
struct TYPE_17__ {int nelts; TYPE_6__* elts; struct TYPE_17__* next; } ;
typedef TYPE_7__ ngx_list_part_t ;
struct TYPE_11__ {TYPE_7__ part; } ;
struct TYPE_12__ {TYPE_1__ headers; } ;
struct TYPE_18__ {TYPE_3__* connection; TYPE_2__ headers_in; } ;
typedef TYPE_8__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,TYPE_8__*) ;
 TYPE_8__* FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ,int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_4)
{
    ngx_list_part_t *VAR_5;
    ngx_table_elt_t *VAR_6;
    ngx_http_request_t *VAR_7;
    ngx_uint_t VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;

    VAR_9 = FUNC_4(VAR_4);

    if (VAR_9 >= 1) {
        if (FUNC_5(VAR_4, 1)) {
            VAR_10 = VAR_1;

        } else {
            VAR_10 = FUNC_1(VAR_4, 1);
        }

        if (VAR_9 >= 2) {
            VAR_11 = FUNC_11(VAR_4, 2);
        }

    } else {
        VAR_10 = VAR_1;
    }

    VAR_7 = FUNC_13(VAR_4);
    if (VAR_7 == ((void*)0)) {
        return FUNC_2(VAR_4, "no request object found");
    }

    FUNC_12(VAR_4, VAR_7);

    VAR_5 = &VAR_7->headers_in.headers.part;
    VAR_12 = VAR_5->nelts;
    while (VAR_5->next != ((void*)0)) {
        VAR_5 = VAR_5->next;
        VAR_12 += VAR_5->nelts;
    }

    if (VAR_10 > 0 && VAR_12 > VAR_10) {
        FUNC_16(VAR_2, VAR_7->connection->log, 0,
                       "lua exceeding request header limit %d > %d", VAR_12,
                       VAR_10);
        VAR_12 = VAR_10;
        VAR_13 = 1;
    }

    FUNC_3(VAR_4, 0, VAR_12);

    if (!VAR_11) {
        FUNC_6(VAR_4, FUNC_14(
                              VAR_3));
        FUNC_9(VAR_4, VAR_0);
        FUNC_10(VAR_4, -2);
    }

    VAR_5 = &VAR_7->headers_in.headers.part;
    VAR_6 = VAR_5->elts;

    for (VAR_8 = 0; ; VAR_8++) {

        FUNC_0("stack top: %d", FUNC_4(VAR_4));

        if (VAR_8 >= VAR_5->nelts) {
            if (VAR_5->next == ((void*)0)) {
                break;
            }

            VAR_5 = VAR_5->next;
            VAR_6 = VAR_5->elts;
            VAR_8 = 0;
        }

        if (VAR_11) {
            FUNC_8(VAR_4, (char *) VAR_6[VAR_8].key.data, VAR_6[VAR_8].key.len);

        } else {
            FUNC_8(VAR_4, (char *) VAR_6[VAR_8].lowcase_key,
                            VAR_6[VAR_8].key.len);
        }



        FUNC_8(VAR_4, (char *) VAR_6[VAR_8].value.data,
                        VAR_6[VAR_8].value.len);

        FUNC_15(VAR_4, -3);

        FUNC_16(VAR_2, VAR_7->connection->log, 0,
                       "lua request header: \"%V: %V\"",
                       &VAR_6[VAR_8].key, &VAR_6[VAR_8].value);

        if (--VAR_12 <= 0) {
            break;
        }
    }

    if (VAR_13) {
        FUNC_7(VAR_4, "truncated");
        return 2;
    }

    return 1;
}
