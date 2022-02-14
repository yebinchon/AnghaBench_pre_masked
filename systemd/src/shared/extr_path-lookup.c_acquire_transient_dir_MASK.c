
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UnitFileScope ;


 int VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char**,char*) ;

__attribute__((used)) static int FUNC_5(
                UnitFileScope VAR_5,
                const char *VAR_6,
                char **VAR_7) {

        char *VAR_8;

        FUNC_1(VAR_7);
        FUNC_1(FUNC_0(VAR_5, VAR_3, VAR_4, VAR_2));

        if (VAR_5 == VAR_2)
                return -VAR_1;

        if (VAR_6)
                VAR_8 = FUNC_2(VAR_6, "transient");
        else if (VAR_5 == VAR_3)
                VAR_8 = FUNC_3("/run/systemd/transient");
        else
                return FUNC_4(VAR_7, "/systemd/transient");

        if (!VAR_8)
                return -VAR_0;
        *VAR_7 = VAR_8;
        return 0;
}
