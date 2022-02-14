
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dictSize; scalar_t__ dictBuffer; } ;
typedef TYPE_1__ ZSTD_DDict ;



size_t FUNC_0(const ZSTD_DDict* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    return sizeof(*VAR_0) + (VAR_0->dictBuffer ? VAR_0->dictSize : 0) ;
}
