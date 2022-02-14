
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,unsigned int) ;
 char* FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(sd_device * const *VAR_0, sd_device * const *VAR_1) {
        sd_device *VAR_2 = *(sd_device **)VAR_0, *VAR_3 = *(sd_device **)VAR_1;
        const char *VAR_4, *VAR_5, *VAR_6;
        bool VAR_7, VAR_8;
        int VAR_9;

        FUNC_2(FUNC_3(VAR_2, &VAR_4) >= 0);
        FUNC_2(FUNC_3(VAR_3, &VAR_5) >= 0);

        VAR_6 = FUNC_8(VAR_4, "/sound/card");
        if (VAR_6) {







                VAR_6 += FUNC_1("/sound/card");
                VAR_6 = FUNC_5(VAR_6, '/');

                if (VAR_6) {
                        unsigned VAR_10;

                        VAR_10 = VAR_6 - VAR_4;

                        if (FUNC_7(VAR_4, VAR_5, VAR_10) == 0) {
                                const char *VAR_11;

                                VAR_11 = VAR_5 + VAR_10;

                                if (FUNC_4(VAR_6, "/controlC") &&
                                    !FUNC_4(VAR_11, "/contolC"))
                                        return 1;

                                if (!FUNC_4(VAR_6, "/controlC") &&
                                    FUNC_4(VAR_11, "/controlC"))
                                        return -1;
                        }
                }
        }


        VAR_7 = FUNC_8(VAR_4, "/block/md") || FUNC_8(VAR_4, "/block/dm-");
        VAR_8 = FUNC_8(VAR_5, "/block/md") || FUNC_8(VAR_5, "/block/dm-");
        VAR_9 = FUNC_0(VAR_7, VAR_8);
        if (VAR_9 != 0)
                return VAR_9;

        return FUNC_6(VAR_4, VAR_5);
}
