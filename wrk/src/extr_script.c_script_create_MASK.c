
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* member_0; char* member_2; int member_1; } ;
typedef TYPE_2__ table_field ;
struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
typedef int lua_State ;
struct TYPE_4__ {size_t off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int) ;
 char* FUNC_13 (int *,int) ;
 int FUNC_14 (int *,char*,struct http_parser_url*,int ) ;
 int FUNC_15 (char*,struct http_parser_url*) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_16 (int *,int,char*,int ) ;
 int FUNC_17 (int *,int,TYPE_2__ const*) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_18 (char*,char) ;
 int VAR_11 ;

lua_State *FUNC_19(char *VAR_12, char *VAR_13, char **VAR_14) {
    lua_State *VAR_15 = FUNC_4();
    FUNC_5(VAR_15);
    (void) FUNC_2(VAR_15, "wrk = require \"wrk\"");

    FUNC_3(VAR_15, "wrk.addr");
    FUNC_6(VAR_15, ((void*)0), VAR_6);
    FUNC_3(VAR_15, "wrk.stats");
    FUNC_6(VAR_15, ((void*)0), VAR_9);
    FUNC_3(VAR_15, "wrk.thread");
    FUNC_6(VAR_15, ((void*)0), VAR_11);

    struct http_parser_url VAR_16 = {};
    FUNC_15(VAR_13, &VAR_16);
    char *VAR_17 = "/";

    if (VAR_16.field_set & (1 << VAR_3)) {
        VAR_17 = &VAR_13[VAR_16.field_data[VAR_3].off];
    }

    const table_field VAR_18[] = {
        { "lookup", VAR_0, VAR_8 },
        { "connect", VAR_0, VAR_7 },
        { "path", VAR_1, VAR_17 },
        { ((void*)0), 0, ((void*)0) },
    };

    FUNC_8(VAR_15, "wrk");

    FUNC_16(VAR_15, 4, "scheme", FUNC_14(VAR_15, VAR_13, &VAR_16, VAR_5));
    FUNC_16(VAR_15, 4, "host", FUNC_14(VAR_15, VAR_13, &VAR_16, VAR_2));
    FUNC_16(VAR_15, 4, "port", FUNC_14(VAR_15, VAR_13, &VAR_16, VAR_4));
    FUNC_17(VAR_15, 4, VAR_18);

    FUNC_7(VAR_15, 4, "headers");
    for (char **VAR_19 = VAR_14; *VAR_19; VAR_19++) {
        char *VAR_20 = FUNC_18(*VAR_19, ':');
        if (VAR_20 && VAR_20[1] == ' ') {
            FUNC_10(VAR_15, *VAR_19, VAR_20 - *VAR_19);
            FUNC_11(VAR_15, VAR_20 + 2);
            FUNC_12(VAR_15, 5);
        }
    }
    FUNC_9(VAR_15, 5);

    if (VAR_12 && FUNC_1(VAR_15, VAR_12)) {
        const char *VAR_21 = FUNC_13(VAR_15, -1);
        FUNC_0(VAR_10, "%s: %s\n", VAR_12, VAR_21);
    }

    return VAR_15;
}
