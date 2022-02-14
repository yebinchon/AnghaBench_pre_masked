
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int,char**) ;
 char* FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_6, char *VAR_7[]) {
        char VAR_8[VAR_2];
        sd_id128_t VAR_9;
        int VAR_10;

        FUNC_3();
        FUNC_2();

        VAR_10 = FUNC_6(VAR_6, VAR_7);
        if (VAR_10 <= 0)
                return VAR_10;

        if (VAR_3) {
                const char *VAR_11;

                VAR_10 = FUNC_4(VAR_5);
                if (VAR_10 < 0)
                        return VAR_10;

                VAR_11 = FUNC_7(VAR_5, "/etc/machine-id");
                VAR_10 = FUNC_0(VAR_11, VAR_0, &VAR_9);
                if (VAR_10 < 0)
                        return FUNC_1(VAR_10, "Failed to read machine ID back: %m");
        } else {
                VAR_10 = FUNC_5(VAR_5, VAR_1, &VAR_9);
                if (VAR_10 < 0)
                        return VAR_10;
        }

        if (VAR_4)
                FUNC_8(FUNC_9(VAR_9, VAR_8));

        return 0;
}
