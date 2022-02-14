
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static U32 FUNC_1(U32* VAR_1)
{
    static const U32 VAR_2 = 2246822519U;
    U32 VAR_3 = *VAR_1;
    VAR_3 *= VAR_0;
    VAR_3 += VAR_2;
    VAR_3 = FUNC_0(VAR_3, 13);
    *VAR_1 = VAR_3;
    return VAR_3 >> 5;
}
