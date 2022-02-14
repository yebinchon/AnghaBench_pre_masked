
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char*,char*,char*,char*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char**) ;

__attribute__((used)) static int FUNC_3(const char* VAR_0) {
        char **VAR_1 = FUNC_0("curl",
                                "-HAccept: application/vnd.fdo.journal",
                                "--silent",
                                "--show-error",
                                VAR_0);
        int VAR_2;

        VAR_2 = FUNC_2("curl", VAR_1);
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed to spawn curl: %m");
        return VAR_2;
}
