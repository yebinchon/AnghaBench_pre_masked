
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(U32* VAR_1, BYTE* VAR_2, double VAR_3)
{
    size_t VAR_4 = 0;
    size_t VAR_5 = VAR_0;
    BYTE VAR_6 = (BYTE) (FUNC_0(VAR_1) % 256);
    BYTE VAR_7 = (BYTE) ((FUNC_0(VAR_1) % 256) | 1);

    while (VAR_4 < VAR_0) {
        size_t VAR_8 = ((size_t)(VAR_3 * VAR_5)) + 1;
        size_t VAR_9;
        for (VAR_9 = 0; VAR_9 < VAR_8 && VAR_4 < VAR_0; VAR_9++, VAR_4++) {
            VAR_2[VAR_4] = VAR_6;
        }

        VAR_6 += VAR_7;
        VAR_5 -= VAR_8;
    }
}
