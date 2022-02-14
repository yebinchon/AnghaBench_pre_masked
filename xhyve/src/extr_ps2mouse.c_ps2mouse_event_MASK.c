
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ num; } ;
struct ps2mouse_softc {int status; int atkbdc_sc; TYPE_1__ fifo; int mtx; int ctrlenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ps2mouse_softc*) ;
 int FUNC_2 (struct ps2mouse_softc*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(uint8_t VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 struct ps2mouse_softc *VAR_8 = VAR_7;

 FUNC_3(&VAR_8->mtx);
 FUNC_2(VAR_8, VAR_5, VAR_6);

 VAR_8->status &= ~(VAR_1 |
     VAR_3 | VAR_2);
 if (VAR_4 & (1 << 0))
  VAR_8->status |= VAR_1;
 if (VAR_4 & (1 << 1))
  VAR_8->status |= VAR_2;
 if (VAR_4 & (1 << 2))
  VAR_8->status |= VAR_3;

 if ((VAR_8->status & VAR_0) == 0 || !VAR_8->ctrlenable) {

  FUNC_4(&VAR_8->mtx);
  return;
 }

 FUNC_1(VAR_8);
 FUNC_4(&VAR_8->mtx);

 if (VAR_8->fifo.num > 0)
  FUNC_0(VAR_8->atkbdc_sc, 0);
}
