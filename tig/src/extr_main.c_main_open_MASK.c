
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
struct view {int watch; struct main_state* private; } ;
struct main_state {int with_graph; int graph; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
typedef enum graph_display { ____Placeholder_graph_display } graph_display ;
struct TYPE_6__ {scalar_t__* worktree; scalar_t__ is_inside_work_tree; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ,int ,char*,char*,char*,char*,int ,int ) ;
 char const* FUNC_1 (int ,int ,char*,char*,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct view*,int *,char const**,int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 struct view_column* FUNC_4 (struct view*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct view*,scalar_t__) ;
 int FUNC_8 (struct view*,struct main_state*) ;
 int FUNC_9 (struct view*,struct view_column*,int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct view*) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static enum status_code
FUNC_14(struct view *VAR_12, enum open_flags VAR_13)
{
 struct view_column *VAR_14 = FUNC_4(VAR_12, VAR_3);
 enum graph_display VAR_15 = FUNC_9(VAR_12, VAR_14, VAR_13);
 const char *VAR_16[] = {
  FUNC_0(VAR_8, FUNC_3(VAR_15),
   "%(mainargs)", "%(cmdlineargs)", "%(revargs)", "%(fileargs)",
   FUNC_11(), FUNC_6())
 };
 const char *VAR_17[] = {
  FUNC_1(VAR_8, FUNC_3(VAR_15),
   "%(mainargs)", "%(cmdlineargs)", "%(revargs)", "%(fileargs)",
   FUNC_11())
 };
 struct main_state *VAR_18 = VAR_12->private;
 const char **VAR_19 = VAR_16;
 enum watch_trigger VAR_20 = VAR_6;

 if (VAR_10 && (VAR_11.is_inside_work_tree || *VAR_11.worktree))
  VAR_20 |= VAR_5;

 VAR_18->with_graph = VAR_15 != VAR_1;

 if (VAR_9 && FUNC_7(VAR_12, VAR_9))
  VAR_19 = VAR_17;

 if (VAR_18->with_graph) {
  VAR_18->graph = FUNC_5(VAR_14->opt.commit_title.graph);
  if (!VAR_18->graph)
   return VAR_0;
 }

 if (FUNC_10(VAR_13)) {
  VAR_20 = VAR_6;
 }

 {

  enum status_code VAR_21 = FUNC_2(VAR_12, ((void*)0), VAR_19, VAR_13);

  if (VAR_21 != VAR_2)
   return VAR_21;
 }



 if (FUNC_12(VAR_12))
  FUNC_13(&VAR_12->watch, VAR_4 | VAR_7 | VAR_20);

 if (VAR_20)
  FUNC_8(VAR_12, VAR_18);

 return VAR_2;
}
