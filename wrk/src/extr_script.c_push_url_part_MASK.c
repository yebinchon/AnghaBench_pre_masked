
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
typedef int lua_State ;
typedef enum http_parser_url_fields { ____Placeholder_http_parser_url_fields } http_parser_url_fields ;
struct TYPE_2__ {size_t off; size_t len; } ;




 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0, char *VAR_1, struct http_parser_url *VAR_2, enum http_parser_url_fields VAR_3) {
    int VAR_4 = VAR_2->field_set & (1 << VAR_3) ? 128 : 129;
    uint16_t VAR_5, VAR_6;
    switch (VAR_4) {
        case 128:
            VAR_5 = VAR_2->field_data[VAR_3].off;
            VAR_6 = VAR_2->field_data[VAR_3].len;
            FUNC_0(VAR_0, &VAR_1[VAR_5], VAR_6);
            break;
        case 129:
            FUNC_1(VAR_0);
    }
    return VAR_4;
}
