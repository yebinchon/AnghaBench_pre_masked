
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
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
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_6(int VAR_11) {
        unsigned long VAR_12[FUNC_0(VAR_0, VAR_1)/VAR_9+1];

        FUNC_3(VAR_11 >= 0);

        if (FUNC_5(VAR_11, FUNC_2(VAR_2, sizeof VAR_12), VAR_12) < 0)
                return -VAR_10;

        if (FUNC_4(VAR_12, VAR_0)) {
                unsigned long VAR_13[FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6)/VAR_9+1];

                if (FUNC_5(VAR_11, FUNC_2(VAR_0, sizeof VAR_13), VAR_13) < 0)
                        return -VAR_10;

                if (FUNC_4(VAR_13, VAR_3) ||
                    FUNC_4(VAR_13, VAR_4) ||
                    FUNC_4(VAR_13, VAR_5) ||
                    FUNC_4(VAR_13, VAR_6))
                        return 1;
        }

        if (FUNC_4(VAR_12, VAR_1)) {
                unsigned long VAR_14[FUNC_0(VAR_8, VAR_7)/VAR_9+1];

                if (FUNC_5(VAR_11, FUNC_2(VAR_1, sizeof VAR_14), VAR_14) < 0)
                        return -VAR_10;

                if (FUNC_4(VAR_14, VAR_8) ||
                    FUNC_4(VAR_14, VAR_7))
                        return 1;
        }

        return 0;
}
