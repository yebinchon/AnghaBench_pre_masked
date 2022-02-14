
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
 int VAR_4 ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (int,char*) ;
 char* FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(const char *VAR_5) {
        const char *VAR_6;
        sd_id128_t VAR_7;
        int VAR_8;
        VAR_6 = FUNC_4(VAR_5, "/etc/machine-id");

        VAR_8 = FUNC_2(VAR_6, VAR_3, &VAR_7);
        if (VAR_8 < 0) {
                if (!FUNC_0(VAR_8, -VAR_1, -VAR_2))
                        return FUNC_3(VAR_8, "Failed to read machine ID from container image: %m");

                if (FUNC_5(VAR_4)) {
                        VAR_8 = FUNC_6(&VAR_4);
                        if (VAR_8 < 0)
                                return FUNC_3(VAR_8, "Failed to acquire randomized machine UUID: %m");
                }
        } else {
                if (FUNC_5(VAR_7))
                        return FUNC_3(FUNC_1(VAR_0),
                                               "Machine ID in container image is zero, refusing.");

                VAR_4 = VAR_7;
        }

        return 0;
}
