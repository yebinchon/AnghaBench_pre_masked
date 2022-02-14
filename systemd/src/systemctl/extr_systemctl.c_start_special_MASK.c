
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum action { ____Placeholder_action } action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int,int,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char**,void*) ;
 int FUNC_15 (int,char**,void*) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(int VAR_15, char *VAR_16[], void *VAR_17) {
        enum action VAR_18;
        int VAR_19;
        bool VAR_20;


        FUNC_1(VAR_16);

        VAR_18 = FUNC_17(VAR_16[0]);

        VAR_19 = FUNC_6(VAR_18);
        if (VAR_19 < 0)
                return VAR_19;

        if (VAR_13 >= 2) {
                VAR_19 = FUNC_8();
                if (VAR_19 < 0)
                        return VAR_19;
        }

        VAR_19 = FUNC_11();
        if (VAR_19 < 0)
                return VAR_19;

        VAR_19 = FUNC_10();
        if (VAR_19 < 0)
                return VAR_19;

        VAR_19 = FUNC_9();
        if (VAR_19 < 0)
                return VAR_19;

        if (VAR_18 == VAR_6 && VAR_15 > 1) {
                VAR_19 = FUNC_16(VAR_16[1], 0);
                if (VAR_19 < 0)
                        return VAR_19;

        } else if (VAR_18 == VAR_4) {
                VAR_19 = FUNC_3();
                if (VAR_19 < 0 && VAR_13 >= 1)
                        FUNC_5("Failed to load kexec kernel, continuing without.");
                else if (VAR_19 < 0)
                        return VAR_19;

        } else if (VAR_18 == VAR_0 && VAR_15 > 1) {
                uint8_t VAR_21;





                VAR_19 = FUNC_12(VAR_16[1], &VAR_21);
                if (VAR_19 < 0)
                        return FUNC_4(VAR_19, "Invalid exit code.");

                VAR_19 = FUNC_13(VAR_21);
                if (VAR_19 < 0)
                        return VAR_19;
        }

        VAR_20 = FUNC_0(VAR_18,
                                    VAR_1,
                                    VAR_5,
                                    VAR_6);
        if (VAR_20 && VAR_13 >= 2)
                return FUNC_2(VAR_18);

        if (VAR_13 >= 1 &&
            (VAR_20 || FUNC_0(VAR_18, VAR_4, VAR_0)))
                VAR_19 = FUNC_15(VAR_15, VAR_16, VAR_17);
        else {

                if (FUNC_0(VAR_18,
                           VAR_5,
                           VAR_6,
                           VAR_1,
                           VAR_7,
                           VAR_2,
                           VAR_3,
                           VAR_8)) {

                        VAR_19 = FUNC_7(VAR_18);
                        if (VAR_19 >= 0)
                                return VAR_19;
                        if (FUNC_0(VAR_19, -VAR_11, -VAR_9))

                                return VAR_19;





                        VAR_14 = 1;

                } else if (FUNC_0(VAR_18, VAR_0, VAR_4))


                        VAR_14 = 1;

                VAR_19 = FUNC_14(VAR_15, VAR_16, VAR_17);
        }

        if (VAR_20 && VAR_13 < 2 &&
            FUNC_0(VAR_19, -VAR_10, -VAR_12))
                FUNC_5("It is possible to perform action directly, see discussion of --force --force in man:systemctl(1).");

        return VAR_19;
}
