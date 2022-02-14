
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_26__ {int * top; int maxstack; int stack; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_27__ {char* source; char* short_src; int linedefined; int lastlinedefined; char* what; int currentline; int isvararg; char* namewhat; int * name; scalar_t__ nparams; int nups; scalar_t__ i_ci; } ;
typedef TYPE_3__ lj_Debug ;
struct TYPE_25__ {int nupvalues; int gct; } ;
struct TYPE_29__ {TYPE_1__ c; } ;
struct TYPE_28__ {int firstline; int numline; int flags; size_t sizebc; scalar_t__ numparams; } ;
typedef int TValue ;
typedef size_t MSize ;
typedef int GCtab ;
typedef int GCstr ;
typedef TYPE_4__ GCproto ;
typedef TYPE_5__ GCfunc ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*,int *) ;
 TYPE_5__* FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 char* FUNC_7 (TYPE_2__*,int *,int **) ;
 int FUNC_8 (char*,int *,int) ;
 int * FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int) ;
 int FUNC_11 (int) ;
 int * FUNC_12 (TYPE_4__*) ;
 void* FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (TYPE_2__*,int *,TYPE_5__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*,int *,int *) ;
 char* FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ) ;

int FUNC_21(lua_State *VAR_2, const char *VAR_3, lj_Debug *VAR_4, int VAR_5)
{
  int VAR_6 = 0, VAR_7 = 0;
  TValue *VAR_8 = ((void*)0);
  TValue *VAR_9 = ((void*)0);
  GCfunc *VAR_10;
  if (*VAR_3 == '>') {
    TValue *VAR_11 = VAR_2->top - 1;
    FUNC_0(VAR_2, FUNC_19(VAR_11));
    VAR_10 = FUNC_3(VAR_11);
    VAR_2->top--;
    VAR_3++;
  } else {
    uint32_t VAR_12 = (uint32_t)VAR_4->i_ci & 0xffff;
    uint32_t VAR_13 = (uint32_t)VAR_4->i_ci >> 16;
    FUNC_11(VAR_12 != 0);
    VAR_8 = FUNC_20(VAR_2->stack) + VAR_12;
    if (VAR_13) VAR_9 = VAR_8 + VAR_13;
    FUNC_11(VAR_8 <= FUNC_20(VAR_2->maxstack) &&
        (!VAR_9 || VAR_9 <= FUNC_20(VAR_2->maxstack)));
    VAR_10 = FUNC_2(VAR_8);
    FUNC_11(VAR_10->c.gct == ~VAR_0);
  }
  for (; *VAR_3; VAR_3++) {
    if (*VAR_3 == 'S') {
      if (FUNC_6(VAR_10)) {
 GCproto *VAR_14 = FUNC_4(VAR_10);
 BCLine VAR_15 = VAR_14->firstline;
 GCstr *VAR_16 = FUNC_12(VAR_14);
 VAR_4->source = FUNC_18(VAR_16);
 FUNC_8(VAR_4->short_src, VAR_16, VAR_14->firstline);
 VAR_4->linedefined = (int)VAR_15;
 VAR_4->lastlinedefined = (int)(VAR_15 + VAR_14->numline);
 VAR_4->what = (VAR_15 || !VAR_14->numline) ? "Lua" : "main";
      } else {
 VAR_4->source = "=[C]";
 VAR_4->short_src[0] = '[';
 VAR_4->short_src[1] = 'C';
 VAR_4->short_src[2] = ']';
 VAR_4->short_src[3] = '\0';
 VAR_4->linedefined = -1;
 VAR_4->lastlinedefined = -1;
 VAR_4->what = "C";
      }
    } else if (*VAR_3 == 'l') {
      VAR_4->currentline = VAR_8 ? FUNC_1(VAR_2, VAR_10, VAR_9) : -1;
    } else if (*VAR_3 == 'u') {
      VAR_4->nups = VAR_10->c.nupvalues;
      if (VAR_5) {
 if (FUNC_6(VAR_10)) {
   GCproto *VAR_17 = FUNC_4(VAR_10);
   VAR_4->nparams = VAR_17->numparams;
   VAR_4->isvararg = !!(VAR_17->flags & VAR_1);
 } else {
   VAR_4->nparams = 0;
   VAR_4->isvararg = 1;
 }
      }
    } else if (*VAR_3 == 'n') {
      VAR_4->namewhat = VAR_8 ? FUNC_7(VAR_2, VAR_8, &VAR_4->name) : ((void*)0);
      if (VAR_4->namewhat == ((void*)0)) {
 VAR_4->namewhat = "";
 VAR_4->name = ((void*)0);
      }
    } else if (*VAR_3 == 'f') {
      VAR_6 = 1;
    } else if (*VAR_3 == 'L') {
      VAR_7 = 1;
    } else {
      return 0;
    }
  }
  if (VAR_6) {
    FUNC_15(VAR_2, VAR_2->top, VAR_10);
    FUNC_5(VAR_2);
  }
  if (VAR_7) {
    if (FUNC_6(VAR_10)) {
      GCtab *VAR_18 = FUNC_9(VAR_2, 0, 0);
      GCproto *VAR_19 = FUNC_4(VAR_10);
      const void *VAR_20 = FUNC_13(VAR_19);
      if (VAR_20) {
 BCLine VAR_21 = VAR_19->firstline;
 int VAR_22 = VAR_19->numline < 256 ? 1 : VAR_19->numline < 65536 ? 2 : 4;
 MSize VAR_23, VAR_24 = VAR_19->sizebc-1;
 for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
   BCLine VAR_25 = VAR_21 +
     (VAR_22 == 1 ? (BCLine)((const uint8_t *)VAR_20)[VAR_23] :
      VAR_22 == 2 ? (BCLine)((const uint16_t *)VAR_20)[VAR_23] :
      (BCLine)((const uint32_t *)VAR_20)[VAR_23]);
   FUNC_14(FUNC_10(VAR_2, VAR_18, VAR_25), 1);
 }
      }
      FUNC_17(VAR_2, VAR_2->top, VAR_18);
    } else {
      FUNC_16(VAR_2->top);
    }
    FUNC_5(VAR_2);
  }
  return 1;
}
