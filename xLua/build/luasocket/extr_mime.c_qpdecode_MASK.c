
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef int UC ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int* VAR_0 ;

__attribute__((used)) static size_t FUNC_2(UC VAR_1, UC *VAR_2, size_t VAR_3, luaL_Buffer *VAR_4) {
    int VAR_5;
    VAR_2[VAR_3++] = VAR_1;

    switch (VAR_2[0]) {

        case '=':
            if (VAR_3 < 3) return VAR_3;

            if (VAR_2[1] == '\r' && VAR_2[2] == '\n') return 0;

            VAR_1 = VAR_0[VAR_2[1]]; VAR_5 = VAR_0[VAR_2[2]];

            if (VAR_1 > 15 || VAR_5 > 15) FUNC_1(VAR_4, (char *)VAR_2, 3);
            else FUNC_0(VAR_4, (char) ((VAR_1 << 4) + VAR_5));
            return 0;
        case '\r':
            if (VAR_3 < 2) return VAR_3;
            if (VAR_2[1] == '\n') FUNC_1(VAR_4, (char *)VAR_2, 2);
            return 0;
        default:
            if (VAR_2[0] == '\t' || (VAR_2[0] > 31 && VAR_2[0] < 127))
                FUNC_0(VAR_4, VAR_2[0]);
            return 0;
    }
}
