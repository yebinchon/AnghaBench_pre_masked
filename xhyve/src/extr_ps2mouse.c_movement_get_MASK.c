
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int num; int size; } ;
struct ps2mouse_softc {int status; scalar_t__ delta_x; scalar_t__ delta_y; TYPE_1__ fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ps2mouse_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct ps2mouse_softc *VAR_8)
{
 uint8_t VAR_9, VAR_10, VAR_11;

 VAR_9 = VAR_0;
 VAR_9 |= VAR_8->status & (VAR_1 |
     VAR_3 | VAR_2);

 if (VAR_8->delta_x >= 0) {
  if (VAR_8->delta_x > 255) {
   VAR_9 |= VAR_4;
   VAR_10 = 255;
  } else
   VAR_10 = (uint8_t)VAR_8->delta_x;
 } else {
  VAR_9 |= VAR_5;
  if (VAR_8->delta_x < -255) {
   VAR_9 |= VAR_4;
   VAR_10 = 255;
  } else
   VAR_10 = (uint8_t)VAR_8->delta_x;
 }
 VAR_8->delta_x = 0;

 if (VAR_8->delta_y >= 0) {
  if (VAR_8->delta_y > 255) {
   VAR_9 |= VAR_6;
   VAR_11 = 255;
  } else
   VAR_11 = (uint8_t)VAR_8->delta_y;
 } else {
  VAR_9 |= VAR_7;
  if (VAR_8->delta_y < -255) {
   VAR_9 |= VAR_6;
   VAR_11 = 255;
  } else
   VAR_11 = (uint8_t)VAR_8->delta_y;
 }
 VAR_8->delta_y = 0;

 if (VAR_8->fifo.num < (VAR_8->fifo.size - 3)) {
  FUNC_0(VAR_8, VAR_9);
  FUNC_0(VAR_8, VAR_10);
  FUNC_0(VAR_8, VAR_11);
 }
}
