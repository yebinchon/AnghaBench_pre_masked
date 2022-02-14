
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ blockType_e ;
struct TYPE_3__ {int lastBlock; scalar_t__ blockType; int origSize; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int U32 ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (void const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_2(const void *VAR_5, size_t VAR_6, blockProperties_t *VAR_7)
{
 if (VAR_6 < VAR_0)
  return FUNC_0(VAR_4);
 {
  U32 const VAR_8 = FUNC_1(VAR_5);
  U32 const VAR_9 = VAR_8 >> 3;
  VAR_7->lastBlock = VAR_8 & 1;
  VAR_7->blockType = (blockType_e)((VAR_8 >> 1) & 3);
  VAR_7->origSize = VAR_9;
  if (VAR_7->blockType == VAR_2)
   return 1;
  if (VAR_7->blockType == VAR_1)
   return FUNC_0(VAR_3);
  return VAR_9;
 }
}
