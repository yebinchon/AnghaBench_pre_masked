
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*,int,int,int *) ;

int FUNC_9(
                const char *VAR_4,
                bool VAR_5,
                char **VAR_6,
                sd_id128_t *VAR_7) {

        int VAR_8;



        if (VAR_4) {
                VAR_8 = FUNC_8(VAR_4, 0, VAR_5, VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;

                goto found;
        }

        VAR_4 = FUNC_2("SYSTEMD_XBOOTLDR_PATH");
        if (VAR_4) {
                if (!FUNC_6(VAR_4) || !FUNC_5(VAR_4))
                        return FUNC_3(FUNC_1(VAR_1),
                                               "$SYSTEMD_XBOOTLDR_PATH does not refer to absolute path, refusing to use it: %s",
                                               VAR_4);

                goto found;
        }

        VAR_8 = FUNC_8("/boot", 1, VAR_5, VAR_7);
        if (VAR_8 >= 0) {
                VAR_4 = "/boot";
                goto found;
        }
        if (!FUNC_0(VAR_8, -VAR_2, -VAR_0))
                return VAR_8;

        return -VAR_3;

found:
        if (VAR_6) {
                char *VAR_9;

                VAR_9 = FUNC_7(VAR_4);
                if (!VAR_9)
                        return FUNC_4();

                *VAR_6 = VAR_9;
        }

        return 0;
}
