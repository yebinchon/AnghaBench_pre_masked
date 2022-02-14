
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {scalar_t__ traceno; scalar_t__ root; scalar_t__ link; scalar_t__ linktype; } ;
struct TYPE_9__ {scalar_t__ framedepth; scalar_t__ retdepth; int flags; int mergesnap; scalar_t__ needsnap; TYPE_1__ cur; scalar_t__ retryrec; } ;
typedef TYPE_2__ jit_State ;
typedef scalar_t__ TraceNo ;
typedef scalar_t__ TraceLink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(jit_State *VAR_2, TraceLink VAR_3, TraceNo VAR_4)
{




  FUNC_2(VAR_2);
  VAR_2->cur.linktype = (uint8_t)VAR_3;
  VAR_2->cur.link = (uint16_t)VAR_4;

  if (VAR_4 == VAR_2->cur.traceno && VAR_2->framedepth + VAR_2->retdepth == 0) {
    if ((VAR_2->flags & VAR_0))
      goto nocanon;
    if (VAR_2->cur.root)
      VAR_2->cur.link = VAR_2->cur.root;
  }
  FUNC_0(VAR_2);
nocanon:

  FUNC_1(VAR_2);
  VAR_2->needsnap = 0;
  VAR_2->mergesnap = 1;
}
