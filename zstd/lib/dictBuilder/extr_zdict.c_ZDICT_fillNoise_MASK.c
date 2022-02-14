
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void* VAR_0, size_t VAR_1)
{
    unsigned const VAR_2 = 2654435761U;
    unsigned const VAR_3 = 2246822519U;
    unsigned VAR_4 = VAR_2;
    size_t VAR_5=0;
    for (VAR_5=0; VAR_5<VAR_1; VAR_5++) {
        VAR_4 *= VAR_3;
        ((unsigned char*)VAR_0)[VAR_5] = (unsigned char)(VAR_4 >> 21);
    }
}
