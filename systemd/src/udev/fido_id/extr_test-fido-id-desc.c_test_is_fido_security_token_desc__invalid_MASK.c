
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int INVALID_HID_DESC_5 ;
typedef int INVALID_HID_DESC_4 ;
typedef int INVALID_HID_DESC_3 ;
typedef int INVALID_HID_DESC_2 ;
typedef int INVALID_HID_DESC_1 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,int) ;

__attribute__((used)) static void FUNC_2(void) {

        static const uint8_t VAR_0[] = { 0x01 };
        FUNC_0(FUNC_1(VAR_0, sizeof(VAR_0)) < 0);


        static const uint8_t VAR_1[] = { 0x02, 0x01 };
        FUNC_0(FUNC_1(VAR_1, sizeof(VAR_1)) < 0);


        static const uint8_t VAR_2[] = { 0x03, 0x01, 0x02, 0x03 };
        FUNC_0(FUNC_1(VAR_2, sizeof(VAR_2)) < 0);


        static const uint8_t VAR_3[] = { 0xfe };
        FUNC_0(FUNC_1(VAR_3, sizeof(VAR_3)) < 0);


        static const uint8_t VAR_4[] = { 0x07, 0x01, 0x02, 0x03, 0x04 };
        FUNC_0(FUNC_1(VAR_4, sizeof(VAR_4)) < 0);
}
