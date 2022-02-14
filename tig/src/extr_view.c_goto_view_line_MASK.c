
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long offset; unsigned long lineno; } ;
struct view {unsigned long lines; unsigned long height; TYPE_1__ pos; } ;



bool
FUNC_0(struct view *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 if (VAR_2 >= VAR_0->lines)
  VAR_2 = VAR_0->lines > 0 ? VAR_0->lines - 1 : 0;

 if (VAR_1 > VAR_2 || VAR_1 + VAR_0->height <= VAR_2) {
  unsigned long VAR_3 = VAR_0->height / 2;

  if (VAR_2 > VAR_3)
   VAR_1 = VAR_2 - VAR_3;
  else
   VAR_1 = 0;
 }

 if (VAR_1 != VAR_0->pos.offset || VAR_2 != VAR_0->pos.lineno) {
  VAR_0->pos.offset = VAR_1;
  VAR_0->pos.lineno = VAR_2;
  return 1;
 }

 return 0;
}
