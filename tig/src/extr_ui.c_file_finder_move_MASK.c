
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineno; int offset; } ;
struct file_finder {int lines; int height; TYPE_1__ pos; } ;



__attribute__((used)) static void
FUNC_0(struct file_finder *VAR_0, int VAR_1)
{
 if (VAR_1 < 0 && VAR_0->pos.lineno <= -VAR_1)
  VAR_0->pos.lineno = 0;
 else
  VAR_0->pos.lineno += VAR_1;

 if (VAR_0->pos.lineno >= VAR_0->lines) {
  if (VAR_0->lines > 0)
   VAR_0->pos.lineno = VAR_0->lines - 1;
  else
   VAR_0->pos.lineno = 0;
        }

 if (VAR_0->pos.offset + VAR_0->height <= VAR_0->pos.lineno)
  VAR_0->pos.offset = VAR_0->pos.lineno - (VAR_0->height / 2);

 if (VAR_0->pos.offset > VAR_0->pos.lineno)
  VAR_0->pos.offset = VAR_0->pos.lineno;

 if (VAR_0->lines <= VAR_0->height)
  VAR_0->pos.offset = 0;
}
