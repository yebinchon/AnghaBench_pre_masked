
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int sd_device ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char const**) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,char const**) ;
 int FUNC_7 (int *,char const**) ;
 int FUNC_8 (int *,char const**) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,char const**) ;
 int FUNC_12 (int *,char const**) ;
 int FUNC_13 (int *,char*,char const**) ;
 scalar_t__ FUNC_14 (int *,char const**) ;
 int FUNC_15 (int *,char const**) ;
 scalar_t__ FUNC_16 (int *,char const**) ;
 int FUNC_17 (int *,scalar_t__*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(sd_device *VAR_3) {
        const char *VAR_4, *VAR_5, *VAR_6;
        dev_t VAR_7;
        usec_t VAR_8;
        int VAR_9, VAR_10;

        FUNC_1(FUNC_16(VAR_3, &VAR_4) >= 0);

        VAR_10 = FUNC_12(VAR_3, &VAR_5);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        VAR_10 = FUNC_7(VAR_3, &VAR_6);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        VAR_10 = FUNC_5(VAR_3, &VAR_7);
        FUNC_1((VAR_10 >= 0 && FUNC_3(VAR_7) > 0) || VAR_10 == -VAR_2);

        VAR_10 = FUNC_9(VAR_3, &VAR_9);
        FUNC_1((VAR_10 >= 0 && VAR_9 > 0) || VAR_10 == -VAR_2);

        VAR_10 = FUNC_8(VAR_3, &VAR_6);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        FUNC_1(FUNC_6(VAR_3, &VAR_6) >= 0);

        VAR_10 = FUNC_4(VAR_3, &VAR_6);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        FUNC_1(FUNC_14(VAR_3, &VAR_6) >= 0);

        VAR_10 = FUNC_15(VAR_3, &VAR_6);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        VAR_9 = FUNC_10(VAR_3);
        FUNC_1(VAR_9 >= 0);
        if (VAR_9 > 0) {
                VAR_10 = FUNC_17(VAR_3, &VAR_8);
                FUNC_1((VAR_10 >= 0 && VAR_8 > 0) || VAR_10 == -VAR_1);
        }

        VAR_10 = FUNC_13(VAR_3, "name_assign_type", &VAR_6);
        FUNC_1(VAR_10 >= 0 || FUNC_0(VAR_10, -VAR_2, -VAR_0));

        VAR_10 = FUNC_11(VAR_3, "ID_NET_DRIVER", &VAR_6);
        FUNC_1(VAR_10 >= 0 || VAR_10 == -VAR_2);

        FUNC_2("syspath:%s subsystem:%s initialized:%s", VAR_4, FUNC_18(VAR_5), FUNC_19(VAR_9));
}
