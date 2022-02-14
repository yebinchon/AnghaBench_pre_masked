
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* previousDstEnd; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (TYPE_1__*,void*) ;
 size_t FUNC_1 (TYPE_1__*,void*,size_t,void const*,size_t,int ) ;

size_t FUNC_2(ZSTD_DCtx* VAR_0,
                            void* VAR_1, size_t VAR_2,
                      const void* VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    FUNC_0(VAR_0, VAR_1);
    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
    VAR_0->previousDstEnd = (char*)VAR_1 + VAR_5;
    return VAR_5;
}
