
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,int ) ;
 char* FUNC_2 (char const*,int) ;

int FUNC_3(const char *VAR_2, char **VAR_3) {
        const char *VAR_4;
        char *VAR_5;

        VAR_4 = FUNC_0(VAR_2, ".tar");
        if (!VAR_4)
                VAR_4 = FUNC_0(VAR_2, ".tar.xz");
        if (!VAR_4)
                VAR_4 = FUNC_0(VAR_2, ".tar.gz");
        if (!VAR_4)
                VAR_4 = FUNC_0(VAR_2, ".tar.bz2");
        if (!VAR_4)
                VAR_4 = FUNC_0(VAR_2, ".tgz");
        if (!VAR_4)
                VAR_4 = FUNC_1(VAR_2, 0);

        if (VAR_4 <= VAR_2)
                return -VAR_0;

        VAR_5 = FUNC_2(VAR_2, VAR_4 - VAR_2);
        if (!VAR_5)
                return -VAR_1;

        *VAR_3 = VAR_5;
        return 0;
}
