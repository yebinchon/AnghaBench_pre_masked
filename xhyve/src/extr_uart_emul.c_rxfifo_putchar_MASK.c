
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ opened; } ;
struct fifo {int num; int size; size_t windex; int * buf; } ;
struct uart_softc {int mev; TYPE_1__ tty; struct fifo rxfifo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_softc*) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_0, uint8_t VAR_1)
{
 struct fifo *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0->rxfifo;

 if (VAR_2->num < VAR_2->size) {
  VAR_2->buf[VAR_2->windex] = VAR_1;
  VAR_2->windex = (VAR_2->windex + 1) % VAR_2->size;
  VAR_2->num++;
  if (!FUNC_2(VAR_0)) {
   if (VAR_0->tty.opened) {



    VAR_3 = FUNC_1(VAR_0->mev);
    FUNC_0(VAR_3 == 0);
   }
  }
  return (0);
 } else
  return (-1);
}
