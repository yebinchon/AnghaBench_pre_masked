
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char**,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(void) {
        const char *VAR_1[] = {
                "FOO=NO NO NO",
                "FOO=BAR BAR",
                "BAR=waldo",
                "PATH=unset",
                ((void*)0)
        };
        char **VAR_2 = (char**) VAR_1;

        FUNC_0(FUNC_2(FUNC_4(VAR_2, "FOO__", 3, 0), "BAR BAR"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "FOO__", 3, VAR_0), "BAR BAR"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "FOO", 3, 0), "BAR BAR"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "FOO", 3, VAR_0), "BAR BAR"));

        FUNC_0(FUNC_2(FUNC_4(VAR_2, "PATH__", 4, 0), "unset"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "PATH", 4, 0), "unset"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "PATH__", 4, VAR_0), "unset"));
        FUNC_0(FUNC_2(FUNC_4(VAR_2, "PATH", 4, VAR_0), "unset"));

        VAR_2[3] = ((void*)0);

        FUNC_0(!FUNC_4(VAR_2, "PATH__", 4, 0));
        FUNC_0(!FUNC_4(VAR_2, "PATH", 4, 0));
        FUNC_0(FUNC_3(FUNC_4(VAR_2, "PATH__", 4, VAR_0),
                            FUNC_1("PATH")));
        FUNC_0(FUNC_3(FUNC_4(VAR_2, "PATH", 4, VAR_0),
                            FUNC_1("PATH")));
}
