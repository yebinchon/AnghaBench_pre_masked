
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view_column_data {char* text; scalar_t__* file_name; int * line_number; struct view_column* section; } ;
struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ file_name; } ;
struct view_column {TYPE_2__ opt; int type; } ;
struct view {int dummy; } ;
struct line {scalar_t__ type; } ;
struct grep_line {char* text; scalar_t__* file; int lineno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct grep_line* FUNC_0 (struct line const*) ;

__attribute__((used)) static bool
FUNC_1(struct view *VAR_4, const struct line *VAR_5, struct view_column_data *VAR_6)
{
 struct grep_line *VAR_7 = FUNC_0(VAR_5);

 if (VAR_5->type == VAR_1) {
  static struct view_column VAR_8;

  VAR_8.type = VAR_3;
  VAR_6->section = &VAR_8;
  VAR_6->text = "--";
  return 1;
 }

 if (*VAR_7->file && !*VAR_7->text) {
  static struct view_column VAR_9;

  VAR_9.type = VAR_2;
  VAR_9.opt.file_name.display = VAR_0;

  VAR_6->section = &VAR_9;
 }

 VAR_6->line_number = &VAR_7->lineno;
 VAR_6->file_name = VAR_7->file;
 VAR_6->text = VAR_7->text;
 return 1;
}
