
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char* const,char* const) ;
 scalar_t__ FUNC_1 (char* const) ;

__attribute__((used)) static int FUNC_2(char * const *VAR_1, char * const *VAR_2) {
        if (FUNC_1(*VAR_1) == VAR_0 && FUNC_1(*VAR_2) != VAR_0)
                return 1;
        if (FUNC_1(*VAR_1) != VAR_0 && FUNC_1(*VAR_2) == VAR_0)
                return -1;

        return FUNC_0(*VAR_1, *VAR_2);
}
