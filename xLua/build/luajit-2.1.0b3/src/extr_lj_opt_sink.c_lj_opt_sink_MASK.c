
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int nsnap; int * snap; } ;
struct TYPE_9__ {int const flags; scalar_t__ loopref; TYPE_1__ cur; scalar_t__* chain; } ;
typedef TYPE_2__ jit_State ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(jit_State *VAR_10)
{
  const uint32_t VAR_11 = (VAR_8|VAR_7|
    VAR_5|VAR_4|VAR_6);
  if ((VAR_10->flags & VAR_11) == VAR_11 &&
      (VAR_10->chain[VAR_3] || VAR_10->chain[VAR_2] ||
       (VAR_9 && (VAR_10->chain[VAR_0] || VAR_10->chain[VAR_1])))) {
    if (!VAR_10->loopref)
      FUNC_1(VAR_10, &VAR_10->cur.snap[VAR_10->cur.nsnap-1]);
    FUNC_0(VAR_10);
    if (VAR_10->loopref)
      FUNC_2(VAR_10);
    FUNC_3(VAR_10);
  }
}
