
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const**,char*,size_t) ;
 int FUNC_2 (char*,char const*,char const*,char const*,size_t,int,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4, int VAR_5) {
        char VAR_6[VAR_3];
        const char *VAR_7;
        int VAR_8;

        FUNC_2("%s, %s, %s, %zu, %d, %d", VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

        VAR_7 = VAR_0 + FUNC_4(VAR_0);

        VAR_8 = FUNC_1(VAR_0, &VAR_7, VAR_6, VAR_3);
        FUNC_0(VAR_8 == VAR_4);
        if (VAR_8 >= 0)
                FUNC_0(FUNC_3(VAR_6, VAR_1));

        VAR_8 = FUNC_1(VAR_0, &VAR_7, VAR_6, VAR_3);
        FUNC_0(VAR_8 == VAR_5);
        if (VAR_8 >= 0)
                FUNC_0(FUNC_3(VAR_6, VAR_2));
}
