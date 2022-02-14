
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int,int*,int,int) ;
 int FUNC_3 (int,int*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, uint64_t VAR_3) {
        uint8_t VAR_4;
        ssize_t VAR_5;
        int VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_1|VAR_0);
        FUNC_0(VAR_6 >= 0);

        VAR_5 = FUNC_2(VAR_6, &VAR_4, 1, VAR_3/8);
        FUNC_0(VAR_5 == 1);

        VAR_4 ^= 1 << (VAR_3 % 8);

        VAR_5 = FUNC_3(VAR_6, &VAR_4, 1, VAR_3/8);
        FUNC_0(VAR_5 == 1);

        FUNC_4(VAR_6);
}
