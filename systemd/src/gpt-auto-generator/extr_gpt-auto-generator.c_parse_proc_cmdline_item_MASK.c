
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, const char *VAR_4, void *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_3);

        if (FUNC_3(VAR_3, "systemd.gpt_auto") ||
            FUNC_3(VAR_3, "rd.systemd.gpt_auto")) {

                VAR_6 = VAR_4 ? FUNC_2(VAR_4) : 1;
                if (VAR_6 < 0)
                        FUNC_1(VAR_6, "Failed to parse gpt-auto switch \"%s\", ignoring: %m", VAR_4);
                else
                        VAR_0 = VAR_6;

        } else if (FUNC_3(VAR_3, "root")) {

                if (FUNC_4(VAR_3, VAR_4))
                        return 0;




                VAR_1 = FUNC_5(VAR_4, "gpt-auto");

        } else if (FUNC_3(VAR_3, "roothash")) {

                if (FUNC_4(VAR_3, VAR_4))
                        return 0;



                VAR_1 = 0;

        } else if (FUNC_3(VAR_3, "rw") && !VAR_4)
                VAR_2 = 1;
        else if (FUNC_3(VAR_3, "ro") && !VAR_4)
                VAR_2 = 0;

        return 0;
}
