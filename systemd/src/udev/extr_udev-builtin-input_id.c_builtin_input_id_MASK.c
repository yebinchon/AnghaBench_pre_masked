
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int bitmask_rel ;
typedef int bitmask_props ;
typedef int bitmask_key ;
typedef int bitmask_ev ;
typedef int bitmask_abs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,char*,unsigned long*,int,int) ;
 scalar_t__ FUNC_4 (int *,char const**) ;
 scalar_t__ FUNC_5 (int *,char*,int *,int **) ;
 scalar_t__ FUNC_6 (int *,char*,char const**) ;
 scalar_t__ FUNC_7 (int *,char const**) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (int ,unsigned long*) ;
 int FUNC_10 (int *,unsigned long*,unsigned long*,int) ;
 int FUNC_11 (int *,unsigned long*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,int) ;
 int FUNC_12 (int *,int,char*,char*) ;

__attribute__((used)) static int FUNC_13(sd_device *VAR_9, int VAR_10, char *VAR_11[], bool VAR_12) {
        sd_device *VAR_13;
        unsigned long VAR_14[FUNC_0(VAR_1)];
        unsigned long VAR_15[FUNC_0(VAR_0)];
        unsigned long VAR_16[FUNC_0(VAR_5)];
        unsigned long VAR_17[FUNC_0(VAR_7)];
        unsigned long VAR_18[FUNC_0(VAR_4)];
        const char *VAR_19, *VAR_20;
        bool VAR_21;
        bool VAR_22;

        FUNC_1(VAR_9);



        for (VAR_13 = VAR_9; VAR_13; ) {
                const char *VAR_23;

                if (FUNC_6(VAR_13, "capabilities/ev", &VAR_23) >= 0)
                        break;

                if (FUNC_5(VAR_13, "input", ((void*)0), &VAR_13) >= 0)
                        continue;

                VAR_13 = ((void*)0);
                break;
        }

        if (VAR_13) {


                FUNC_12(VAR_9, VAR_12, "ID_INPUT", "1");
                FUNC_3(VAR_13, "capabilities/ev", VAR_14, sizeof(VAR_14), VAR_12);
                FUNC_3(VAR_13, "capabilities/abs", VAR_15, sizeof(VAR_15), VAR_12);
                FUNC_3(VAR_13, "capabilities/rel", VAR_17, sizeof(VAR_17), VAR_12);
                FUNC_3(VAR_13, "capabilities/key", VAR_16, sizeof(VAR_16), VAR_12);
                FUNC_3(VAR_13, "properties", VAR_18, sizeof(VAR_18), VAR_12);
                VAR_21 = FUNC_11(VAR_9, VAR_14, VAR_15,
                                           VAR_16, VAR_17,
                                           VAR_18, VAR_12);
                VAR_22 = FUNC_10(VAR_9, VAR_14, VAR_16, VAR_12);

                if (!VAR_21 && !VAR_22 && FUNC_9(VAR_2, VAR_14) &&
                    (FUNC_9(VAR_8, VAR_17) || FUNC_9(VAR_6, VAR_17)))
                        FUNC_12(VAR_9, VAR_12, "ID_INPUT_KEY", "1");
                if (FUNC_9(VAR_3, VAR_14))
                        FUNC_12(VAR_9, VAR_12, "ID_INPUT_SWITCH", "1");

        }

        if (FUNC_4(VAR_9, &VAR_20) >= 0 &&
            FUNC_7(VAR_9, &VAR_19) >= 0 &&
            FUNC_8(VAR_19, "event"))
                FUNC_2(VAR_9, VAR_20, VAR_12);

        return 0;
}
