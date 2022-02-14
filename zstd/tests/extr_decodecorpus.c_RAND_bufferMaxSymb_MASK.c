
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(U32* VAR_0, void* VAR_1, size_t VAR_2, int VAR_3)
{
    size_t VAR_4;
    BYTE* VAR_5 = VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_5[VAR_4] = (BYTE) (FUNC_0(VAR_0) % (VAR_3 + 1));
    }
}
