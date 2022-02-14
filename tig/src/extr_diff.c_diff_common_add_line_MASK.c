
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int lines; } ;
struct line {struct box* data; } ;
struct diff_stat_context {int cells; int cell; scalar_t__ cell_text; } ;
struct box_cell {int dummy; } ;
struct box {int cells; int cell; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 struct line* FUNC_0 (struct view*,int ,char const*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static struct line *
FUNC_5(struct view *VAR_0, const char *VAR_1, enum line_type VAR_2, struct diff_stat_context *VAR_3)
{
 char *VAR_4 = VAR_3->cell_text ? FUNC_2(VAR_3->cell_text, "") : ((void*)0);
 const char *VAR_5 = VAR_4 ? VAR_4 : VAR_1;
 struct line *VAR_6 = FUNC_0(VAR_0, VAR_0->lines, VAR_5, VAR_2, VAR_3->cells);
 struct box *VAR_7;

 FUNC_3(VAR_4);
 FUNC_1(VAR_3->cell_text);

 if (!VAR_6)
  return ((void*)0);

 VAR_7 = VAR_6->data;
 if (VAR_3->cells)
  FUNC_4(VAR_7->cell, VAR_3->cell, sizeof(struct box_cell) * VAR_3->cells);
 VAR_7->cells = VAR_3->cells;
 return VAR_6;
}
