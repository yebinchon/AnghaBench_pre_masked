
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_8__ {TYPE_1__ customMem; } ;
typedef TYPE_2__ ZSTD_CCtx ;


 scalar_t__ FUNC_0 (int,TYPE_1__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static ZSTD_CCtx *FUNC_2(ZSTD_customMem VAR_0)
{
 ZSTD_CCtx *VAR_1;
 if (!VAR_0.customAlloc || !VAR_0.customFree)
  return ((void*)0);
 VAR_1 = (ZSTD_CCtx *)FUNC_0(sizeof(ZSTD_CCtx), VAR_0);
 if (!VAR_1)
  return ((void*)0);
 FUNC_1(VAR_1, 0, sizeof(ZSTD_CCtx));
 VAR_1->customMem = VAR_0;
 return VAR_1;
}
