
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window_pane {int dummy; } ;
struct tty {int cy; int sy; int cx; int sx; TYPE_1__* term; } ;
struct TYPE_4__ {int size; int* data; int width; } ;
struct grid_cell {int flags; TYPE_2__ data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,struct grid_cell const*,struct window_pane*) ;
 struct grid_cell* FUNC_1 (struct tty*,struct grid_cell const*) ;
 int FUNC_2 (struct tty*,int) ;
 int FUNC_3 (struct tty*,int*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_2, const struct grid_cell *VAR_3, struct window_pane *VAR_4)
{
 const struct grid_cell *VAR_5;


 if ((VAR_2->term->flags & VAR_1) &&
     VAR_2->cy == VAR_2->sy - 1 &&
     VAR_2->cx == VAR_2->sx - 1)
  return;


 if (VAR_3->flags & VAR_0)
  return;


 FUNC_0(VAR_2, VAR_3, VAR_4);


 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5->data.size == 1) {
  if (*VAR_5->data.data < 0x20 || *VAR_5->data.data == 0x7f)
   return;
  FUNC_2(VAR_2, *VAR_5->data.data);
  return;
 }


 FUNC_3(VAR_2, VAR_5->data.data, VAR_5->data.size, VAR_5->data.width);
}
