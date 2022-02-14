
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 char* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, const char *VAR_4) {
        const char *VAR_5;
        int VAR_6;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_5 = FUNC_1(VAR_1, VAR_4);

        VAR_6 = FUNC_2(VAR_3, VAR_5);
        if (VAR_6 < 0) {
                if (VAR_2 == VAR_0)
                        return 0;

                return -VAR_2;
        }

        return 1;
}
