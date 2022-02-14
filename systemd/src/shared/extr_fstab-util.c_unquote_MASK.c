
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,size_t) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, const char* VAR_1) {
        size_t VAR_2;
        FUNC_0(VAR_0);







        VAR_2 = FUNC_3(VAR_0);
        if (VAR_2 < 2)
                return FUNC_2(VAR_0);

        if (FUNC_1(VAR_1, VAR_0[0]) && VAR_0[VAR_2-1] == VAR_0[0])
                return FUNC_4(VAR_0+1, VAR_2-2);

        return FUNC_2(VAR_0);
}
