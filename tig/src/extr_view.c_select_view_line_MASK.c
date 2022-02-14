
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct position {scalar_t__ offset; size_t lineno; } ;
struct view {struct position pos; int * line; TYPE_1__* ops; int win; } ;
struct TYPE_2__ {int (* select ) (struct view*,int *) ;} ;


 int FUNC_0 (struct view*,size_t) ;
 scalar_t__ FUNC_1 (struct view*,scalar_t__,unsigned long) ;
 int FUNC_2 (struct view*) ;
 int FUNC_3 (struct view*,int *) ;
 scalar_t__ FUNC_4 (struct view*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct view *VAR_0, unsigned long VAR_1)
{
 struct position VAR_2 = VAR_0->pos;

 if (FUNC_1(VAR_0, VAR_0->pos.offset, VAR_1)) {
  if (FUNC_4(VAR_0)) {
   if (VAR_2.offset != VAR_0->pos.offset) {
    FUNC_2(VAR_0);
   } else {
    FUNC_0(VAR_0, VAR_2.lineno - VAR_0->pos.offset);
    FUNC_0(VAR_0, VAR_0->pos.lineno - VAR_0->pos.offset);
    FUNC_5(VAR_0->win);
   }
  } else {
   VAR_0->ops->select(VAR_0, &VAR_0->line[VAR_0->pos.lineno]);
  }
 }
}
