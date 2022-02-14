
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(const void *VAR_0) {
        uint16_t VAR_1;
        VAR_1 =
                (uint16_t)(((uint8_t*) VAR_0)[0]) << 8 |
                (uint16_t)(((uint8_t*) VAR_0)[1]) << 0;
        return 16 * (VAR_1 + 1);
}
