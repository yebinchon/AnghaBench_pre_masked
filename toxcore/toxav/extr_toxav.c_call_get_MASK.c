
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ToxAVCall ;
struct TYPE_3__ {size_t calls_tail; int ** calls; } ;
typedef TYPE_1__ ToxAV ;



ToxAVCall *FUNC_0(ToxAV *VAR_0, uint32_t VAR_1)
{

    if (VAR_0->calls == ((void*)0) || VAR_0->calls_tail < VAR_1)
        return ((void*)0);

    return VAR_0->calls[VAR_1];
}
