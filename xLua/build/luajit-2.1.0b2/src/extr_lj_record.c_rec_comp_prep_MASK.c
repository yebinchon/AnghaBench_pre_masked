
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nsnap; scalar_t__ nins; TYPE_1__* snap; } ;
struct TYPE_8__ {TYPE_2__ cur; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_6__ {scalar_t__ ref; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_2)
{

  if (VAR_2->cur.nsnap == 1 && VAR_2->cur.snap[0].ref == VAR_2->cur.nins)
    FUNC_1(FUNC_0(VAR_1, VAR_0), 0, 0);
  FUNC_2(VAR_2);
}
