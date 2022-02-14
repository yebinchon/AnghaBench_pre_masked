
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int nsnap; int nsnapmap; scalar_t__ nins; TYPE_4__* snap; } ;
struct TYPE_11__ {scalar_t__ irt; } ;
struct TYPE_9__ {TYPE_1__ cur; TYPE_7__ guardemit; scalar_t__ mergesnap; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_10__ {scalar_t__ ref; int mapofs; } ;
typedef int MSize ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_7__) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*,int) ;

void FUNC_5(jit_State *VAR_2)
{
  MSize VAR_3 = VAR_2->cur.nsnap;
  MSize VAR_4 = VAR_2->cur.nsnapmap;

  if ((VAR_3 > 0 && VAR_2->cur.snap[VAR_3-1].ref == VAR_2->cur.nins) ||
      (VAR_2->mergesnap && !FUNC_2(VAR_2->guardemit))) {
    if (VAR_3 == 1) {
      FUNC_1(FUNC_0(VAR_1, VAR_0), 0, 0);
      goto nomerge;
    }
    VAR_4 = VAR_2->cur.snap[--VAR_3].mapofs;
  } else {
  nomerge:
    FUNC_3(VAR_2, VAR_3+1);
    VAR_2->cur.nsnap = (uint16_t)(VAR_3+1);
  }
  VAR_2->mergesnap = 0;
  VAR_2->guardemit.irt = 0;
  FUNC_4(VAR_2, &VAR_2->cur.snap[VAR_3], VAR_4);
}
