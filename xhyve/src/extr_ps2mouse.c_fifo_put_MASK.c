
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fifo {int num; int size; size_t windex; int * buf; } ;
struct ps2mouse_softc {struct fifo fifo; } ;



__attribute__((used)) static void
FUNC_0(struct ps2mouse_softc *VAR_0, uint8_t VAR_1)
{
 struct fifo *VAR_2;

 VAR_2 = &VAR_0->fifo;
 if (VAR_2->num < VAR_2->size) {
  VAR_2->buf[VAR_2->windex] = VAR_1;
  VAR_2->windex = (VAR_2->windex + 1) % VAR_2->size;
  VAR_2->num++;
 }
}
