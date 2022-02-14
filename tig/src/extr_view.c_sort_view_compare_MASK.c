
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct view_column_data {int member_0; } ;
struct sort_state {scalar_t__ reverse; } ;
struct line {int dummy; } ;
typedef enum view_column_type { ____Placeholder_view_column_type } view_column_type ;
struct TYPE_7__ {TYPE_1__* ops; struct sort_state sort; } ;
struct TYPE_6__ {int (* get_column_data ) (TYPE_2__*,struct line const*,struct view_column_data*) ;} ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int,struct line const*,struct view_column_data*,struct line const*,struct view_column_data*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (TYPE_2__*,struct line const*,struct view_column_data*) ;
 int FUNC_4 (TYPE_2__*,struct line const*,struct view_column_data*) ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_5(const void *VAR_2, const void *VAR_3)
{
 const struct line *VAR_4 = VAR_2;
 const struct line *VAR_5 = VAR_3;
 struct view_column_data VAR_6 = {0};
 struct view_column_data VAR_7 = {0};
 struct sort_state *VAR_8 = &VAR_0->sort;
 enum view_column_type VAR_9 = FUNC_2(VAR_0);
 int VAR_10;
 int VAR_11;

 if (!VAR_0->ops->get_column_data(VAR_0, VAR_4, &VAR_6))
  return -1;
 else if (!VAR_0->ops->get_column_data(VAR_0, VAR_5, &VAR_7))
  return 1;

 VAR_10 = FUNC_1(VAR_9, 1, VAR_4, &VAR_6, VAR_5, &VAR_7);



 for (VAR_11 = 0; !VAR_10 && VAR_11 < FUNC_0(VAR_1); VAR_11++)
  if (VAR_9 != VAR_1[VAR_11])
   VAR_10 = FUNC_1(VAR_1[VAR_11], 0,
        VAR_4, &VAR_6,
        VAR_5, &VAR_7);

 return VAR_8->reverse ? -VAR_10 : VAR_10;
}
