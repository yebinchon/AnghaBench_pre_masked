
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,size_t) ;
 char* FUNC_1 (void const*,size_t,char const*) ;
 scalar_t__ FUNC_2 (int ,char const) ;
 char* FUNC_3 (char const*,size_t) ;

int FUNC_4(const void *VAR_2, size_t VAR_3, const char *VAR_4, char **VAR_5) {
        const char *VAR_6;
        char *VAR_7;

        VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
        if (!VAR_6)
                return 0;

        VAR_3 -= VAR_6 - (const char*) VAR_2;

        if (FUNC_0(VAR_6, 0, VAR_3))
                return 0;


        while (VAR_3 > 0 && FUNC_2(VAR_1, VAR_6[0])) {
                VAR_6++;
                VAR_3--;
        }


        while (VAR_3 > 0 && FUNC_2(VAR_1, VAR_6[VAR_3-1]))
                VAR_3--;

        VAR_7 = FUNC_3(VAR_6, VAR_3);
        if (!VAR_7)
                return -VAR_0;

        *VAR_5 = VAR_7;
        return 1;
}
