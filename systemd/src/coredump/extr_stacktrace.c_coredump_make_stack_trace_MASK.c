
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char const*,char**) ;

void FUNC_5(int VAR_1, const char *VAR_2, char **VAR_3) {
        int VAR_4;

        VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
        if (VAR_4 == -VAR_0)
                FUNC_2("Failed to generate stack trace: %s", FUNC_0(FUNC_1()));
        else if (VAR_4 < 0)
                FUNC_3(VAR_4, "Failed to generate stack trace: %m");
}
