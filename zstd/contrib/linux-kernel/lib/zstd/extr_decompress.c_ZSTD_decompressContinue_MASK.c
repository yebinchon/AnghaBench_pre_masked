
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int lastBlock; int origSize; int blockType; } ;
typedef TYPE_2__ blockProperties_t ;
struct TYPE_9__ {int checksumFlag; } ;
struct TYPE_11__ {size_t expected; int stage; size_t headerBuffer; size_t headerSize; char* previousDstEnd; int xxhState; TYPE_1__ fParams; int rleSize; int bType; } ;
typedef TYPE_3__ ZSTD_DCtx ;
typedef int U32 ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (TYPE_3__*,void*) ;
 size_t FUNC_3 (void*,size_t,void const*,size_t) ;
 int FUNC_4 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_5 (TYPE_3__*,void*,size_t,void const*,size_t) ;
 size_t FUNC_6 (void const*,size_t) ;
 size_t VAR_3 ;
 size_t FUNC_7 (void const*,void*,TYPE_2__*) ;
 int FUNC_8 (size_t const) ;
 int FUNC_9 (void const*) ;
 size_t FUNC_10 (void*,size_t,void const*,size_t,int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (size_t,void const*,size_t) ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,void*,size_t) ;

size_t FUNC_14(ZSTD_DCtx *VAR_8, void *VAR_9, size_t VAR_10, const void *VAR_11, size_t VAR_12)
{

 if (VAR_12 != VAR_8->expected)
  return FUNC_1(VAR_7);
 if (VAR_10)
  FUNC_2(VAR_8, VAR_9);

 switch (VAR_8->stage) {
 case 133:
  if (VAR_12 != VAR_3)
   return FUNC_1(VAR_7);
  if ((FUNC_9(VAR_11) & 0xFFFFFFF0U) == VAR_1) {
   FUNC_11(VAR_8->headerBuffer, VAR_11, VAR_3);
   VAR_8->expected = VAR_4 - VAR_3;
   VAR_8->stage = 136;
   return 0;
  }
  VAR_8->headerSize = FUNC_6(VAR_11, VAR_3);
  if (FUNC_8(VAR_8->headerSize))
   return VAR_8->headerSize;
  FUNC_11(VAR_8->headerBuffer, VAR_11, VAR_3);
  if (VAR_8->headerSize > VAR_3) {
   VAR_8->expected = VAR_8->headerSize - VAR_3;
   VAR_8->stage = 137;
   return 0;
  }
  VAR_8->expected = 0;

 case 137:
  FUNC_11(VAR_8->headerBuffer + VAR_3, VAR_11, VAR_8->expected);
  FUNC_0(FUNC_4(VAR_8, VAR_8->headerBuffer, VAR_8->headerSize));
  VAR_8->expected = VAR_2;
  VAR_8->stage = 138;
  return 0;

 case 138: {
  blockProperties_t VAR_13;
  size_t const VAR_14 = FUNC_7(VAR_11, VAR_2, &VAR_13);
  if (FUNC_8(VAR_14))
   return VAR_14;
  VAR_8->expected = VAR_14;
  VAR_8->bType = VAR_13.blockType;
  VAR_8->rleSize = VAR_13.origSize;
  if (VAR_14) {
   VAR_8->stage = VAR_13.lastBlock ? 134 : 135;
   return 0;
  }

  if (VAR_13.lastBlock) {
   if (VAR_8->fParams.checksumFlag) {
    VAR_8->expected = 4;
    VAR_8->stage = 139;
   } else {
    VAR_8->expected = 0;
    VAR_8->stage = 133;
   }
  } else {
   VAR_8->expected = 3;
   VAR_8->stage = 138;
  }
  return 0;
 }
 case 134:
 case 135: {
  size_t VAR_15;
  switch (VAR_8->bType) {
  case 131: VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12); break;
  case 130: VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12); break;
  case 128: VAR_15 = FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12, VAR_8->rleSize); break;
  case 129:
  default: return FUNC_1(VAR_6);
  }
  if (FUNC_8(VAR_15))
   return VAR_15;
  if (VAR_8->fParams.checksumFlag)
   FUNC_13(&VAR_8->xxhState, VAR_9, VAR_15);

  if (VAR_8->stage == 134) {
   if (VAR_8->fParams.checksumFlag) {
    VAR_8->expected = 4;
    VAR_8->stage = 139;
   } else {
    VAR_8->expected = 0;
    VAR_8->stage = 133;
   }
  } else {
   VAR_8->stage = 138;
   VAR_8->expected = VAR_2;
   VAR_8->previousDstEnd = (char *)VAR_9 + VAR_15;
  }
  return VAR_15;
 }
 case 139: {
  U32 const VAR_16 = (U32)FUNC_12(&VAR_8->xxhState);
  U32 const VAR_17 = FUNC_9(VAR_11);
  if (VAR_17 != VAR_16)
   return FUNC_1(VAR_5);
  VAR_8->expected = 0;
  VAR_8->stage = 133;
  return 0;
 }
 case 136: {
  FUNC_11(VAR_8->headerBuffer + VAR_3, VAR_11, VAR_8->expected);
  VAR_8->expected = FUNC_9(VAR_8->headerBuffer + 4);
  VAR_8->stage = 132;
  return 0;
 }
 case 132: {
  VAR_8->expected = 0;
  VAR_8->stage = 133;
  return 0;
 }
 default:
  return FUNC_1(VAR_0);
 }
}
