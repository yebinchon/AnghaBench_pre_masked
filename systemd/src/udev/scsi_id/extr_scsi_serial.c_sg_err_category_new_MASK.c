
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,int ,...) ;
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

__attribute__((used)) static int FUNC_1(int VAR_18, int VAR_19, int
                               VAR_20, int VAR_21, const
                               unsigned char *VAR_22, int VAR_23) {
        VAR_18 &= 0x7e;





        if (!VAR_18 && !VAR_20 && !VAR_21)
                return VAR_9;

        if (FUNC_0(VAR_18, VAR_7, VAR_8) ||
            (VAR_21 & 0xf) == VAR_3) {
                if (VAR_22 && (VAR_23 > 2)) {
                        int VAR_24;
                        unsigned char VAR_25;

                        if (VAR_22[0] & 0x2) {
                                VAR_24 = VAR_22[1] & 0xf;
                                VAR_25 = VAR_22[2];
                        } else {
                                VAR_24 = VAR_22[2] & 0xf;
                                VAR_25 = (VAR_23 > 12) ? VAR_22[12] : 0;
                        }

                        if (VAR_24 == VAR_6)
                                return VAR_13;
                        else if (VAR_24 == VAR_17) {
                                if (0x28 == VAR_25)
                                        return VAR_10;
                                if (0x29 == VAR_25)
                                        return VAR_14;
                        } else if (VAR_24 == VAR_5)
                                return VAR_11;
                }
                return VAR_15;
        }
        if (VAR_20) {
                if (FUNC_0(VAR_20, VAR_1, VAR_0, VAR_2))
                        return VAR_16;
        }
        if (VAR_21) {
                if (VAR_21 == VAR_4)
                        return VAR_16;
        }
        return VAR_12;
}
