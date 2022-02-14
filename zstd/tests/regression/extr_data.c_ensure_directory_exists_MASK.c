
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char* const) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char* const) ;
 int FUNC_3 (char* const,int ) ;
 int VAR_4 ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(char const* VAR_5) {
    char* const VAR_6 = FUNC_4(VAR_5);
    char* VAR_7 = VAR_6;
    int VAR_8 = 0;
    if (VAR_6 == ((void*)0)) {
        VAR_8 = VAR_1;
        goto out;
    }
    do {

        for (++VAR_7; *VAR_7 != '\0' && *VAR_7 != '/'; ++VAR_7)
            ;

        char const VAR_9 = *VAR_7;
        *VAR_7 = '\0';
        int const VAR_10 = FUNC_0(VAR_6);
        VAR_8 = FUNC_3(VAR_6, VAR_2);
        *VAR_7 = VAR_9;

        if (VAR_8 == 0 || (VAR_3 == VAR_0 && VAR_10))
            continue;
        VAR_8 = VAR_3;
        FUNC_1(VAR_4, "mkdir() failed\n");
        goto out;
    } while (*VAR_7 != '\0');

    VAR_8 = 0;
out:
    FUNC_2(VAR_6);
    return VAR_8;
}
