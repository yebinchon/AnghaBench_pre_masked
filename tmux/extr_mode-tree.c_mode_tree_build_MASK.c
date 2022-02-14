
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct screen {int dummy; } ;
struct mode_tree_data {size_t current; int height; int line_size; scalar_t__ preview; int width; TYPE_2__* line_list; int children; int saved; int sort_crit; int modedata; int (* buildcb ) (int ,int *,scalar_t__*,int *) ;scalar_t__ no_matches; int * filter; struct screen screen; } ;
struct TYPE_4__ {TYPE_1__* item; } ;
struct TYPE_3__ {scalar_t__ tag; } ;


 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mode_tree_data*,int *,int ) ;
 int FUNC_4 (struct mode_tree_data*) ;
 int FUNC_5 (struct mode_tree_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mode_tree_data*,scalar_t__) ;
 int FUNC_8 (struct screen*) ;
 int FUNC_9 (struct screen*) ;
 int FUNC_10 (int ,int *,scalar_t__*,int *) ;
 int FUNC_11 (int ,int *,scalar_t__*,int *) ;

void
FUNC_12(struct mode_tree_data *VAR_2)
{
 struct screen *VAR_3 = &VAR_2->screen;
 uint64_t VAR_4;

 if (VAR_2->line_list != ((void*)0))
  VAR_4 = VAR_2->line_list[VAR_2->current].item->tag;
 else
  VAR_4 = VAR_0;

 FUNC_0(&VAR_2->saved, &VAR_2->children, VAR_1);
 FUNC_2(&VAR_2->children);

 VAR_2->buildcb(VAR_2->modedata, &VAR_2->sort_crit, &VAR_4, VAR_2->filter);
 VAR_2->no_matches = FUNC_1(&VAR_2->children);
 if (VAR_2->no_matches)
  VAR_2->buildcb(VAR_2->modedata, &VAR_2->sort_crit, &VAR_4, ((void*)0));

 FUNC_6(&VAR_2->saved);
 FUNC_2(&VAR_2->saved);

 FUNC_5(VAR_2);
 FUNC_3(VAR_2, &VAR_2->children, 0);

 if (VAR_4 == VAR_0)
  VAR_4 = VAR_2->line_list[VAR_2->current].item->tag;
 FUNC_7(VAR_2, VAR_4);

 VAR_2->width = FUNC_8(VAR_3);
 if (VAR_2->preview) {
  VAR_2->height = (FUNC_9(VAR_3) / 3) * 2;
  if (VAR_2->height > VAR_2->line_size)
   VAR_2->height = FUNC_9(VAR_3) / 2;
  if (VAR_2->height < 10)
   VAR_2->height = FUNC_9(VAR_3);
  if (FUNC_9(VAR_3) - VAR_2->height < 2)
   VAR_2->height = FUNC_9(VAR_3);
 } else
  VAR_2->height = FUNC_9(VAR_3);
 FUNC_4(VAR_2);
}
