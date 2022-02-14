
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int,unsigned long const*) ;
 int FUNC_1 (int *,int,char*,char*) ;

__attribute__((used)) static bool FUNC_2(sd_device *VAR_26,
                          const unsigned long* VAR_27,
                          const unsigned long* VAR_28,
                          const unsigned long* VAR_29,
                          const unsigned long* VAR_30,
                          const unsigned long* VAR_31,
                          bool VAR_32) {
        int VAR_33, VAR_34;
        bool VAR_35 = 0;
        bool VAR_36 = 0;
        bool VAR_37 = 0;
        bool VAR_38 = 0;
        bool VAR_39 = 0;
        bool VAR_40 = 0;
        bool VAR_41 = 0;
        bool VAR_42 = 0;
        bool VAR_43 = 0;
        bool VAR_44 = 0;
        bool VAR_45 = 0;
        bool VAR_46 = 0;
        bool VAR_47 = 0;
        bool VAR_48 = 0;
        bool VAR_49 = 0;
        bool VAR_50 = 0;
        bool VAR_51 = 0;
        bool VAR_52= 0;

        VAR_42 = FUNC_0(VAR_19, VAR_27);
        VAR_35 = FUNC_0(VAR_5, VAR_28) && FUNC_0(VAR_6, VAR_28);
        VAR_41 = VAR_35 && FUNC_0(VAR_7, VAR_28);
        VAR_51 = FUNC_0(VAR_21, VAR_31);

        if (!VAR_42 && VAR_41)
                VAR_51 = 1;

        if (VAR_51) {
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_ACCELEROMETER", "1");
                return 1;
        }

        VAR_52 = FUNC_0(VAR_23, VAR_31);
        VAR_43 = FUNC_0(VAR_13, VAR_29) || FUNC_0(VAR_15, VAR_29);
        VAR_44 = FUNC_0(VAR_14, VAR_29) && !FUNC_0(VAR_15, VAR_29);
        for (VAR_33 = VAR_12; VAR_33 < VAR_11 && !VAR_45; VAR_33++)
                VAR_45 = FUNC_0(VAR_33, VAR_29);
        VAR_36 = FUNC_0(VAR_20, VAR_27) && FUNC_0(VAR_24, VAR_30) && FUNC_0(VAR_25, VAR_30);
        VAR_37 = FUNC_0(VAR_0, VAR_28) && FUNC_0(VAR_1, VAR_28);


        if (VAR_37 && FUNC_0(VAR_2, VAR_28) && FUNC_0(VAR_2 - 1, VAR_28))
                VAR_37 = 0;
        VAR_39 = FUNC_0(VAR_22, VAR_31);
        VAR_40 = FUNC_0(VAR_16, VAR_29);
        if (!FUNC_0(VAR_11 - 1, VAR_29)) {
                for (VAR_33 = VAR_11; VAR_33 < VAR_8 && !VAR_38; VAR_33++)
                        VAR_38 = FUNC_0(VAR_33, VAR_29);
                for (VAR_33 = VAR_17; VAR_33 <= VAR_18 && !VAR_38; VAR_33++)
                        VAR_38 = FUNC_0(VAR_33, VAR_29);
                for (VAR_33 = VAR_10; VAR_33 <= VAR_9 && !VAR_38; VAR_33++)
                        VAR_38 = FUNC_0(VAR_33, VAR_29);
        }
        for (VAR_34 = VAR_4; VAR_34 < VAR_3 && !VAR_38; VAR_34++)
                VAR_38 = FUNC_0(VAR_34, VAR_28);

        if (VAR_35) {
                if (VAR_43)
                        VAR_49 = 1;
                else if (VAR_44 && !VAR_39)
                        VAR_47 = 1;
                else if (VAR_45)


                        VAR_46 = 1;
                else if (VAR_40 || VAR_39)
                        VAR_48 = 1;
                else if (VAR_38)
                        VAR_50 = 1;
        } else if (VAR_38) {
                VAR_50 = 1;
        }

        if (VAR_37) {
                if (VAR_43)
                        VAR_49 = 1;
                else if (VAR_44 && !VAR_39)
                        VAR_47 = 1;
                else if (VAR_40 || VAR_39)
                        VAR_48 = 1;
        }

        if (!VAR_49 && !VAR_47 && !VAR_50 &&
            VAR_45 &&
            (VAR_36 ||
            !VAR_35))
                VAR_46 = 1;

        if (VAR_52)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_POINTINGSTICK", "1");
        if (VAR_46)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_MOUSE", "1");
        if (VAR_47)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_TOUCHPAD", "1");
        if (VAR_48)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_TOUCHSCREEN", "1");
        if (VAR_50)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_JOYSTICK", "1");
        if (VAR_49)
                FUNC_1(VAR_26, VAR_32, "ID_INPUT_TABLET", "1");

        return VAR_49 || VAR_46 || VAR_47 || VAR_48 || VAR_50 || VAR_52;
}
