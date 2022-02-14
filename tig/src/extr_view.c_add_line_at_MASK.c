
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {unsigned long lines; unsigned long custom_lines; struct line* line; } ;
struct line {unsigned long lineno; int dirty; int type; void* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (struct line*,struct line*,unsigned long) ;
 int FUNC_3 (struct line*,int ,int) ;
 int FUNC_4 (struct line**,unsigned long,int) ;

struct line *
FUNC_5(struct view *VAR_0, unsigned long VAR_1, const void *VAR_2, enum line_type VAR_3, size_t VAR_4, bool VAR_5)
{
 struct line *VAR_6;
 unsigned long VAR_7;

 if (!FUNC_4(&VAR_0->line, VAR_0->lines, 1))
  return ((void*)0);

 if (VAR_4) {
  void *VAR_8 = FUNC_0(1, VAR_4);

  if (!VAR_8)
   return ((void*)0);

  if (VAR_2)
   FUNC_1(VAR_8, VAR_2, VAR_4);
  VAR_2 = VAR_8;
 }

 if (VAR_1 < VAR_0->lines) {
  VAR_0->lines++;
  VAR_6 = VAR_0->line + VAR_1;
  VAR_7 = VAR_6->lineno;

  FUNC_2(VAR_6 + 1, VAR_6, (VAR_0->lines - VAR_1) * sizeof(*VAR_0->line));
  while (VAR_1 < VAR_0->lines) {
   VAR_0->line[VAR_1].lineno++;
   VAR_0->line[VAR_1++].dirty = 1;
  }
 } else {
  VAR_6 = &VAR_0->line[VAR_0->lines++];
  VAR_7 = VAR_0->lines - VAR_0->custom_lines;
 }

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = VAR_3;
 VAR_6->data = (void *) VAR_2;
 VAR_6->dirty = 1;

 if (VAR_5)
  VAR_0->custom_lines++;
 else
  VAR_6->lineno = VAR_7;

 return VAR_6;
}
