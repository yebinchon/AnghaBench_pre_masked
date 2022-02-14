
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_11__ {int * cctx; int customMem; } ;
typedef TYPE_2__ ZSTD_CStream ;


 int * FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

ZSTD_CStream *FUNC_5(ZSTD_customMem VAR_0)
{
 ZSTD_CStream *VAR_1;

 if (!VAR_0.customAlloc || !VAR_0.customFree)
  return ((void*)0);

 VAR_1 = (ZSTD_CStream *)FUNC_2(sizeof(ZSTD_CStream), VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_1, 0, sizeof(ZSTD_CStream));
 FUNC_3(&VAR_1->customMem, &VAR_0, sizeof(ZSTD_customMem));
 VAR_1->cctx = FUNC_0(VAR_0);
 if (VAR_1->cctx == ((void*)0)) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
