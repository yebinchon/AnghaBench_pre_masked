
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char const*,int,int,int *) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int *) ;

__attribute__((used)) static int FUNC_6(
                const char *VAR_1,
                bool VAR_2,
                bool VAR_3,
                sd_id128_t *VAR_4) {

        bool VAR_5;
        dev_t VAR_6;
        int VAR_7;

        FUNC_0(VAR_1);

        VAR_5 = FUNC_2("SYSTEMD_RELAX_XBOOTLDR_CHECKS") > 0;

        VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (FUNC_1() > 0 || VAR_5)
                goto finish;

        if (VAR_3)
                return FUNC_5(VAR_6, VAR_2, VAR_4);
        else
                return FUNC_4(VAR_6, VAR_2, VAR_4);

finish:
        if (VAR_4)
                *VAR_4 = VAR_0;

        return 0;
}
