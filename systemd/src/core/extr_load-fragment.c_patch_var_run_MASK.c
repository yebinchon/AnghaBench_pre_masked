
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int ,char*,char const*,char*,char*) ;
 char* FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                char **VAR_5) {

        const char *VAR_6;
        char *VAR_7;

        VAR_6 = FUNC_4(*VAR_5, "/var/run/");
        if (!VAR_6)
                return 0;

        VAR_7 = FUNC_3("/run/", VAR_6);
        if (!VAR_7)
                return FUNC_1();

        FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, 0,
                   "%s= references a path below legacy directory /var/run/, updating %s → %s; "
                   "please update the unit file accordingly.", VAR_4, *VAR_5, VAR_7);

        FUNC_0(*VAR_5, VAR_7);

        return 1;
}
