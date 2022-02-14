
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_parser_url {int field_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,struct http_parser_url*) ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_2, struct http_parser_url *VAR_3) {
    if (!FUNC_0(VAR_2, FUNC_1(VAR_2), 0, VAR_3)) {
        if (!(VAR_3->field_set & (1 << VAR_1))) return 0;
        if (!(VAR_3->field_set & (1 << VAR_0))) return 0;
        return 1;
    }
    return 0;
}
