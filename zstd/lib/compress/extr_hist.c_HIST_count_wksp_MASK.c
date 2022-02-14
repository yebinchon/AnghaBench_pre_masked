
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (unsigned int*,unsigned int*,void const*,size_t,void*,size_t) ;
 size_t FUNC_2 (unsigned int*,unsigned int*,void const*,size_t,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

size_t FUNC_3(unsigned* VAR_4, unsigned* VAR_5,
                       const void* VAR_6, size_t VAR_7,
                       void* VAR_8, size_t VAR_9)
{
    if ((size_t)VAR_8 & 3) return FUNC_0(VAR_0);
    if (VAR_9 < VAR_1) return FUNC_0(VAR_3);
    if (*VAR_5 < 255)
        return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2, (U32*)VAR_8);
    *VAR_5 = 255;
    return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
