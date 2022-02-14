
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef size_t UC ;





 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,char const*) ;
 int* VAR_0 ;
 int FUNC_2 (size_t,int *) ;

__attribute__((used)) static size_t FUNC_3(UC VAR_1, UC *VAR_2, size_t VAR_3,
        const char *VAR_4, luaL_Buffer *VAR_5)
{
    VAR_2[VAR_3++] = VAR_1;

    while (VAR_3 > 0) {
        switch (VAR_0[VAR_2[0]]) {

            case 130:
                if (VAR_3 < 2) return VAR_3;
                if (VAR_2[1] == '\n') {
                    FUNC_1(VAR_5, VAR_4);
                    return 0;
                } else FUNC_2(VAR_2[0], VAR_5);
                break;

            case 129:
                if (VAR_3 < 3) return VAR_3;

                if (VAR_2[1] == '\r' && VAR_2[2] == '\n') {
                    FUNC_2(VAR_2[0], VAR_5);
                    FUNC_1(VAR_5, VAR_4);
                    return 0;
                } else FUNC_0(VAR_5, VAR_2[0]);
                break;

            case 128:
                FUNC_2(VAR_2[0], VAR_5);
                break;

            default:
                FUNC_0(VAR_5, VAR_2[0]);
                break;
        }
        VAR_2[0] = VAR_2[1]; VAR_2[1] = VAR_2[2];
        VAR_3--;
    }
    return 0;
}
