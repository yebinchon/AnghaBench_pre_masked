
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct view_column_data {TYPE_3__* graph; } ;
struct TYPE_4__ {size_t lineno; } ;
struct view {size_t lines; TYPE_2__* ops; struct line* line; TYPE_1__ pos; } ;
struct line {struct commit* data; } ;
struct graph_canvas {int dummy; } ;
struct commit {struct graph_canvas graph; } ;
typedef size_t ssize_t ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_6__ {int (* is_merge ) (struct graph_canvas*) ;} ;
struct TYPE_5__ {int (* get_column_data ) (struct view*,struct line*,struct view_column_data*) ;} ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (struct view*,size_t) ;
 int FUNC_2 (struct view*,struct line*,struct view_column_data*) ;
 int FUNC_3 (struct graph_canvas*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static enum status_code
FUNC_5(struct view *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4;
 size_t VAR_5;

 if (VAR_3)
  VAR_5 = VAR_1->lines;
 else
  VAR_5 = VAR_2 > 0 ? VAR_1->lines - VAR_1->pos.lineno
        : VAR_1->pos.lineno;

 for (VAR_4 = VAR_2; FUNC_0(VAR_4) < VAR_5; VAR_4 += VAR_2) {
  ssize_t VAR_6 = VAR_1->pos.lineno + VAR_4;
  if (VAR_6 < 0)
   VAR_6 += VAR_1->lines;
  else if (VAR_6 >= VAR_1->lines)
   VAR_6 -= VAR_1->lines;

  struct line *VAR_7 = &VAR_1->line[VAR_6];
  struct commit *VAR_8 = VAR_7->data;
  struct graph_canvas *VAR_9 = &VAR_8->graph;
  struct view_column_data VAR_10;

  if (!VAR_1->ops->get_column_data(VAR_1, VAR_7, &VAR_10))
   continue;

  if (VAR_10.graph && !VAR_10.graph->is_merge(VAR_9))
   continue;

  FUNC_1(VAR_1, VAR_6);
  return VAR_0;
 }

 return FUNC_4("No merge commit found");
}
