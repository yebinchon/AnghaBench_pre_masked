
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(U32* VAR_1, BYTE* VAR_2, void* VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    BYTE* VAR_6 = VAR_3;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_6[VAR_5] = VAR_2[FUNC_0(VAR_1) % VAR_0];
    }
}
