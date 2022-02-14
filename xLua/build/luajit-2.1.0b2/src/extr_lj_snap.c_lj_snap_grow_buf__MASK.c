
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int snap; } ;
struct TYPE_6__ {int snapbuf; TYPE_1__ cur; int sizesnap; int L; int * param; } ;
typedef TYPE_2__ jit_State ;
typedef scalar_t__ MSize ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(jit_State *VAR_3, MSize VAR_4)
{
  MSize VAR_5 = (MSize)VAR_3->param[VAR_0];
  if (VAR_4 > VAR_5)
    FUNC_1(VAR_3, VAR_1);
  FUNC_0(VAR_3->L, VAR_3->snapbuf, VAR_3->sizesnap, VAR_5, VAR_2);
  VAR_3->cur.snap = VAR_3->snapbuf;
}
