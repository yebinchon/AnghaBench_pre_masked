
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned FUNC_2(size_t VAR_0, unsigned VAR_1)
{
    U32 VAR_2 = FUNC_0((U32)(VAR_0)) + 1;
    U32 VAR_3 = FUNC_0(VAR_1) + 2;
    U32 VAR_4 = VAR_2 < VAR_3 ? VAR_2 : VAR_3;
    FUNC_1(VAR_0 > 1);
    return VAR_4;
}
