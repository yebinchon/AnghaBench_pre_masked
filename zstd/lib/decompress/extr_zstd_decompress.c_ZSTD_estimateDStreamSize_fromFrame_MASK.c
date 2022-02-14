
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ const windowSize; } ;
typedef TYPE_1__ ZSTD_frameHeader ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int,int ) ;
 unsigned int VAR_0 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (TYPE_1__*,void const*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_4(const void* VAR_3, size_t VAR_4)
{
    U32 const VAR_5 = 1U << VAR_0;
    ZSTD_frameHeader VAR_6;
    size_t const VAR_7 = FUNC_2(&VAR_6, VAR_3, VAR_4);
    if (FUNC_3(VAR_7)) return VAR_7;
    FUNC_0(VAR_7>0, VAR_2);
    FUNC_0(VAR_6.windowSize > VAR_5,
                    VAR_1);
    return FUNC_1((size_t)VAR_6.windowSize);
}
