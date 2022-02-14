
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(U32* VAR_0, void* VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    BYTE* VAR_4 = VAR_1;

    for (VAR_3 = 0; VAR_3 + 4 <= VAR_2; VAR_3 += 4) {
        FUNC_0(VAR_4 + VAR_3, FUNC_1(VAR_0));
    }
    for (; VAR_3 < VAR_2; VAR_3++) {
        VAR_4[VAR_3] = FUNC_1(VAR_0) & 0xff;
    }
}
