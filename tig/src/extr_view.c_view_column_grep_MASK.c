
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct view_column_data {int refs; int member_0; } ;
struct TYPE_4__ {scalar_t__ refs; } ;
struct TYPE_5__ {TYPE_1__ commit_title; } ;
struct view_column {scalar_t__ type; TYPE_2__ opt; struct view_column* next; } ;
struct view {struct view_column* columns; TYPE_3__* ops; } ;
struct line {int dummy; } ;
struct TYPE_6__ {int (* get_column_data ) (struct view*,struct line*,struct view_column_data*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct view*,struct view_column*,int ) ;
 scalar_t__ FUNC_1 (struct view*,char const**) ;
 int FUNC_2 (struct view*,struct line*,struct view_column_data*) ;
 char const* FUNC_3 (struct view*,struct view_column_data*,struct view_column*) ;

bool
FUNC_4(struct view *VAR_1, struct line *VAR_2)
{
 struct view_column_data VAR_3 = {0};
 bool VAR_4 = VAR_1->ops->get_column_data(VAR_1, VAR_2, &VAR_3);
 struct view_column *VAR_5;

 if (!VAR_4)
  return 0;

 for (VAR_5 = VAR_1->columns; VAR_5; VAR_5 = VAR_5->next) {
  const char *VAR_6[] = {
   FUNC_3(VAR_1, &VAR_3, VAR_5),
   ((void*)0)
  };

  if (FUNC_1(VAR_1, VAR_6))
   return 1;

  if (VAR_5->type == VAR_0 &&
      VAR_5->opt.commit_title.refs &&
      FUNC_0(VAR_1, VAR_5, VAR_3.refs))
   return 1;
 }

 return 0;
}
