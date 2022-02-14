
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2mouse_softc {int cur_x; int cur_y; int delta_y; int delta_x; } ;



__attribute__((used)) static void
FUNC_0(struct ps2mouse_softc *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->delta_x += VAR_1 - VAR_0->cur_x;
 VAR_0->delta_y += VAR_0->cur_y - VAR_2;
 VAR_0->cur_x = VAR_1;
 VAR_0->cur_y = VAR_2;
}
