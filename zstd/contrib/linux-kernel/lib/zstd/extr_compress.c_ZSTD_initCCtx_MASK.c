
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {int opaque; } ;
struct TYPE_6__ {int workSpaceSize; TYPE_1__ customMem; int workSpace; } ;
typedef TYPE_2__ ZSTD_CCtx ;


 TYPE_2__* FUNC_0 (int const) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int ,int *) ;

ZSTD_CCtx *FUNC_3(void *VAR_0, size_t VAR_1)
{
 ZSTD_customMem const VAR_2 = FUNC_1(VAR_0, VAR_1);
 ZSTD_CCtx *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  VAR_3->workSpace = FUNC_2(VAR_3->customMem.opaque, &VAR_3->workSpaceSize);
 }
 return VAR_3;
}
