
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entropyPresent; int dictSize; char const* dictContent; int entropy; void* dictID; } ;
typedef TYPE_1__ ZSTD_DDict ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (int *,char const*,int) ;
 void* FUNC_2 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_3(ZSTD_DDict *VAR_2)
{
 VAR_2->dictID = 0;
 VAR_2->entropyPresent = 0;
 if (VAR_2->dictSize < 8)
  return 0;
 {
  U32 const VAR_3 = FUNC_2(VAR_2->dictContent);
  if (VAR_3 != VAR_0)
   return 0;
 }
 VAR_2->dictID = FUNC_2((const char *)VAR_2->dictContent + 4);


 FUNC_0(FUNC_1(&VAR_2->entropy, VAR_2->dictContent, VAR_2->dictSize), VAR_1);
 VAR_2->entropyPresent = 1;
 return 0;
}
