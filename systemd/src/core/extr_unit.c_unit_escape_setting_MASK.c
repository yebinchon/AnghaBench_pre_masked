
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitWriteFlags ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;

char* FUNC_4(const char *VAR_2, UnitWriteFlags VAR_3, char **VAR_4) {
        char *VAR_5 = ((void*)0);

        if (!VAR_2)
                return ((void*)0);
        if (VAR_3 & VAR_1) {
                VAR_5 = FUNC_2(VAR_2);
                if (!VAR_5)
                        return ((void*)0);

                VAR_2 = VAR_5;
        }

        if (VAR_3 & VAR_0) {
                char *VAR_6;

                VAR_6 = FUNC_0(VAR_2);
                FUNC_1(VAR_5);
                if (!VAR_6)
                        return ((void*)0);

                VAR_5 = VAR_6;
        }

        if (VAR_4) {
                *VAR_4 = VAR_5;
                return VAR_5 ?: (char*) VAR_2;
        }

        return VAR_5 ?: FUNC_3(VAR_2);
}
