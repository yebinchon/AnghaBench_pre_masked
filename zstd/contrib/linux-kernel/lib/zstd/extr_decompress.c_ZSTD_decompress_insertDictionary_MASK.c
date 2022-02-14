
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int litEntropy; int fseEntropy; int entropy; void* dictID; } ;
typedef TYPE_1__ ZSTD_DCtx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_1 (size_t const) ;
 size_t FUNC_2 (int *,void const*,size_t) ;
 void* FUNC_3 (char const*) ;
 size_t FUNC_4 (TYPE_1__*,void const*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_5(ZSTD_DCtx *VAR_2, const void *VAR_3, size_t VAR_4)
{
 if (VAR_4 < 8)
  return FUNC_4(VAR_2, VAR_3, VAR_4);
 {
  U32 const VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 != VAR_0) {
   return FUNC_4(VAR_2, VAR_3, VAR_4);
  }
 }
 VAR_2->dictID = FUNC_3((const char *)VAR_3 + 4);


 {
  size_t const VAR_6 = FUNC_2(&VAR_2->entropy, VAR_3, VAR_4);
  if (FUNC_1(VAR_6))
   return FUNC_0(VAR_1);
  VAR_3 = (const char *)VAR_3 + VAR_6;
  VAR_4 -= VAR_6;
 }
 VAR_2->litEntropy = VAR_2->fseEntropy = 1;


 return FUNC_4(VAR_2, VAR_3, VAR_4);
}
