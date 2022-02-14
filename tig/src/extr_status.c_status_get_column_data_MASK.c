
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct view_column_data {int file_name; int * status; struct view_column* section; } ;
struct TYPE_4__ {char const* text; int type; } ;
struct TYPE_5__ {TYPE_1__ section; } ;
struct view_column {TYPE_2__ opt; int type; } ;
struct view {struct line const* line; } ;
struct TYPE_6__ {int name; } ;
struct status {TYPE_3__ new; int status; } ;
struct line {int type; struct status* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;

 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static bool
FUNC_0(struct view *VAR_5, const struct line *VAR_6, struct view_column_data *VAR_7)
{
 struct status *VAR_8 = VAR_6->data;

 if (!VAR_8) {
  static struct view_column VAR_9;
  const char *VAR_10;
  enum line_type VAR_11;

  VAR_7->section = &VAR_9;
  VAR_7->section->type = VAR_2;

  switch (VAR_6->type) {
  case 130:
   VAR_11 = VAR_1;
   VAR_10 = "Changes to be committed:";
   break;

  case 129:
   VAR_11 = VAR_1;
   VAR_10 = "Changes not staged for commit:";
   break;

  case 128:
   VAR_11 = VAR_1;
   VAR_10 = "Untracked files:";
   break;

  case 131:
   VAR_11 = VAR_0;
   VAR_10 = "  (no files)";
   if (!VAR_3
       && VAR_5->line < VAR_6
       && VAR_6[-1].type == 128)
    VAR_10 = "  (not shown)";
   break;

  case 132:
   VAR_11 = 132;
   VAR_10 = VAR_4;
   break;

  default:
   return 0;
  }

  VAR_7->section->opt.section.text = VAR_10;
  VAR_7->section->opt.section.type = VAR_11;

 } else {
  VAR_7->status = &VAR_8->status;
  VAR_7->file_name = VAR_8->new.name;
 }
 return 1;
}
