
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int* VAR_2)
{
    U32 VAR_3 = *VAR_2;
    VAR_3 *= VAR_0;
    VAR_3 += VAR_1;
    VAR_3 = FUNC_0(VAR_3, 13);
    *VAR_2 = VAR_3;
    return VAR_3 >> 5;
}
