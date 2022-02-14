
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dictID; scalar_t__ checksumFlag; } ;
struct TYPE_4__ {scalar_t__ dictID; int xxhState; TYPE_2__ fParams; } ;
typedef TYPE_1__ ZSTDv07_DCtx ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 size_t FUNC_2 (TYPE_2__*,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3(ZSTDv07_DCtx* VAR_1, const void* VAR_2, size_t VAR_3)
{
    size_t const VAR_4 = FUNC_2(&(VAR_1->fParams), VAR_2, VAR_3);
    if (VAR_1->fParams.dictID && (VAR_1->dictID != VAR_1->fParams.dictID)) return FUNC_0(VAR_0);
    if (VAR_1->fParams.checksumFlag) FUNC_1(&VAR_1->xxhState, 0);
    return VAR_4;
}
