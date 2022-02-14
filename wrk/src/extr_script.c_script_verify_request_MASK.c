
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int on_message_complete; } ;
typedef TYPE_1__ http_parser_settings ;
struct TYPE_8__ {size_t* data; } ;
typedef TYPE_2__ http_parser ;
typedef enum http_errno { ____Placeholder_http_errno } http_errno ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,int,int) ;
 char* FUNC_3 (int) ;
 size_t FUNC_4 (TYPE_2__*,TYPE_1__*,char*,size_t) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,char**,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;

size_t FUNC_7(lua_State *VAR_4) {
    http_parser_settings VAR_5 = {
        .on_message_complete = VAR_3
    };
    http_parser VAR_6;
    char *VAR_7 = ((void*)0);
    size_t VAR_8, VAR_9 = 0;

    FUNC_6(VAR_4, &VAR_7, &VAR_8);
    FUNC_5(&VAR_6, VAR_1);
    VAR_6.data = &VAR_9;

    size_t VAR_10 = FUNC_4(&VAR_6, &VAR_5, VAR_7, VAR_8);

    if (VAR_10 != VAR_8 || VAR_9 == 0) {
        enum http_errno VAR_11 = FUNC_0(&VAR_6);
        const char *VAR_12 = FUNC_3(VAR_11);
        const char *VAR_13 = VAR_11 != VAR_0 ? VAR_12 : "incomplete request";
        int VAR_14 = 1, VAR_15 = 1;

        for (char *VAR_16 = VAR_7; VAR_16 < VAR_7 + VAR_10; VAR_16++) {
            VAR_15++;
            if (*VAR_16 == '\n') {
                VAR_15 = 1;
                VAR_14++;
            }
        }

        FUNC_2(VAR_2, "%s at %d:%d\n", VAR_13, VAR_14, VAR_15);
        FUNC_1(1);
    }

    return VAR_9;
}
