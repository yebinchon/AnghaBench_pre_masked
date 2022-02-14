
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void) {
        uint8_t VAR_1[16];

        FUNC_0(FUNC_2(&VAR_0[0]) == 0x0001);
        FUNC_0(FUNC_2(&VAR_0[1]) == 0x0102);

        FUNC_0(FUNC_3(&VAR_0[0]) == 0x00010203);
        FUNC_0(FUNC_3(&VAR_0[1]) == 0x01020304);
        FUNC_0(FUNC_3(&VAR_0[2]) == 0x02030405);
        FUNC_0(FUNC_3(&VAR_0[3]) == 0x03040506);

        FUNC_0(FUNC_4(&VAR_0[0]) == 0x0001020304050607);
        FUNC_0(FUNC_4(&VAR_0[1]) == 0x0102030405060708);
        FUNC_0(FUNC_4(&VAR_0[2]) == 0x0203040506070809);
        FUNC_0(FUNC_4(&VAR_0[3]) == 0x030405060708090a);
        FUNC_0(FUNC_4(&VAR_0[4]) == 0x0405060708090a0b);
        FUNC_0(FUNC_4(&VAR_0[5]) == 0x05060708090a0b0c);
        FUNC_0(FUNC_4(&VAR_0[6]) == 0x060708090a0b0c0d);
        FUNC_0(FUNC_4(&VAR_0[7]) == 0x0708090a0b0c0d0e);

        FUNC_8(VAR_1);
        FUNC_5(&VAR_1[0], 0x0001);
        FUNC_0(FUNC_1(&VAR_1[0], &VAR_0[0], sizeof(uint16_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_5(&VAR_1[1], 0x0102);
        FUNC_0(FUNC_1(&VAR_1[1], &VAR_0[1], sizeof(uint16_t)) == 0);

        FUNC_8(VAR_1);
        FUNC_6(&VAR_1[0], 0x00010203);
        FUNC_0(FUNC_1(&VAR_1[0], &VAR_0[0], sizeof(uint32_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_6(&VAR_1[1], 0x01020304);
        FUNC_0(FUNC_1(&VAR_1[1], &VAR_0[1], sizeof(uint32_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_6(&VAR_1[2], 0x02030405);
        FUNC_0(FUNC_1(&VAR_1[2], &VAR_0[2], sizeof(uint32_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_6(&VAR_1[3], 0x03040506);
        FUNC_0(FUNC_1(&VAR_1[3], &VAR_0[3], sizeof(uint32_t)) == 0);

        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[0], 0x0001020304050607);
        FUNC_0(FUNC_1(&VAR_1[0], &VAR_0[0], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[1], 0x0102030405060708);
        FUNC_0(FUNC_1(&VAR_1[1], &VAR_0[1], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[2], 0x0203040506070809);
        FUNC_0(FUNC_1(&VAR_1[2], &VAR_0[2], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[3], 0x030405060708090a);
        FUNC_0(FUNC_1(&VAR_1[3], &VAR_0[3], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[4], 0x0405060708090a0b);
        FUNC_0(FUNC_1(&VAR_1[4], &VAR_0[4], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[5], 0x05060708090a0b0c);
        FUNC_0(FUNC_1(&VAR_1[5], &VAR_0[5], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[6], 0x060708090a0b0c0d);
        FUNC_0(FUNC_1(&VAR_1[6], &VAR_0[6], sizeof(uint64_t)) == 0);
        FUNC_8(VAR_1);
        FUNC_7(&VAR_1[7], 0x0708090a0b0c0d0e);
        FUNC_0(FUNC_1(&VAR_1[7], &VAR_0[7], sizeof(uint64_t)) == 0);
}
