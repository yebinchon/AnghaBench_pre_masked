
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_buffer ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,char const**,size_t*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(p_buffer VAR_1, size_t VAR_2, luaL_Buffer *VAR_3) {
    int VAR_4 = VAR_0;
    size_t VAR_5 = 0;
    while (VAR_4 == VAR_0) {
        size_t VAR_6; const char *VAR_7;
        VAR_4 = FUNC_1(VAR_1, &VAR_7, &VAR_6);
        VAR_6 = FUNC_0(VAR_6, VAR_2 - VAR_5);
        FUNC_3(VAR_3, VAR_7, VAR_6);
        FUNC_2(VAR_1, VAR_6);
        VAR_5 += VAR_6;
        if (VAR_5 >= VAR_2) break;
    }
    return VAR_4;
}
