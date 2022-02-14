
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
typedef enum http_parser_url_fields { ____Placeholder_http_parser_url_fields } http_parser_url_fields ;
struct TYPE_2__ {size_t off; size_t len; } ;


 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (size_t) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, struct http_parser_url *VAR_1, enum http_parser_url_fields VAR_2) {
    char *VAR_3 = ((void*)0);

    if (VAR_1->field_set & (1 << VAR_2)) {
        uint16_t VAR_4 = VAR_1->field_data[VAR_2].off;
        uint16_t VAR_5 = VAR_1->field_data[VAR_2].len;
        VAR_3 = FUNC_1(VAR_5 + 1 * sizeof(char));
        FUNC_0(VAR_3, &VAR_0[VAR_4], VAR_5);
    }

    return VAR_3;
}
