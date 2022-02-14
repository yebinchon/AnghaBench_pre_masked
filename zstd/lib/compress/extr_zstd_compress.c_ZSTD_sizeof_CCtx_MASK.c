
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__ const* workspace; } ;
struct TYPE_5__ {int localDict; TYPE_4__ workspace; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (TYPE_4__*) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_1__ const*) ;

size_t FUNC_3(const ZSTD_CCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;

    return (VAR_0->workspace.workspace == VAR_0 ? 0 : sizeof(*VAR_0))
           + FUNC_0(&VAR_0->workspace)
           + FUNC_1(VAR_0->localDict)
           + FUNC_2(VAR_0);
}
