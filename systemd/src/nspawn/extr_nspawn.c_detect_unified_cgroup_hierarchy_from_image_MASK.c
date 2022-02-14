
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5) {
        int VAR_6;



        VAR_6 = FUNC_0();
        if (VAR_6 < 0)
                return FUNC_3(VAR_6, "Failed to determine whether we are in all unified mode.");
        if (VAR_6 > 0) {


                VAR_6 = FUNC_4(VAR_5, 230);
                if (VAR_6 < 0)
                        return FUNC_3(VAR_6, "Failed to determine systemd version in container: %m");
                if (VAR_6 > 0)
                        VAR_4 = VAR_0;
                else
                        VAR_4 = VAR_1;
        } else if (FUNC_1(VAR_3) > 0) {

                VAR_6 = FUNC_4(VAR_5, 233);
                if (VAR_6 < 0)
                        return FUNC_3(VAR_6, "Failed to determine systemd version in container: %m");
                if (VAR_6 > 0)
                        VAR_4 = VAR_2;
                else
                        VAR_4 = VAR_1;
        } else
                VAR_4 = VAR_1;

        FUNC_2("Using %s hierarchy for container.",
                  VAR_4 == VAR_1 ? "legacy" :
                  VAR_4 == VAR_2 ? "hybrid" : "unified");

        return 0;
}
