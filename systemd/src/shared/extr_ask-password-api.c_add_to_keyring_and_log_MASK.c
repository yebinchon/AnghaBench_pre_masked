
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AskPasswordFlags ;


 int FUNC_0 (char const*,int ,char**) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, AskPasswordFlags VAR_1, char **VAR_2) {
        int VAR_3;

        FUNC_1(VAR_0);

        VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return FUNC_2(VAR_3, "Failed to add password to keyring: %m");

        return 0;
}
