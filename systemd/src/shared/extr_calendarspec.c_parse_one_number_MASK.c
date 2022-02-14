
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, const char **VAR_3, unsigned long *VAR_4) {
        char *VAR_5 = ((void*)0);
        unsigned long VAR_6;

        VAR_1 = 0;
        VAR_6 = FUNC_0(VAR_2, &VAR_5, 10);
        if (VAR_1 > 0)
                return -VAR_1;
        if (VAR_5 == VAR_2)
                return -VAR_0;

        *VAR_4 = VAR_6;
        *VAR_3 = VAR_5;
        return 0;
}
