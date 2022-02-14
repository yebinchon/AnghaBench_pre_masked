
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int graph; } ;
struct TYPE_5__ {TYPE_1__ commit_title; } ;
struct view_column {TYPE_2__ opt; } ;
struct view {TYPE_3__* env; struct main_state* private; } ;
struct rev_flags {int search_offset; int with_graph; scalar_t__ with_reflog; int member_0; } ;
struct main_state {int with_graph; int first_parent; } ;
struct TYPE_6__ {int * search; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*,struct rev_flags*) ;
 struct view_column* FUNC_2 (struct view*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static bool
FUNC_6(struct view *VAR_5, const char *VAR_6[])
{
 struct main_state *VAR_7 = VAR_5->private;
 bool VAR_8 = 0;
 int VAR_9;

 for (VAR_9 = 0; VAR_6[VAR_9]; VAR_9++) {
  const char *VAR_10 = VAR_6[VAR_9];
  struct rev_flags VAR_11 = {0};

  if (!FUNC_3(VAR_10, "--graph")) {
   struct view_column *VAR_12 = FUNC_2(VAR_5, VAR_1);

   if (VAR_12) {
    VAR_12->opt.commit_title.graph = 1;
    if (VAR_2 != VAR_0)
     VAR_7->with_graph = 1;
   }
   VAR_6[VAR_9] = "";
   continue;
  }

  if (!FUNC_3(VAR_10, "--merge")) {
   FUNC_0(&VAR_4, "--boundary");
   continue;
  }

  if (!FUNC_3(VAR_10, "--first-parent")) {
   VAR_7->first_parent = 1;
   FUNC_0(&VAR_3, VAR_10);
  }

  if (!FUNC_1(VAR_10, &VAR_11))
   continue;

  if (VAR_11.with_reflog)
   VAR_8 = 1;
  if (!VAR_11.with_graph)
   VAR_7->with_graph = 0;
  VAR_10 += VAR_11.search_offset;
  if (*VAR_10 && !*VAR_5->env->search)
   FUNC_4(VAR_5->env->search, VAR_10, FUNC_5(VAR_10));
 }

 return VAR_8;
}
