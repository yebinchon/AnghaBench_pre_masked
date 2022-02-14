
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int hi; } ;
struct TYPE_4__ {double n; TYPE_1__ u32; } ;
typedef TYPE_2__ TValue ;
typedef int SBuf ;
typedef int GCstr ;
typedef int CTSize ;


 int VAR_0 ;
 int FUNC_0 (int *,char) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,double) ;
 char* FUNC_4 (int *) ;

GCstr *FUNC_5(lua_State *VAR_1, void *VAR_2, CTSize VAR_3)
{
  SBuf *VAR_4 = FUNC_2(VAR_1);
  TValue VAR_5, VAR_6;
  if (VAR_3 == 2*sizeof(double)) {
    VAR_5.n = *(double *)VAR_2; VAR_6.n = ((double *)VAR_2)[1];
  } else {
    VAR_5.n = (double)*(float *)VAR_2; VAR_6.n = (double)((float *)VAR_2)[1];
  }
  FUNC_3(VAR_4, VAR_0, VAR_5.n);
  if (!(VAR_6.u32.hi & 0x80000000u) || VAR_6.n != VAR_6.n) FUNC_0(VAR_4, '+');
  FUNC_3(VAR_4, VAR_0, VAR_6.n);
  FUNC_0(VAR_4, FUNC_4(VAR_4)[-1] >= 'a' ? 'I' : 'i');
  return FUNC_1(VAR_1, VAR_4);
}
