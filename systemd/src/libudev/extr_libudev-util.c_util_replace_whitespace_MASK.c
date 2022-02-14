
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 size_t FUNC_2 (char const*,int ) ;

size_t FUNC_3(const char *VAR_1, char *VAR_2, size_t VAR_3) {
        bool VAR_4 = 0;
        size_t VAR_5, VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_5 = FUNC_2(VAR_1, VAR_0);

        for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_5 < VAR_3 && VAR_1[VAR_5] != '\0'; VAR_5++) {
                if (FUNC_1(VAR_1[VAR_5])) {
                        VAR_4 = 1;
                        continue;
                }

                if (VAR_4) {
                        if (VAR_6 + 1 >= VAR_3)
                                break;

                        VAR_2[VAR_6++] = '_';
                        VAR_4 = 0;
                }
                VAR_2[VAR_6++] = VAR_1[VAR_5];
        }

        VAR_2[VAR_6] = '\0';
        return VAR_6;
}
