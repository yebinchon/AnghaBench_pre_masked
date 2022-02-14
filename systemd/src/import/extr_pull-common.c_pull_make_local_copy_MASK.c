
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,int) ;

int FUNC_6(const char *VAR_7, const char *VAR_8, const char *VAR_9, bool VAR_10) {
        const char *VAR_11;
        int VAR_12;

        FUNC_0(VAR_7);
        FUNC_0(VAR_9);

        if (!VAR_8)
                VAR_8 = "/var/lib/machines";

        VAR_11 = FUNC_4(VAR_8, VAR_9);

        if (VAR_10)
                (void) FUNC_5(VAR_11, VAR_5|VAR_4|VAR_6);

        VAR_12 = FUNC_1(VAR_7, VAR_11,
                                  VAR_2|
                                  VAR_0|
                                  VAR_1|
                                  VAR_3);
        if (VAR_12 < 0)
                return FUNC_2(VAR_12, "Failed to create local image: %m");

        FUNC_3("Created new local image '%s'.", VAR_9);

        return 0;
}
