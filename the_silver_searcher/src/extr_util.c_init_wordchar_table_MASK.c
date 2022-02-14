
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

void FUNC_0(void) {
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 256; ++VAR_1) {
        char VAR_2 = (char)VAR_1;
        VAR_0[VAR_1] =
            ('a' <= VAR_2 && VAR_2 <= 'z') ||
            ('A' <= VAR_2 && VAR_2 <= 'Z') ||
            ('0' <= VAR_2 && VAR_2 <= '9') ||
            VAR_2 == '_';
    }
}
