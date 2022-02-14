
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int attr; } ;
struct tty {int cy; int sy; int cx; int sx; scalar_t__ rlower; TYPE_2__* term; TYPE_1__ cell; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (struct tty*,int) ;
 int FUNC_2 (struct tty*,...) ;
 int FUNC_3 (struct tty*,int ,scalar_t__,int) ;

void
FUNC_4(struct tty *VAR_3, u_char VAR_4)
{
 const char *VAR_5;

 if ((VAR_3->term->flags & VAR_1) &&
     VAR_4 >= 0x20 && VAR_4 != 0x7f &&
     VAR_3->cy == VAR_3->sy - 1 &&
     VAR_3->cx + 1 >= VAR_3->sx)
  return;

 if (VAR_3->cell.attr & VAR_0) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if (VAR_5 != ((void*)0))
   FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_5));
  else
   FUNC_2(VAR_3, &VAR_4, 1);
 } else
  FUNC_2(VAR_3, &VAR_4, 1);

 if (VAR_4 >= 0x20 && VAR_4 != 0x7f) {
  if (VAR_3->cx >= VAR_3->sx) {
   VAR_3->cx = 1;
   if (VAR_3->cy != VAR_3->rlower)
    VAR_3->cy++;






   if (VAR_3->term->flags & VAR_1)
    FUNC_3(VAR_3, VAR_2, VAR_3->cy, VAR_3->cx);
  } else
   VAR_3->cx++;
 }
}
