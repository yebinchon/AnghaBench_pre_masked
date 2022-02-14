
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int in ;


 int FUNC_0 (int*,int,int const*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_0, char *VAR_1[]) {
        const uint8_t VAR_2[15] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                                  0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e };
        const uint8_t VAR_3[16] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                                  0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
        uint8_t VAR_4[20];


        FUNC_1(VAR_4, VAR_2, sizeof(VAR_2));
        FUNC_0(VAR_4, sizeof(VAR_2), VAR_3);
        FUNC_1(VAR_4 + 1, VAR_2, sizeof(VAR_2));
        FUNC_0(VAR_4 + 1, sizeof(VAR_2), VAR_3);
        FUNC_1(VAR_4 + 2, VAR_2, sizeof(VAR_2));
        FUNC_0(VAR_4 + 2, sizeof(VAR_2), VAR_3);
        FUNC_1(VAR_4 + 4, VAR_2, sizeof(VAR_2));
        FUNC_0(VAR_4 + 4, sizeof(VAR_2), VAR_3);

        FUNC_2();
}
