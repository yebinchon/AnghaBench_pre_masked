
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, size_t VAR_1, uint64_t VAR_2) {
        FUNC_0(VAR_1 == 8);
        ((uint8_t*) VAR_0)[0] = (VAR_2 >> 56) & 0xff;
        ((uint8_t*) VAR_0)[1] = (VAR_2 >> 48) & 0xff;
        ((uint8_t*) VAR_0)[2] = (VAR_2 >> 40) & 0xff;
        ((uint8_t*) VAR_0)[3] = (VAR_2 >> 32) & 0xff;
        ((uint8_t*) VAR_0)[4] = (VAR_2 >> 24) & 0xff;
        ((uint8_t*) VAR_0)[5] = (VAR_2 >> 16) & 0xff;
        ((uint8_t*) VAR_0)[6] = (VAR_2 >> 8) & 0xff;
        ((uint8_t*) VAR_0)[7] = (VAR_2 >> 0) & 0xff;
}
