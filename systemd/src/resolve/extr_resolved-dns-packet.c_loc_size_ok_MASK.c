
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static bool FUNC_0(uint8_t VAR_0) {
        uint8_t VAR_1 = VAR_0 >> 4, VAR_2 = VAR_0 & 0xF;

        return VAR_1 <= 9 && VAR_2 <= 9 && (VAR_1 > 0 || VAR_2 == 0);
}
