
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const**,char*,int,int ) ;

int FUNC_4(const char *VAR_1, const char *VAR_2) {
        const char *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
        int VAR_6, VAR_7;

        FUNC_2(VAR_1);
        FUNC_2(VAR_2);

        VAR_3 = VAR_1;
        VAR_4 = VAR_2;

        for (;;) {
                char VAR_8[VAR_0], VAR_9[VAR_0];

                VAR_6 = FUNC_3(&VAR_3, VAR_8, sizeof VAR_8, 0);
                if (VAR_6 < 0)
                        return VAR_6;

                if (!VAR_5)
                        VAR_5 = VAR_3;

                VAR_7 = FUNC_3(&VAR_4, VAR_9, sizeof VAR_9, 0);
                if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_6 == 0 && VAR_7 == 0)
                        return 1;
                if (VAR_6 == 0 && VAR_5 == VAR_3)
                        return 0;

                if (VAR_6 != VAR_7 || FUNC_1(VAR_8, VAR_9, VAR_6) != 0) {


                        VAR_4 = VAR_2;
                        VAR_3 = FUNC_0(VAR_5);
                }
        }
}
