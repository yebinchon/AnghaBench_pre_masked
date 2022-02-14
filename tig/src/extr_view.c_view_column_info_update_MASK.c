
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct view_column_data {int * line_number; int reflog; int member_0; } ;
struct TYPE_20__ {int width; int maxwidth; } ;
struct TYPE_19__ {int width; } ;
struct TYPE_18__ {int width; } ;
struct TYPE_17__ {int width; } ;
struct TYPE_16__ {int width; } ;
struct TYPE_15__ {int width; int maxwidth; } ;
struct TYPE_14__ {int width; } ;
struct TYPE_13__ {int width; int maxwidth; } ;
struct TYPE_11__ {TYPE_9__ ref; TYPE_8__ mode; TYPE_7__ line_number; TYPE_6__ id; TYPE_5__ file_size; TYPE_4__ file_name; TYPE_3__ date; TYPE_2__ author; } ;
struct view_column {int type; int width; TYPE_10__ opt; struct view_column* next; } ;
struct view {int force_redraw; int lines; struct view_column* columns; TYPE_1__* ops; } ;
struct line {int dummy; } ;
struct TYPE_12__ {int (* get_column_data ) (struct view*,struct line*,struct view_column_data*) ;} ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct view*,struct line*,struct view_column_data*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct view*,struct view_column_data*,struct view_column*) ;

bool
FUNC_4(struct view *VAR_1, struct line *VAR_2)
{
 struct view_column_data VAR_3 = {0};
 struct view_column *VAR_4;
 bool VAR_5 = 0;

 if (!VAR_1->ops->get_column_data(VAR_1, VAR_2, &VAR_3))
  return 0;

 for (VAR_4 = VAR_1->columns; VAR_4; VAR_4 = VAR_4->next) {
  const char *VAR_6 = FUNC_3(VAR_1, &VAR_3, VAR_4);
  int VAR_7 = 0;
  int VAR_8 = 0;

  switch (VAR_4->type) {
  case 139:
   VAR_7 = VAR_4->opt.author.width;
   VAR_8 = VAR_7 == 0 ? VAR_4->opt.author.maxwidth : 0;
   break;

  case 138:
   break;

  case 137:
   VAR_7 = VAR_4->opt.date.width;
   break;

  case 136:
   VAR_7 = VAR_4->opt.file_name.width;
   VAR_8 = VAR_7 == 0 ? VAR_4->opt.file_name.maxwidth : 0;
   break;

  case 135:
   VAR_7 = VAR_4->opt.file_size.width;
   break;

  case 134:
   VAR_7 = VAR_4->opt.id.width;
   if (!VAR_7)
    VAR_7 = VAR_0;
   if (!VAR_3.reflog && !VAR_7)
    VAR_7 = 7;
   break;

  case 133:
   VAR_7 = VAR_4->opt.line_number.width;
   if (!VAR_7) {
    if (VAR_3.line_number)
     VAR_7 = FUNC_0(*VAR_3.line_number);
    else
     VAR_7 = FUNC_0(VAR_1->lines);
   }
   if (VAR_7 < 3)
    VAR_7 = 3;
   break;

  case 132:
   VAR_7 = VAR_4->opt.mode.width;
   break;

  case 131:
   VAR_7 = VAR_4->opt.ref.width;
   VAR_8 = VAR_7 == 0 ? VAR_4->opt.ref.maxwidth : 0;
   break;

  case 130:
   break;

  case 129:
   break;

  case 128:
   break;
  }

  if (*VAR_6 && !VAR_7)
   VAR_7 = FUNC_2(VAR_6);

  if ((VAR_8 > 0) && (VAR_7 > VAR_8))
   VAR_7 = VAR_8;

  if (VAR_7 > VAR_4->width) {
   VAR_4->width = VAR_7;
   VAR_5 = 1;
  }
 }

 if (VAR_5)
  VAR_1->force_redraw = 1;
 return VAR_5;
}
