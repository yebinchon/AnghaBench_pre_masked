
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; scalar_t__ windex; scalar_t__ rindex; } ;
struct ps2mouse_softc {int ctrlenable; int mtx; TYPE_1__ fifo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ps2mouse_softc *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->mtx);
 if (VAR_1)
  VAR_0->ctrlenable = 1;
 else {
  VAR_0->ctrlenable = 0;
  VAR_0->fifo.rindex = 0;
  VAR_0->fifo.windex = 0;
  VAR_0->fifo.num = 0;
 }
 FUNC_1(&VAR_0->mtx);
}
