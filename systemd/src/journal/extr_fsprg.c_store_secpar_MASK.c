
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, uint16_t VAR_1) {
        VAR_1 = VAR_1 / 16 - 1;
        ((uint8_t*) VAR_0)[0] = (VAR_1 >> 8) & 0xff;
        ((uint8_t*) VAR_0)[1] = (VAR_1 >> 0) & 0xff;
}
