
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_20__ {int sizebc; int sizekgc; int sizekn; int sizept; int firstline; int numline; int varinfo; int uvinfo; int lineinfo; int chunkname; scalar_t__ trace; void* flags; void* sizeuv; int uv; int k; void* framesize; void* numparams; int gct; } ;
struct TYPE_19__ {int chunkname; int L; } ;
typedef int TValue ;
typedef int MSize ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ GCproto ;
typedef int GCRef ;
typedef int BCLine ;
typedef int BCIns ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int) ;
 char* FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*) ;

GCproto *FUNC_13(LexState *VAR_2)
{
  GCproto *VAR_3;
  MSize VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  MSize VAR_12, VAR_13, VAR_14;
  MSize VAR_15 = 0;
  BCLine VAR_16 = 0, VAR_17 = 0;


  VAR_6 = FUNC_0(VAR_2);
  VAR_5 = FUNC_0(VAR_2);
  VAR_4 = FUNC_0(VAR_2);
  VAR_7 = FUNC_0(VAR_2);
  VAR_8 = FUNC_6(VAR_2);
  VAR_9 = FUNC_6(VAR_2);
  VAR_10 = FUNC_6(VAR_2) + 1;
  if (!(FUNC_3(VAR_2) & VAR_0)) {
    VAR_15 = FUNC_6(VAR_2);
    if (VAR_15) {
      VAR_16 = FUNC_6(VAR_2);
      VAR_17 = FUNC_6(VAR_2);
    }
  }


  VAR_11 = (MSize)sizeof(GCproto) +
    VAR_10*(MSize)sizeof(BCIns) +
    VAR_8*(MSize)sizeof(GCRef);
  VAR_11 = (VAR_11 + (MSize)sizeof(TValue)-1) & ~((MSize)sizeof(TValue)-1);
  VAR_12 = VAR_11; VAR_11 += VAR_9*(MSize)sizeof(TValue);
  VAR_13 = VAR_11; VAR_11 += ((VAR_7+1)&~1)*2;
  VAR_14 = VAR_11; VAR_11 += VAR_15;


  VAR_3 = (GCproto *)FUNC_9(VAR_2->L, (MSize)VAR_11);
  VAR_3->gct = ~VAR_1;
  VAR_3->numparams = (uint8_t)VAR_5;
  VAR_3->framesize = (uint8_t)VAR_4;
  VAR_3->sizebc = VAR_10;
  FUNC_12(VAR_3->k, (char *)VAR_3 + VAR_12);
  FUNC_12(VAR_3->uv, (char *)VAR_3 + VAR_13);
  VAR_3->sizekgc = 0;
  VAR_3->sizekn = VAR_9;
  VAR_3->sizept = VAR_11;
  VAR_3->sizeuv = (uint8_t)VAR_7;
  VAR_3->flags = (uint8_t)VAR_6;
  VAR_3->trace = 0;
  FUNC_11(VAR_3->chunkname, FUNC_10(VAR_2->chunkname));


  *(uint32_t *)((char *)VAR_3 + VAR_12 - sizeof(GCRef)*(VAR_8+1)) = 0;


  FUNC_1(VAR_2, VAR_3, VAR_10);
  FUNC_7(VAR_2, VAR_3, VAR_7);


  FUNC_4(VAR_2, VAR_3, VAR_8);
  VAR_3->sizekgc = VAR_8;
  FUNC_5(VAR_2, VAR_3, VAR_9);


  VAR_3->firstline = VAR_16;
  VAR_3->numline = VAR_17;
  if (VAR_15) {
    MSize VAR_18 = (VAR_10-1) << (VAR_17 < 256 ? 0 : VAR_17 < 65536 ? 1 : 2);
    FUNC_12(VAR_3->lineinfo, (char *)VAR_3 + VAR_14);
    FUNC_12(VAR_3->uvinfo, (char *)VAR_3 + VAR_14 + VAR_18);
    FUNC_2(VAR_2, VAR_3, VAR_15);
    FUNC_12(VAR_3->varinfo, FUNC_8(VAR_3));
  } else {
    FUNC_12(VAR_3->lineinfo, ((void*)0));
    FUNC_12(VAR_3->uvinfo, ((void*)0));
    FUNC_12(VAR_3->varinfo, ((void*)0));
  }
  return VAR_3;
}
