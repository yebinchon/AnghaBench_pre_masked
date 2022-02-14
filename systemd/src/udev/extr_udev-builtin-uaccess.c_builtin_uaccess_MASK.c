
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,int,int,int ,int,int ) ;
 int FUNC_2 (int *,int,char*,...) ;
 int FUNC_3 (int *,int ,int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char const**) ;
 scalar_t__ FUNC_6 (int *,char*,char const**) ;
 int FUNC_7 (char const*,int *,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(sd_device *VAR_5, int VAR_6, char *VAR_7[], bool VAR_8) {
        const char *VAR_9 = ((void*)0), *VAR_10;
        bool VAR_11 = 0;
        uid_t VAR_12;
        int VAR_13;

        FUNC_8(0022);


        if (!FUNC_4())
                return 0;

        VAR_13 = FUNC_5(VAR_5, &VAR_9);
        if (VAR_13 < 0) {
                FUNC_2(VAR_5, VAR_13, "Failed to get device name: %m");
                goto finish;
        }

        if (FUNC_6(VAR_5, "ID_SEAT", &VAR_10) < 0)
                VAR_10 = "seat0";

        VAR_13 = FUNC_7(VAR_10, ((void*)0), &VAR_12);
        if (VAR_13 < 0) {
                if (FUNC_0(VAR_13, -VAR_2, -VAR_0))

                        VAR_13 = 0;
                else
                        FUNC_2(VAR_5, VAR_13, "Failed to determine active user on seat %s: %m", VAR_10);

                goto finish;
        }

        VAR_13 = FUNC_1(VAR_9, 1, 0, 0, 1, VAR_12);
        if (VAR_13 < 0) {
                FUNC_3(VAR_5, VAR_13 == -VAR_1 ? VAR_3 : VAR_4, VAR_13, "Failed to apply ACL: %m");
                goto finish;
        }

        VAR_11 = 1;
        VAR_13 = 0;

finish:
        if (VAR_9 && !VAR_11) {
                int VAR_14;


                VAR_14 = FUNC_1(VAR_9, 1, 0, 0, 0, 0);
                if (VAR_14 < 0) {
                        FUNC_3(VAR_5, VAR_14 == -VAR_1 ? VAR_3 : VAR_4, VAR_14, "Failed to apply ACL: %m");
                        if (VAR_13 >= 0)
                                VAR_13 = VAR_14;
                }
        }

        return VAR_13;
}
