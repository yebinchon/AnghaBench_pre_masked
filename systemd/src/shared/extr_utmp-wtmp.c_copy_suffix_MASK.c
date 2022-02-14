
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2) {
        size_t VAR_3;

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < VAR_1)
                FUNC_2(VAR_0, VAR_2, VAR_1);
        else
                FUNC_0(VAR_0, VAR_2 + VAR_3 - VAR_1, VAR_1);
}
