
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,union in_addr_union*,union in_addr_union const*) ;
 int FUNC_2 (char const*,int,union in_addr_union*,unsigned char*) ;
 int FUNC_3 (char const*,int*,union in_addr_union*,unsigned char*) ;
 int FUNC_4 (char const*,int ,int*,union in_addr_union*,unsigned char*) ;

__attribute__((used)) static void FUNC_5(
                const char *VAR_2,
                int VAR_3,
                int VAR_4,
                const union in_addr_union *VAR_5,
                unsigned char VAR_6,
                int VAR_7,
                unsigned char VAR_8,
                int VAR_9,
                unsigned char VAR_10) {

        union in_addr_union VAR_11;
        unsigned char VAR_12;
        int VAR_13, VAR_14;

        VAR_14 = FUNC_2(VAR_2, VAR_3, &VAR_11, &VAR_12);
        FUNC_0(VAR_14 == VAR_4);

        if (VAR_14 < 0)
                return;

        FUNC_0(FUNC_1(VAR_3, &VAR_11, VAR_5));
        FUNC_0(VAR_12 == VAR_6);

        VAR_14 = FUNC_3(VAR_2, &VAR_13, &VAR_11, &VAR_12);
        FUNC_0(VAR_14 >= 0);

        FUNC_0(VAR_13 == VAR_3);
        FUNC_0(FUNC_1(VAR_3, &VAR_11, VAR_5));
        FUNC_0(VAR_12 == VAR_6);

        VAR_14 = FUNC_4(VAR_2, VAR_1, &VAR_13, &VAR_11, &VAR_12);
        FUNC_0(VAR_14 == VAR_7);

        if (VAR_14 >= 0) {
                FUNC_0(VAR_13 == VAR_3);
                FUNC_0(FUNC_1(VAR_3, &VAR_11, VAR_5));
                FUNC_0(VAR_12 == VAR_8);
        }

        VAR_14 = FUNC_4(VAR_2, VAR_0, &VAR_13, &VAR_11, &VAR_12);
        FUNC_0(VAR_14 == VAR_9);

        if (VAR_14 >= 0) {
                FUNC_0(VAR_13 == VAR_3);
                FUNC_0(FUNC_1(VAR_3, &VAR_11, VAR_5));
                FUNC_0(VAR_12 == VAR_10);
        }
}
