
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int flags; } ;
struct tty_ctx {scalar_t__ ocx; scalar_t__ ocy; scalar_t__ num; scalar_t__ xoff; scalar_t__ ox; scalar_t__ sx; scalar_t__ yoff; int ptr; struct window_pane* wp; int cell; int wrapped; scalar_t__ bigger; } ;
struct tty {scalar_t__ cy; scalar_t__ cx; scalar_t__ sx; scalar_t__ rlower; TYPE_1__* term; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,int ,struct window_pane*) ;
 int FUNC_1 (struct tty*,struct tty_ctx const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct tty*,struct tty_ctx const*,scalar_t__) ;
 int FUNC_3 (struct tty*,struct tty_ctx const*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,struct tty_ctx const*) ;
 int FUNC_6 (struct tty*,int ,scalar_t__,scalar_t__) ;

void
FUNC_7(struct tty *VAR_2, const struct tty_ctx *VAR_3)
{
 struct window_pane *VAR_4 = VAR_3->wp;

 if (!FUNC_3(VAR_2, VAR_3, VAR_3->ocx, VAR_3->ocy, VAR_3->num, 1))
  return;

 if (VAR_3->bigger &&
     (VAR_3->xoff + VAR_3->ocx < VAR_3->ox ||
     VAR_3->xoff + VAR_3->ocx + VAR_3->num > VAR_3->ox + VAR_3->sx)) {
  if (!VAR_3->wrapped ||
      !FUNC_5(VAR_2, VAR_3) ||
      (VAR_2->term->flags & VAR_1) ||
      VAR_3->xoff + VAR_3->ocx != 0 ||
      VAR_3->yoff + VAR_3->ocy != VAR_2->cy + 1 ||
      VAR_2->cx < VAR_2->sx ||
      VAR_2->cy == VAR_2->rlower)
   FUNC_2(VAR_2, VAR_3, VAR_3->ocy);
  else
   VAR_4->flags |= VAR_0;
  return;
 }

 FUNC_4(VAR_2);
 FUNC_1(VAR_2, VAR_3, VAR_3->ocx, VAR_3->ocy);

 FUNC_0(VAR_2, VAR_3->cell, VAR_3->wp);
 FUNC_6(VAR_2, VAR_3->ptr, VAR_3->num, VAR_3->num);
}
