
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; scalar_t__ lineno; } ;
struct view {scalar_t__ lines; int height; int has_scrolled; int win; TYPE_1__ pos; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct view*,int) ;
 int FUNC_3 (struct view*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(struct view *VAR_0, int VAR_1)
{
 bool VAR_2 = 0;


 VAR_0->pos.offset += VAR_1;

 FUNC_1(0 <= VAR_0->pos.offset && VAR_0->pos.offset < VAR_0->lines);
 FUNC_1(VAR_1);


 if (VAR_0->pos.lineno < VAR_0->pos.offset) {
  VAR_0->pos.lineno = VAR_0->pos.offset;
  VAR_2 = 1;
 } else if (VAR_0->pos.lineno >= VAR_0->pos.offset + VAR_0->height) {
  VAR_0->pos.lineno = VAR_0->pos.offset + VAR_0->height - 1;
  VAR_2 = 1;
 }

 FUNC_1(VAR_0->pos.offset <= VAR_0->pos.lineno && VAR_0->pos.lineno < VAR_0->lines);


 if (VAR_0->height < FUNC_0(VAR_1)) {
  FUNC_3(VAR_0);

 } else {
  int VAR_3 = VAR_1 > 0 ? VAR_0->height - VAR_1 : 0;
  int VAR_4 = VAR_3 + FUNC_0(VAR_1);

  FUNC_5(VAR_0->win, 1);
  FUNC_7(VAR_0->win, VAR_1);
  FUNC_5(VAR_0->win, 0);

  while (VAR_3 < VAR_4 && FUNC_2(VAR_0, VAR_3))
   VAR_3++;

  if (VAR_2)
   FUNC_2(VAR_0, VAR_0->pos.lineno - VAR_0->pos.offset);
  FUNC_6(VAR_0->win);
 }

 VAR_0->has_scrolled = 1;
 FUNC_4();
}
