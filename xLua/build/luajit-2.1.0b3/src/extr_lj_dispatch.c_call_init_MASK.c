
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {int numparams; int framesize; int flags; } ;
typedef int MSize ;
typedef TYPE_2__ GCproto ;
typedef int GCfunc ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_2, GCfunc *VAR_3)
{
  if (FUNC_1(VAR_3)) {
    GCproto *VAR_4 = FUNC_0(VAR_3);
    int VAR_5 = VAR_4->numparams;
    int VAR_6 = (int)(VAR_2->top - VAR_2->base);
    int VAR_7 = VAR_4->framesize;
    if ((VAR_4->flags & VAR_1)) VAR_7 += 1+VAR_6;
    FUNC_2(VAR_2, (MSize)VAR_7);
    VAR_5 -= VAR_6;
    return VAR_5 >= 0 ? VAR_5 : 0;
  } else {
    FUNC_2(VAR_2, VAR_0);
    return 0;
  }
}
