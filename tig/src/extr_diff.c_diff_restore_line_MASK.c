
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int lines; struct line* line; } ;
struct line {scalar_t__ type; } ;
struct TYPE_2__ {unsigned long lineno; unsigned long offset; } ;
struct diff_state {unsigned int lineno; TYPE_1__ pos; int * file; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct view*,struct line*) ;
 char* FUNC_1 (struct view*,struct line*) ;
 struct line* FUNC_2 (struct view*,struct line*,scalar_t__) ;
 struct line* FUNC_3 (struct view*,struct line*,int ) ;
 int FUNC_4 (struct view*,unsigned long,unsigned long) ;
 int FUNC_5 (struct view*) ;
 int FUNC_6 (char const*,int *) ;
 scalar_t__ FUNC_7 (struct view*,struct line*) ;

void
FUNC_8(struct view *VAR_4, struct diff_state *VAR_5)
{
 struct line *VAR_6 = &VAR_4->line[VAR_4->lines - 1];

 if (!VAR_5->file)
  return;

 while ((VAR_6 = FUNC_3(VAR_4, VAR_6, VAR_3))) {
  const char *VAR_7 = FUNC_1(VAR_4, VAR_6);

  if (VAR_7 && !FUNC_6(VAR_7, VAR_5->file))
   break;
  VAR_6--;
 }

 VAR_5->file = ((void*)0);

 if (!VAR_6)
  return;

 while ((VAR_6 = FUNC_2(VAR_4, VAR_6, VAR_0))) {
  unsigned int VAR_8 = FUNC_0(VAR_4, VAR_6);

  for (VAR_6++; FUNC_7(VAR_4, VAR_6) && VAR_6->type != VAR_0; VAR_6++) {
   if (VAR_8 == VAR_5->lineno) {
    unsigned long VAR_9 = VAR_6 - VAR_4->line;
    unsigned long VAR_10 = VAR_9 - (VAR_5->pos.lineno - VAR_5->pos.offset);

    FUNC_4(VAR_4, VAR_10, VAR_9);
    FUNC_5(VAR_4);
    return;
   }
   if (VAR_6->type != VAR_1 &&
       VAR_6->type != VAR_2)
    VAR_8++;
  }
 }
}
