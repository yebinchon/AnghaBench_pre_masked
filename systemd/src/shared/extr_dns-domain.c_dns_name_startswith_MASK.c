
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const**,char*,int,int ) ;

int FUNC_3(const char *VAR_1, const char *VAR_2) {
        const char *VAR_3, *VAR_4;
        int VAR_5, VAR_6;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        VAR_3 = VAR_1;
        VAR_4 = VAR_2;

        for (;;) {
                char VAR_7[VAR_0], VAR_8[VAR_0];

                VAR_5 = FUNC_2(&VAR_4, VAR_8, sizeof VAR_8, 0);
                if (VAR_5 < 0)
                        return VAR_5;
                if (VAR_5 == 0)
                        return 1;

                VAR_6 = FUNC_2(&VAR_3, VAR_7, sizeof VAR_7, 0);
                if (VAR_6 < 0)
                        return VAR_6;

                if (VAR_5 != VAR_6)
                        return 0;
                if (FUNC_0(VAR_7, VAR_8, VAR_5) != 0)
                        return 0;
        }
}
