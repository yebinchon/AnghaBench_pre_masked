
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int s ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,char const**) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,char*,char const**) ;
 scalar_t__ FUNC_5 (int *,char const**) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*,char const*,int) ;

__attribute__((used)) static int FUNC_8(sd_device *VAR_0, sd_device *VAR_1,
                                    const char *VAR_2, const char *VAR_3,
                                    const char *VAR_4, bool VAR_5) {
        sd_device *VAR_6;
        char VAR_7[16];
        bool VAR_8 = 0;
        int VAR_9 = 0;

        FUNC_0(VAR_0);

        if (!VAR_1)
                VAR_1 = VAR_0;

        for (VAR_6 = VAR_1; VAR_6; ) {
                const char *VAR_10, *VAR_11, *VAR_12 = ((void*)0);

                if (FUNC_5(VAR_6, &VAR_10) < 0)
                        goto next;


                if (VAR_2 && !FUNC_6(VAR_10, VAR_2))
                        goto next;

                (void) FUNC_4(VAR_6, "MODALIAS", &VAR_12);

                if (FUNC_6(VAR_10, "usb") &&
                    FUNC_2(VAR_6, &VAR_11) >= 0 &&
                    FUNC_6(VAR_11, "usb_device")) {

                        if (!VAR_12)
                                VAR_12 = FUNC_1(VAR_6, VAR_7, sizeof(VAR_7));


                        VAR_8 = 1;
                }

                if (!VAR_12)
                        goto next;

                VAR_9 = FUNC_7(VAR_0, VAR_3, VAR_12, VAR_4, VAR_5);
                if (VAR_9 > 0)
                        break;

                if (VAR_8)
                        break;
next:
                if (FUNC_3(VAR_6, &VAR_6) < 0)
                        break;
        }

        return VAR_9;
}
