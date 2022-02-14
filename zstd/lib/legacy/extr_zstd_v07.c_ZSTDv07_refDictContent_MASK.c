
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* dictEnd; char const* previousDstEnd; char const* vBase; void const* base; } ;
typedef TYPE_1__ ZSTDv07_DCtx ;



__attribute__((used)) static size_t FUNC_0(ZSTDv07_DCtx* VAR_0, const void* VAR_1, size_t VAR_2)
{
    VAR_0->dictEnd = VAR_0->previousDstEnd;
    VAR_0->vBase = (const char*)VAR_1 - ((const char*)(VAR_0->previousDstEnd) - (const char*)(VAR_0->base));
    VAR_0->base = VAR_1;
    VAR_0->previousDstEnd = (const char*)VAR_1 + VAR_2;
    return 0;
}
