
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lb ;
typedef int la ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const**,char*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_1, const char *VAR_2) {
        const char *VAR_3, *VAR_4;
        int VAR_5, VAR_6;

        FUNC_2(VAR_1);
        FUNC_2(VAR_2);

        VAR_3 = VAR_1 + FUNC_4(VAR_1);
        VAR_4 = VAR_2 + FUNC_4(VAR_2);

        for (;;) {
                char VAR_7[VAR_0], VAR_8[VAR_0];

                if (VAR_3 == ((void*)0) && VAR_4 == ((void*)0))
                        return 0;

                VAR_5 = FUNC_3(VAR_1, &VAR_3, VAR_7, sizeof(VAR_7));
                VAR_6 = FUNC_3(VAR_2, &VAR_4, VAR_8, sizeof(VAR_8));
                if (VAR_5 < 0 || VAR_6 < 0)
                        return FUNC_0(VAR_5, VAR_6);

                VAR_5 = FUNC_1(VAR_7, VAR_5, VAR_8, VAR_6);
                if (VAR_5 != 0)
                        return VAR_5;
        }
}
