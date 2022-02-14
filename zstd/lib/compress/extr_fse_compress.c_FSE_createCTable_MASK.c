
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FSE_CTable ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;

FSE_CTable* FUNC_2 (unsigned VAR_1, unsigned VAR_2)
{
    size_t VAR_3;
    if (VAR_2 > VAR_0) VAR_2 = VAR_0;
    VAR_3 = FUNC_0 (VAR_2, VAR_1) * sizeof(U32);
    return (FSE_CTable*)FUNC_1(VAR_3);
}
