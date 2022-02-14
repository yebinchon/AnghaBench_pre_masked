
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {scalar_t__ fastMode; } ;
typedef TYPE_1__ FSE_DTableHeader ;
typedef int FSE_DTable ;
typedef int DTableH ;


 size_t FUNC_0 (void*,size_t,void const*,size_t,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static size_t FUNC_2(void* VAR_0, size_t VAR_1,
                            const void* VAR_2, size_t VAR_3,
                            const FSE_DTable* VAR_4)
{
    FSE_DTableHeader VAR_5;
    U32 VAR_6;

    FUNC_1(&VAR_5, VAR_4, sizeof(VAR_5));
    VAR_6 = VAR_5.fastMode;


    if (VAR_6) return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1);
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
