
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_finder_line {scalar_t__ matches; } ;
struct TYPE_2__ {size_t lineno; } ;
struct file_finder {int lines; scalar_t__ searchlen; TYPE_1__ pos; struct file_finder_line** line; int search; struct file_finder_line** file; } ;


 scalar_t__ FUNC_0 (struct file_finder_line*,int ) ;
 int FUNC_1 (struct file_finder_line**,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct file_finder *VAR_0)
{
 struct file_finder_line *VAR_1 = VAR_0->line[VAR_0->pos.lineno];
 size_t VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_0->line, 0, sizeof(*VAR_0->line) * VAR_0->lines);
 VAR_0->lines = 0;

 for (VAR_3 = 0; VAR_0->file && VAR_0->file[VAR_3]; VAR_3++) {
  struct file_finder_line *VAR_4 = VAR_0->file[VAR_3];

  if (VAR_4 == VAR_1)
   VAR_1 = ((void*)0);

  if (VAR_4->matches + 1 < VAR_0->searchlen) {
   continue;
  }

  if (VAR_4->matches >= VAR_0->searchlen) {
   VAR_4->matches = VAR_0->searchlen;
  } else {
   VAR_4->matches = FUNC_0(VAR_4, VAR_0->search);
   if (VAR_4->matches < VAR_0->searchlen)
    continue;
  }

  if (VAR_1 != ((void*)0))
   VAR_2++;

  VAR_0->line[VAR_0->lines++] = VAR_4;
 }

 VAR_0->pos.lineno = VAR_2;
}
