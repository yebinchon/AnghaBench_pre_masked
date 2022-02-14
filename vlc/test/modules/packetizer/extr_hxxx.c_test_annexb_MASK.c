
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int (*) (int *,int ,int const**,size_t*)) ;
 int FUNC_2 (int *,int ,int const**,size_t*) ;
 int FUNC_3 (int *,int ,int const**,size_t*) ;

__attribute__((used)) static void FUNC_4()
{
    const uint8_t *VAR_0[3];
    size_t VAR_1[3];


    const uint8_t VAR_2[] = { 0, 0, 0, 1, 0x55, 0x55, 0x55, 0x55, 0x55,
                                         0, 0, 1, 0x22, 0x22,
                                         0, 0, 0, 1, 0x11,
                                         0, 0, 1, 0x11,
                                         0, 0, 0, 1, 0x33, 0x33, 0x33, };
    const uint8_t VAR_3[] = { 5, 0x55, 0x55, 0x55, 0x55, 0x55,
                                       2, 0x22, 0x22,
                                       1, 0x11,
                                       1, 0x11,
                                       3, 0x33, 0x33, 0x33, };
    const uint8_t VAR_4[] = { 0, 5, 0x55, 0x55, 0x55, 0x55, 0x55,
                                       0, 2, 0x22, 0x22,
                                       0, 1, 0x11,
                                       0, 1, 0x11,
                                       0, 3, 0x33, 0x33, 0x33, };
    const uint8_t VAR_5[] = { 0, 0, 0, 5, 0x55, 0x55, 0x55, 0x55, 0x55,
                                       0, 0, 0, 2, 0x22, 0x22,
                                       0, 0, 0, 1, 0x11,
                                       0, 0, 0, 1, 0x11,
                                       0, 0, 0, 3, 0x33, 0x33, 0x33, };


    const uint8_t VAR_6[] = { 0, 0, 0, 1, 0x55, 0x55, 0x55, 0x55, 0x55 };
    const uint8_t VAR_7[] = { 5, 0x55, 0x55, 0x55, 0x55, 0x55 };
    const uint8_t VAR_8[] = { 0, 5, 0x55, 0x55, 0x55, 0x55, 0x55 };
    const uint8_t VAR_9[] = { 0, 0, 0, 5, 0x55, 0x55, 0x55, 0x55, 0x55 };


    const uint8_t VAR_10[] = { 0, 0, 1, 0x11 };
    const uint8_t VAR_11[] = { 1, 0x11 };
    const uint8_t VAR_12[] = { 0, 1, 0x11 };
    const uint8_t VAR_13[] = { 0, 0, 0, 1, 0x11 };


    const uint8_t VAR_14[] = { 0, 0, 1 };
    const uint8_t VAR_15[] = { 0 };
    const uint8_t VAR_16[] = { 0, 0 };
    const uint8_t VAR_17[] = { 0, 0, 0, 0 };


    const uint8_t VAR_18[] = { 0, 0, 0, 1, 0x11, 0, 0, 0, 1, 0x22, 0x22 };
    const uint8_t VAR_19[] = { 1, 0x11, 2, 0x22, 0x22 };
    const uint8_t VAR_20[] = { 0, 1, 0x11, 0, 2, 0x22, 0x22 };
    const uint8_t VAR_21[] = { 0, 0, 0, 1, 0x11, 0, 0, 0, 2, 0x22, 0x22 };


    const uint8_t VAR_22[] = { 0, 0, 1, 0x11, 0, 0, 1, 0, 0, 1 };
    const uint8_t VAR_23[] = { 1, 0x11, 0, 0 };
    const uint8_t VAR_24[] = { 0, 1, 0x11, 0, 0, 0, 0 };
    const uint8_t VAR_25[] = { 0, 0, 0, 1, 0x11, 0, 0, 0, 0, 0, 0, 0, 0 };


    const uint8_t VAR_26[] = { 0, 0, 0, 1 };
    const uint8_t VAR_27[] = { 0 };
    const uint8_t VAR_28[] = { 0, 0 };
    const uint8_t VAR_29[] = { 0, 0, 0, 0 };

    FUNC_1(4, "empty nal test", FUNC_3);
    FUNC_1(2, "single nal test", FUNC_3);
    FUNC_1(3, "single nal test, startcode 3", FUNC_3);
    FUNC_1(5, "4 bytes prefixed nal only (4 prefix optz)", FUNC_3);
    FUNC_1(1, "mixed nal set", FUNC_3);
    FUNC_1(6, "startcode repeat / empty nal", FUNC_3);

    FUNC_1(1, "IT mixed nal set", FUNC_2);
    FUNC_1(2, "IT single nal test", FUNC_2);
    FUNC_1(3, "IT single nal test, startcode 3", FUNC_2);
    FUNC_1(4, "IT empty nal test", FUNC_2);
    FUNC_1(5, "IT 4 bytes prefixed nal only (4 prefix optz)", FUNC_2);
    FUNC_1(6, "startcode repeat / empty nal", FUNC_2);
    FUNC_1(7, "IT empty nal", FUNC_2);

    FUNC_0("\nTEST 8 borkage test\n"); VAR_1[0] = 0;

    VAR_1[1] = VAR_1[2] = 1;
    VAR_0[0] = ((void*)0);
    VAR_0[1] = VAR_0[2] = VAR_27;
    FUNC_2( ((void*)0), 0, VAR_0, VAR_1 );
}
