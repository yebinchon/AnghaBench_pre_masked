
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int lines; struct line* line; scalar_t__ width; } ;
struct line {size_t lineno; int wrapped; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 struct line* FUNC_0 (struct view*,int,char const*,size_t,int,int,int) ;
 int VAR_0 ;
 size_t FUNC_1 (char const*,size_t,int ,scalar_t__) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static struct line *
FUNC_3(struct view *VAR_1, const char *VAR_2, enum line_type VAR_3)
{
 size_t VAR_4 = 0;
 bool VAR_5 = 0;
 size_t VAR_6 = FUNC_2(VAR_2);
 size_t VAR_7 = 0;

 while (VAR_6 > 0 || !VAR_5) {
  bool VAR_8 = !!VAR_4;
  size_t VAR_9 = FUNC_1(VAR_2, VAR_6, VAR_0, VAR_1->width - !!VAR_8);
  struct line *VAR_10;

  VAR_10 = FUNC_0(VAR_1, VAR_1->lines, VAR_2, VAR_9, VAR_3, 1, VAR_8);
  if (!VAR_10)
   break;
  if (!VAR_5) {
   VAR_4 = VAR_1->lines - 1;
   VAR_5 = 1;
  }

  if (!VAR_8)
   VAR_7 = VAR_10->lineno;

  VAR_10->wrapped = VAR_8;
  VAR_10->lineno = VAR_7;

  VAR_6 -= VAR_9;
  VAR_2 += VAR_9;
 }

 return VAR_5 ? &VAR_1->line[VAR_4] : ((void*)0);
}
