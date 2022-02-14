
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const**,char*,size_t,int ) ;
 int FUNC_2 (char*,char const*,char const*,size_t,int,int) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const char *VAR_4, size_t VAR_5, int VAR_6, int VAR_7) {
        char VAR_8[VAR_5];
        int VAR_9;
        const char *VAR_10 = VAR_3;

        FUNC_2("%s, %s, %zu, →%d/%d", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

        VAR_9 = FUNC_1(&VAR_10, VAR_8, VAR_5, 0);
        FUNC_0(VAR_9 == VAR_6);
        if (VAR_9 >= 0)
                FUNC_0(FUNC_4(VAR_8, VAR_4));

        VAR_10 = VAR_3;
        VAR_9 = FUNC_1(&VAR_10, VAR_8, VAR_5, VAR_0);
        FUNC_0(VAR_9 == VAR_7);
        if (VAR_9 >= 0)
                FUNC_0(FUNC_4(VAR_8, VAR_4));

        VAR_10 = VAR_3;
        VAR_9 = FUNC_1(&VAR_10, VAR_8, VAR_5, VAR_1);
        const int VAR_11 = FUNC_3(VAR_3, '\\') ? -VAR_2 : VAR_6;
        FUNC_0(VAR_9 == VAR_11);
        if (VAR_9 >= 0)
                FUNC_0(FUNC_4(VAR_8, VAR_4));
}
