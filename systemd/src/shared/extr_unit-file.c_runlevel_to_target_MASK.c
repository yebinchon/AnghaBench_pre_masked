
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 char** VAR_0 ;
 char** VAR_1 ;
 char* FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char const* const) ;

const char* FUNC_3(const char *VAR_2) {
        const char * const *VAR_3;
        size_t VAR_4;

        if (!VAR_2)
                return ((void*)0);

        if (FUNC_0()) {
                VAR_2 = FUNC_1(VAR_2, "rd.");
                if (!VAR_2)
                        return ((void*)0);
        }

        VAR_3 = FUNC_0() ? VAR_1 : VAR_0;

        for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4 += 2)
                if (FUNC_2(VAR_2, VAR_3[VAR_4]))
                        return VAR_3[VAR_4+1];

        return ((void*)0);
}
