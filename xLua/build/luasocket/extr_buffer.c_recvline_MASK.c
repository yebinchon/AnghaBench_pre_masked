
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_buffer ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char const**,size_t*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,char const) ;

__attribute__((used)) static int FUNC_3(p_buffer VAR_1, luaL_Buffer *VAR_2) {
    int VAR_3 = VAR_0;
    while (VAR_3 == VAR_0) {
        size_t VAR_4, VAR_5; const char *VAR_6;
        VAR_3 = FUNC_0(VAR_1, &VAR_6, &VAR_4);
        VAR_5 = 0;
        while (VAR_5 < VAR_4 && VAR_6[VAR_5] != '\n') {

            if (VAR_6[VAR_5] != '\r') FUNC_2(VAR_2, VAR_6[VAR_5]);
            VAR_5++;
        }
        if (VAR_5 < VAR_4) {
            FUNC_1(VAR_1, VAR_5+1);
            break;
        } else
            FUNC_1(VAR_1, VAR_5);
    }
    return VAR_3;
}
