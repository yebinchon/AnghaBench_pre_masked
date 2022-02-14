
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct tty {int cy; int sy; scalar_t__ cx; scalar_t__ sx; TYPE_1__* term; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tty*,void const*,size_t) ;

void
FUNC_1(struct tty *VAR_2, const void *VAR_3, size_t VAR_4, u_int VAR_5)
{
 if ((VAR_2->term->flags & VAR_0) &&
     VAR_2->cy == VAR_2->sy - 1 &&
     VAR_2->cx + VAR_4 >= VAR_2->sx)
  VAR_4 = VAR_2->sx - VAR_2->cx - 1;

 FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_2->cx + VAR_5 > VAR_2->sx) {
  VAR_2->cx = (VAR_2->cx + VAR_5) - VAR_2->sx;
  if (VAR_2->cx <= VAR_2->sx)
   VAR_2->cy++;
  else
   VAR_2->cx = VAR_2->cy = VAR_1;
 } else
  VAR_2->cx += VAR_5;
}
