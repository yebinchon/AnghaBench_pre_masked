
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ forceRawDict; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_1 (TYPE_1__*,void const*,size_t) ;
 scalar_t__ FUNC_2 (void const*) ;

__attribute__((used)) static size_t FUNC_3(ZSTD_CCtx *VAR_1, const void *VAR_2, size_t VAR_3)
{
 if ((VAR_2 == ((void*)0)) || (VAR_3 <= 8))
  return 0;


 if ((FUNC_2(VAR_2) != VAR_0) || (VAR_1->forceRawDict))
  return FUNC_0(VAR_1, VAR_2, VAR_3);


 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
