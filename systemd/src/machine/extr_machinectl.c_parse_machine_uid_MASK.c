
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, const char **VAR_4, char **VAR_5) {



        char *VAR_6 = ((void*)0);
        const char *VAR_7 = ((void*)0);

        if (VAR_3) {
                const char *VAR_8;

                VAR_8 = FUNC_1(VAR_3, '@');
                if (VAR_8) {
                        if (VAR_8 == VAR_3)

                                return -VAR_0;

                        VAR_7 = VAR_8 + 1;
                        VAR_6 = FUNC_3(VAR_3, VAR_8 - VAR_3);
                        if (!VAR_6)
                                return -VAR_1;
                } else
                        VAR_7 = VAR_3;
        };

        if (VAR_2 && !VAR_6) {
                VAR_6 = FUNC_2(VAR_2);
                if (!VAR_6)
                        return -VAR_1;
        }

        *VAR_5 = VAR_6;
        *VAR_4 = FUNC_0(VAR_7) ? ".host" : VAR_7;
        return 0;
}
