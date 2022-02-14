
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int names_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,size_t*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_3, const char **VAR_4, names_flags *VAR_5) {
        int VAR_6;

        if ((*VAR_5 & VAR_0 || *VAR_5 & VAR_2) && **VAR_4 != '\0')
                *VAR_5 |= VAR_1;

        for (;*VAR_5 & VAR_1;) {
                size_t VAR_7;

                if (!*VAR_3)
                        break;

                VAR_6 = FUNC_1(VAR_3, &VAR_7);
                if (VAR_6 < 0)
                        return 0;

                if (**VAR_4 != '\0') {
                        if (!FUNC_0(*VAR_4))
                                return 0;
                        *VAR_4 += FUNC_2(*VAR_4) + 1;
                } else if (*VAR_5 & VAR_1)
                        return 0;

                VAR_3 += VAR_7;
        }

        if (*VAR_5 & VAR_1 && **VAR_4 != '\0' && !(*VAR_5 & VAR_0))
                return 0;
        *VAR_5 &= ~VAR_0;
        return 1;
}
