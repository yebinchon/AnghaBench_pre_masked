
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int ,char const) ;
 size_t FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (char const*,int ) ;

size_t FUNC_5(const char **VAR_1, char **VAR_2, char **VAR_3) {
        const char *VAR_4;
        char *VAR_5;
        size_t VAR_6, VAR_7;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_4 = *VAR_1;

        VAR_4 += FUNC_4(VAR_4, VAR_0);
        VAR_6 = FUNC_2(VAR_4, VAR_0);

        if (VAR_6 <= 0 ||
            VAR_4[VAR_6-1] != ':')
                return 0;

        VAR_7 = VAR_6;
        VAR_6--;

        if (VAR_6 > 0 && VAR_4[VAR_6-1] == ']') {
                size_t VAR_8 = VAR_6-1;

                for (;;) {

                        if (VAR_4[VAR_8] == '[') {
                                VAR_5 = FUNC_3(VAR_4+VAR_8+1, VAR_6-VAR_8-2);
                                if (VAR_5)
                                        *VAR_3 = VAR_5;

                                VAR_6 = VAR_8;
                                break;
                        }

                        if (VAR_8 == 0)
                                break;

                        VAR_8--;
                }
        }

        VAR_5 = FUNC_3(VAR_4, VAR_6);
        if (VAR_5)
                *VAR_2 = VAR_5;


        if (VAR_4[VAR_7] != '\0' && FUNC_1(VAR_0, VAR_4[VAR_7]))
                VAR_7++;

        VAR_6 = (VAR_4 - *VAR_1) + VAR_7;
        *VAR_1 = VAR_4 + VAR_7;
        return VAR_6;
}
