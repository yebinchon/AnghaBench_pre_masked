
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (size_t,scalar_t__ const*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(
                uid_t VAR_4,
                gid_t VAR_5,
                const gid_t *VAR_6,
                size_t VAR_7) {

        if (!FUNC_6(VAR_4))
                VAR_4 = 0;
        if (!FUNC_1(VAR_5))
                VAR_5 = 0;

        (void) FUNC_0(VAR_1, VAR_4, VAR_5);
        (void) FUNC_0(VAR_2, VAR_4, VAR_5);
        (void) FUNC_0(VAR_0, VAR_4, VAR_5);

        if (FUNC_3(VAR_7, VAR_6) < 0)
                return FUNC_2(VAR_3, "Failed to set auxiliary groups: %m");

        if (FUNC_4(VAR_5, VAR_5, VAR_5) < 0)
                return FUNC_2(VAR_3, "setresgid() failed: %m");

        if (FUNC_5(VAR_4, VAR_4, VAR_4) < 0)
                return FUNC_2(VAR_3, "setresuid() failed: %m");

        return 0;
}
