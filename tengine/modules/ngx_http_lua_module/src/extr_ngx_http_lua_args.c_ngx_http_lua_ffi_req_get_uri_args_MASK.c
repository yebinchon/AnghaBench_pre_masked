
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
struct TYPE_8__ {int len; int data; } ;
struct TYPE_11__ {TYPE_1__ args; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_10__ {char* data; int len; } ;
struct TYPE_9__ {char* data; int len; } ;
struct TYPE_12__ {TYPE_3__ value; TYPE_2__ key; } ;
typedef TYPE_5__ ngx_http_lua_ffi_table_elt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char**,char**,int,int ) ;
 int FUNC_2 (char*,int ,int) ;

int
FUNC_3(ngx_http_request_t *VAR_2, u_char *VAR_3,
    ngx_http_lua_ffi_table_elt_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = 0;
    u_char *VAR_8, *VAR_9, *VAR_10;
    u_char *VAR_11, *VAR_12;

    if (VAR_5 <= 0) {
        return VAR_0;
    }

    FUNC_2(VAR_3, VAR_2->args.data, VAR_2->args.len);

    VAR_6 = 0;
    VAR_8 = VAR_3 + VAR_2->args.len;
    VAR_9 = VAR_3;
    VAR_10 = VAR_9;

    while (VAR_9 != VAR_8) {
        if (*VAR_9 == '=' && !VAR_7) {


            VAR_11 = VAR_10; VAR_12 = VAR_10;

            FUNC_1(&VAR_12, &VAR_11, VAR_9 - VAR_10,
                                      VAR_1);

            FUNC_0("saving key %.*s", (int) (VAR_12 - VAR_10), VAR_10);

            VAR_4[VAR_6].key.data = VAR_10;
            VAR_4[VAR_6].key.len = (int) (VAR_12 - VAR_10);


            VAR_9++;

            VAR_10 = VAR_9;
            VAR_7 = 1;

        } else if (*VAR_9 == '&') {

            VAR_11 = VAR_10; VAR_12 = VAR_10;

            FUNC_1(&VAR_12, &VAR_11, VAR_9 - VAR_10,
                                      VAR_1);

            FUNC_0("pushing key or value %.*s", (int) (VAR_12 - VAR_10), VAR_10);

            if (VAR_7) {

                VAR_7 = 0;

                if (VAR_4[VAR_6].key.len) {
                    VAR_4[VAR_6].value.data = VAR_10;
                    VAR_4[VAR_6].value.len = (int) (VAR_12 - VAR_10);
                    VAR_6++;
                }

            } else {


                FUNC_0("pushing boolean true");

                if (VAR_12 - VAR_10) {
                    VAR_4[VAR_6].key.data = VAR_10;
                    VAR_4[VAR_6].key.len = (int) (VAR_12 - VAR_10);
                    VAR_4[VAR_6].value.len = -1;
                    VAR_6++;
                }
            }

            if (VAR_6 == VAR_5) {
                return VAR_6;
            }


            VAR_9++;

            VAR_10 = VAR_9;

        } else {
            VAR_9++;
        }
    }

    if (VAR_9 != VAR_10 || VAR_7) {
        VAR_11 = VAR_10; VAR_12 = VAR_10;

        FUNC_1(&VAR_12, &VAR_11, VAR_9 - VAR_10,
                                  VAR_1);

        FUNC_0("pushing key or value %.*s", (int) (VAR_12 - VAR_10), VAR_10);

        if (VAR_7) {
            if (VAR_4[VAR_6].key.len) {
                VAR_4[VAR_6].value.data = VAR_10;
                VAR_4[VAR_6].value.len = (int) (VAR_12 - VAR_10);
                VAR_6++;
            }

        } else {
            if (VAR_12 - VAR_10) {
                VAR_4[VAR_6].key.data = VAR_10;
                VAR_4[VAR_6].key.len = (int) (VAR_12 - VAR_10);
                VAR_4[VAR_6].value.len = (int) -1;
                VAR_6++;
            }
        }
    }

    return VAR_6;
}
