
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_2__ {scalar_t__ fastMode; } ;
typedef TYPE_1__ FSEv06_DTableHeader ;
typedef int FSEv06_DTable ;


 size_t FUNC_0 (void*,size_t,void const*,size_t,int const*,int) ;

size_t FUNC_1(void* VAR_0, size_t VAR_1,
                            const void* VAR_2, size_t VAR_3,
                            const FSEv06_DTable* VAR_4)
{
    const void* VAR_5 = VAR_4;
    const FSEv06_DTableHeader* VAR_6 = (const FSEv06_DTableHeader*)VAR_5;
    const U32 VAR_7 = VAR_6->fastMode;


    if (VAR_7) return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1);
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
