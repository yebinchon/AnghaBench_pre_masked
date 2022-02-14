
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ bcnt; size_t brd; int * buffer; } ;
struct atkbdc_softc {int status; TYPE_1__ kbd; int ps2mouse_sc; int outport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atkbdc_softc*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct atkbdc_softc *VAR_5, uint8_t *VAR_6)
{
 if (FUNC_2(VAR_5->ps2mouse_sc, VAR_6) == 0) {
  if (FUNC_1(VAR_5->ps2mouse_sc) == 0) {
   if (VAR_5->kbd.bcnt == 0)
    VAR_5->status &= ~(VAR_3 |
                    VAR_4);
   else
    VAR_5->status &= ~(VAR_3);
   VAR_5->outport &= ~VAR_1;
  }

  FUNC_0(VAR_5);
  return;
 }

 if (VAR_5->kbd.bcnt > 0) {
  *VAR_6 = VAR_5->kbd.buffer[VAR_5->kbd.brd];
  VAR_5->kbd.brd = (VAR_5->kbd.brd + 1) % VAR_0;
  VAR_5->kbd.bcnt--;
  if (VAR_5->kbd.bcnt == 0) {
   VAR_5->status &= ~VAR_4;
   VAR_5->outport &= ~VAR_2;
  }

  FUNC_0(VAR_5);
 }

 if (FUNC_1(VAR_5->ps2mouse_sc) == 0 && VAR_5->kbd.bcnt == 0) {
  VAR_5->status &= ~(VAR_3 | VAR_4);
 }
}
