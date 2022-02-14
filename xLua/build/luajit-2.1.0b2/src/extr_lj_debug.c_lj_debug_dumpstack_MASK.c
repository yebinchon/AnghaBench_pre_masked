
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
typedef int cTValue ;
struct TYPE_11__ {int f; int ffid; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
struct TYPE_12__ {int firstline; } ;
typedef int SBuf ;
typedef int MSize ;
typedef TYPE_2__ GCproto ;
typedef TYPE_3__ GCfunc ;
typedef int BCLine ;


 int FUNC_0 (int *,TYPE_3__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int * FUNC_8 (int *,int,int*) ;
 char* FUNC_9 (int *,int *,char const**) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (char const*) ;

void FUNC_16(lua_State *VAR_0, SBuf *VAR_1, const char *VAR_2, int VAR_3)
{
  int VAR_4 = 0, VAR_5 = 1, VAR_6 = 1;
  MSize VAR_7 = 0;
  if (VAR_3 < 0) { VAR_4 = ~VAR_3; VAR_3 = VAR_5 = -1; }
  while (VAR_4 != VAR_3) {
    int VAR_8;
    cTValue *VAR_9 = FUNC_8(VAR_0, VAR_4, &VAR_8);
    if (VAR_9) {
      cTValue *VAR_10 = VAR_8 ? VAR_9+VAR_8 : ((void*)0);
      GCfunc *VAR_11 = FUNC_2(VAR_9);
      const uint8_t *VAR_12 = (const uint8_t *)VAR_2;
      int VAR_13;
      while ((VAR_13 = *VAR_12++)) {
 switch (VAR_13) {
 case 'p':
   VAR_6 = 0;
   break;
 case 'F': case 'f': {
   const char *VAR_14;
   const char *VAR_15 = FUNC_9(VAR_0, VAR_9, &VAR_14);
   if (VAR_15) {
     if (VAR_13 == 'F' && FUNC_5(VAR_11)) {
       GCproto *VAR_16 = FUNC_3(VAR_11);
       if (VAR_16->firstline != ~(BCLine)0) {
  FUNC_1(VAR_1, VAR_16, VAR_6);
  FUNC_6(VAR_1, ':');
       }
     }
     FUNC_7(VAR_1, VAR_14, (MSize)FUNC_15(VAR_14));
     break;
   }
   }

 case 'l':
   if (FUNC_5(VAR_11)) {
     GCproto *VAR_17 = FUNC_3(VAR_11);
     if (FUNC_1(VAR_1, VAR_17, VAR_6)) {

       BCLine VAR_18 = VAR_13 == 'l' ? FUNC_0(VAR_0, VAR_11, VAR_10) :
           VAR_17->firstline;
       FUNC_6(VAR_1, ':');
       FUNC_10(VAR_1, VAR_18 >= 0 ? VAR_18 : VAR_17->firstline);
     }
   } else if (FUNC_4(VAR_11)) {
     FUNC_7(VAR_1, "[builtin#", 9);
     FUNC_10(VAR_1, VAR_11->c.ffid);
     FUNC_6(VAR_1, ']');
   } else {
     FUNC_6(VAR_1, '@');
     FUNC_11(VAR_1, VAR_11->c.f);
   }
   break;
 case 'Z':
   VAR_7 = FUNC_13(VAR_1);
   break;
 default:
   FUNC_6(VAR_1, VAR_13);
   break;
 }
      }
    } else if (VAR_5 == 1) {
      break;
    } else {
      VAR_4 -= VAR_8;
    }
    VAR_4 += VAR_5;
  }
  if (VAR_7)
    FUNC_14(VAR_1, FUNC_12(VAR_1) + VAR_7);
}
