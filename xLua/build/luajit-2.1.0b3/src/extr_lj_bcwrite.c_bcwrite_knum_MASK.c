
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ lua_Number ;
typedef int int32_t ;
struct TYPE_11__ {int lo; int hi; } ;
struct TYPE_12__ {TYPE_1__ u32; } ;
typedef TYPE_2__ cTValue ;
struct TYPE_14__ {int sb; } ;
struct TYPE_13__ {int sizekn; int k; } ;
typedef int MSize ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ BCWriteCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char*,int) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(BCWriteCtx *VAR_2, GCproto *VAR_3)
{
  MSize VAR_4, VAR_5 = VAR_3->sizekn;
  cTValue *VAR_6 = FUNC_4(VAR_3->k, VAR_1);
  char *VAR_7 = FUNC_1(&VAR_2->sb, 10*VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_6++) {
    int32_t VAR_8;
    if (FUNC_7(VAR_6)) {
      VAR_8 = FUNC_0(VAR_6);
      goto save_int;
    } else {

      if (!VAR_0) {
 lua_Number VAR_9 = FUNC_5(VAR_6);
 VAR_8 = FUNC_2(VAR_9);
 if (VAR_9 == (lua_Number)VAR_8) {
 save_int:
   VAR_7 = FUNC_3(VAR_7, 2*(uint32_t)VAR_8 | ((uint32_t)VAR_8&0x80000000u));
   if (VAR_8 < 0)
     VAR_7[-1] = (VAR_7[-1] & 7) | ((VAR_8>>27) & 0x18);
   continue;
 }
      }
      VAR_7 = FUNC_3(VAR_7, 1+(2*VAR_6->u32.lo | (VAR_6->u32.lo & 0x80000000u)));
      if (VAR_6->u32.lo >= 0x80000000u)
 VAR_7[-1] = (VAR_7[-1] & 7) | ((VAR_6->u32.lo>>27) & 0x18);
      VAR_7 = FUNC_3(VAR_7, VAR_6->u32.hi);
    }
  }
  FUNC_6(&VAR_2->sb, VAR_7);
}
