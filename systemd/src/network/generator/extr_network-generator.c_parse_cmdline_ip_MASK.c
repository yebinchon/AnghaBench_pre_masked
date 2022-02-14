
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int ,char const*) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(Context *VAR_3, const char *VAR_4, const char *VAR_5) {
        const char *VAR_6;
        int VAR_7;

        if (FUNC_3(VAR_4, VAR_5))
                return -VAR_2;

        VAR_6 = FUNC_4(VAR_5, ':');
        if (!VAR_6)

                return FUNC_0(VAR_3, "", VAR_5);

        if (VAR_5[0] == '[')
                return FUNC_1(VAR_3, VAR_1, VAR_5);

        VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_5);
        if (VAR_7 < 0)
                return FUNC_2(VAR_3, VAR_5);

        return 0;
}
