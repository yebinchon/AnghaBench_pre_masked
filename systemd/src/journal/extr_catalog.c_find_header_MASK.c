
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_2, const char *VAR_3) {

        for (;;) {
                const char *VAR_4;

                VAR_4 = FUNC_1(VAR_2, VAR_3);
                if (VAR_4) {
                        VAR_4 += FUNC_4(VAR_4, VAR_1);
                        return FUNC_3(VAR_4, FUNC_2(VAR_4, VAR_0));
                }

                if (!FUNC_0(&VAR_2))
                        return ((void*)0);
        }
}
