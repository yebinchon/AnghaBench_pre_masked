
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char**,char const*) ;

__attribute__((used)) static char *FUNC_2(char **VAR_0) {
        static const char *VAR_1 = "\"\n";
        static const char *VAR_2 = ",\n";
        char *VAR_3;
        const char *VAR_4;

        if (**VAR_0 == '"') {



                (*VAR_0)++;
                VAR_4 = VAR_1;
        } else {
                VAR_4 = VAR_2;
        }
        VAR_3 = FUNC_1(VAR_0, VAR_4);
        if (VAR_3 && VAR_4 == VAR_1)



                (*VAR_0)++;

        while (FUNC_0(**VAR_0))
                (*VAR_0)++;

        return VAR_3;
}
