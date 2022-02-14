
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_buffer ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const**,size_t*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(p_buffer VAR_2, luaL_Buffer *VAR_3) {
    int VAR_4 = VAR_1;
    size_t VAR_5 = 0;
    while (VAR_4 == VAR_1) {
        const char *VAR_6; size_t VAR_7;
        VAR_4 = FUNC_0(VAR_2, &VAR_6, &VAR_7);
        VAR_5 += VAR_7;
        FUNC_2(VAR_3, VAR_6, VAR_7);
        FUNC_1(VAR_2, VAR_7);
    }
    if (VAR_4 == VAR_0) {
        if (VAR_5 > 0) return VAR_1;
        else return VAR_0;
    } else return VAR_4;
}
