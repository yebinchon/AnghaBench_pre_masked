
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Set ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*) ;
 char* FUNC_2 (char const*,size_t) ;

__attribute__((used)) static int FUNC_3(Set *VAR_0, const char *VAR_1, size_t VAR_2) {
        char *VAR_3 = ((void*)0);

        if (!VAR_0)
                return 1;

        VAR_3 = FUNC_2(VAR_1, VAR_2);
        if (!VAR_3)
                return FUNC_0();

        return FUNC_1(VAR_0, VAR_3) ? 1 : 0;
}
