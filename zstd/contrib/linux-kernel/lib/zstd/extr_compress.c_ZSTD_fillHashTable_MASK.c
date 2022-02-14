
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hashLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {int nextToUpdate; int * base; TYPE_2__ params; scalar_t__* hashTable; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int const* VAR_0 ;
 size_t FUNC_0 (int const*,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(ZSTD_CCtx *VAR_1, const void *VAR_2, const U32 VAR_3)
{
 U32 *const VAR_4 = VAR_1->hashTable;
 U32 const VAR_5 = VAR_1->params.cParams.hashLog;
 const BYTE *const VAR_6 = VAR_1->base;
 const BYTE *VAR_7 = VAR_6 + VAR_1->nextToUpdate;
 const BYTE *const VAR_8 = ((const BYTE *)VAR_2) - VAR_0;
 const size_t VAR_9 = 3;

 while (VAR_7 <= VAR_8) {
  VAR_4[FUNC_0(VAR_7, VAR_5, VAR_3)] = (U32)(VAR_7 - VAR_6);
  VAR_7 += VAR_9;
 }
}
