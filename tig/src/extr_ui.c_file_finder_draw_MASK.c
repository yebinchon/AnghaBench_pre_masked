
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct position {size_t lineno; size_t offset; } ;
struct file_finder_line {scalar_t__ matches; } ;
struct file_finder {int height; scalar_t__ searchlen; int win; int lines; struct file_finder_line** line; struct position pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file_finder*,struct file_finder_line*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,char*,int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct file_finder *VAR_3)
{
 struct position *VAR_4 = &VAR_3->pos;
 struct file_finder_line *VAR_5 = VAR_3->line[VAR_4->lineno];
 struct file_finder_line **VAR_6 = &VAR_3->line[VAR_4->offset];
 int VAR_7;

 FUNC_2(VAR_3->win, FUNC_1(((void*)0), VAR_1));
 FUNC_4(VAR_3->win);

 for (VAR_7 = 0; *VAR_6 && VAR_7 < VAR_3->height - 1; VAR_6++) {
  struct file_finder_line *VAR_8 = *VAR_6;

  if (VAR_3->searchlen != VAR_8->matches)
   continue;

  FUNC_5(VAR_3->win, VAR_7++, 0);
  if (VAR_8 == VAR_5) {
   FUNC_2(VAR_3->win, FUNC_1(((void*)0), VAR_0));
  }
  FUNC_0(VAR_3, VAR_8);
  if (VAR_8 == VAR_5) {
   FUNC_3(VAR_3->win);
   FUNC_2(VAR_3->win, FUNC_1(((void*)0), VAR_1));
  }
 }

 FUNC_5(VAR_3->win, VAR_3->height - 1, 0);
 FUNC_2(VAR_3->win, FUNC_1(((void*)0), VAR_2));
 FUNC_6(VAR_3->win, "[finder] file %d of %d", VAR_4->lineno + 1, VAR_3->lines);
 FUNC_3(VAR_3->win);
 FUNC_7(VAR_3->win);
}
