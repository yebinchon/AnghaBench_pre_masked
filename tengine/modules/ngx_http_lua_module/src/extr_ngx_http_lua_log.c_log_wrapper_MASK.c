
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int off_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_9__ {scalar_t__ log_level; } ;
typedef TYPE_2__ ngx_log_t ;
typedef int lua_State ;
struct TYPE_10__ {char* namewhat; char* what; char* name; scalar_t__ linedefined; scalar_t__ currentline; scalar_t__ short_src; } ;
typedef TYPE_3__ lua_Debug ;
 int VAR_0 ;
 int FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,TYPE_3__*) ;
 int FUNC_4 (int *,int,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,size_t) ;
 char* FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int,size_t*) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 char* FUNC_13 (char*,char*,size_t) ;
 int FUNC_14 (scalar_t__,TYPE_2__*,int ,char*,char const*,size_t,char*) ;
 char* FUNC_15 (char*,int,char*,scalar_t__) ;
 size_t FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(ngx_log_t *VAR_1, const char *VAR_2, ngx_uint_t VAR_3,
    lua_State *VAR_4)
{
    u_char *VAR_5;
    u_char *VAR_6, *VAR_7;
    ngx_str_t VAR_8;
    int VAR_9, VAR_10;
    size_t VAR_11, VAR_12;
    size_t VAR_13 = 0;
    int VAR_14;
    const char *VAR_15;
    lua_Debug VAR_16;

    if (VAR_3 > VAR_1->log_level) {
        return 0;
    }




    FUNC_4(VAR_4, 1, &VAR_16);
    FUNC_3(VAR_4, "Snl", &VAR_16);


    VAR_8.data = (u_char *) VAR_16.short_src;
    if (VAR_8.data == ((void*)0)) {
        VAR_8.len = 0;

    } else {
        VAR_6 = VAR_8.data;
        while (*VAR_6 != '\0') {
            if (*VAR_6 == '/' || *VAR_6 == '\\') {
                VAR_8.data = VAR_6 + 1;
            }
            VAR_6++;
        }

        VAR_8.len = VAR_6 - VAR_8.data;
    }



    VAR_9 = FUNC_5(VAR_4);

    VAR_11 = VAR_8.len + VAR_0 + sizeof(":: ") - 1;

    if (*VAR_16.namewhat != '\0' && *VAR_16.what == 'L') {
        VAR_13 = FUNC_16(VAR_16.name);
        VAR_11 += VAR_13 + sizeof("(): ") - 1;
    }

    for (VAR_10 = 1; VAR_10 <= VAR_9; VAR_10++) {
        VAR_14 = FUNC_11(VAR_4, VAR_10);
        switch (VAR_14) {
            case 130:
            case 129:
                FUNC_9(VAR_4, VAR_10, &VAR_12);
                VAR_11 += VAR_12;
                break;

            case 131:
                VAR_11 += sizeof("nil") - 1;
                break;

            case 133:
                if (FUNC_8(VAR_4, VAR_10)) {
                    VAR_11 += sizeof("true") - 1;

                } else {
                    VAR_11 += sizeof("false") - 1;
                }

                break;

            case 128:
                if (!FUNC_1(VAR_4, VAR_10, "__tostring")) {
                    return FUNC_0(VAR_4, VAR_10, "expected table to have "
                                         "__tostring metamethod");
                }

                FUNC_9(VAR_4, -1, &VAR_12);
                VAR_11 += VAR_12;
                break;

            case 132:
                if (FUNC_10(VAR_4, VAR_10) == ((void*)0)) {
                    VAR_11 += sizeof("null") - 1;
                    break;
                }

                continue;

            default:
                VAR_15 = FUNC_7(VAR_4, "string, number, boolean, or nil "
                                      "expected, got %s",
                                      FUNC_12(VAR_4, VAR_14));
                return FUNC_0(VAR_4, VAR_10, VAR_15);
        }
    }

    VAR_5 = FUNC_6(VAR_4, VAR_11);

    VAR_6 = FUNC_13(VAR_5, VAR_8.data, VAR_8.len);

    *VAR_6++ = ':';

    VAR_6 = FUNC_15(VAR_6, VAR_0, "%d",
                     VAR_16.currentline ? VAR_16.currentline : VAR_16.linedefined);

    *VAR_6++ = ':'; *VAR_6++ = ' ';

    if (*VAR_16.namewhat != '\0' && *VAR_16.what == 'L') {
        VAR_6 = FUNC_13(VAR_6, VAR_16.name, VAR_13);
        *VAR_6++ = '(';
        *VAR_6++ = ')';
        *VAR_6++ = ':';
        *VAR_6++ = ' ';
    }

    for (VAR_10 = 1; VAR_10 <= VAR_9; VAR_10++) {
        VAR_14 = FUNC_11(VAR_4, VAR_10);
        switch (VAR_14) {
            case 130:
            case 129:
                VAR_7 = (u_char *) FUNC_9(VAR_4, VAR_10, &VAR_12);
                VAR_6 = FUNC_13(VAR_6, VAR_7, VAR_12);
                break;

            case 131:
                *VAR_6++ = 'n';
                *VAR_6++ = 'i';
                *VAR_6++ = 'l';
                break;

            case 133:
                if (FUNC_8(VAR_4, VAR_10)) {
                    *VAR_6++ = 't';
                    *VAR_6++ = 'r';
                    *VAR_6++ = 'u';
                    *VAR_6++ = 'e';

                } else {
                    *VAR_6++ = 'f';
                    *VAR_6++ = 'a';
                    *VAR_6++ = 'l';
                    *VAR_6++ = 's';
                    *VAR_6++ = 'e';
                }

                break;

            case 128:
                FUNC_1(VAR_4, VAR_10, "__tostring");
                VAR_7 = (u_char *) FUNC_9(VAR_4, -1, &VAR_12);
                VAR_6 = FUNC_13(VAR_6, VAR_7, VAR_12);
                break;

            case 132:
                *VAR_6++ = 'n';
                *VAR_6++ = 'u';
                *VAR_6++ = 'l';
                *VAR_6++ = 'l';

                break;

            default:
                return FUNC_2(VAR_4, "impossible to reach here");
        }
    }

    if (VAR_6 - VAR_5 > (off_t) VAR_11) {
        return FUNC_2(VAR_4, "buffer error: %d > %d", (int) (VAR_6 - VAR_5),
                          (int) VAR_11);
    }

    FUNC_14(VAR_3, VAR_1, 0, "%s%*s", VAR_2, (size_t) (VAR_6 - VAR_5), VAR_5);

    return 0;
}
