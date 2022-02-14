
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ staged; scalar_t__ unstaged; scalar_t__ untracked; } ;
struct watch_handler {scalar_t__ last_modified; TYPE_1__ diff; } ;
struct index_diff {scalar_t__ staged; scalar_t__ unstaged; scalar_t__ untracked; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;
struct TYPE_4__ {int git_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*,int ) ;
 int FUNC_1 (struct index_diff*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static enum watch_trigger
FUNC_3(struct watch_handler *VAR_9, enum watch_event VAR_10, enum watch_trigger VAR_11)
{
 enum watch_trigger VAR_12 = VAR_5;
 struct index_diff VAR_13;

 if (VAR_10 == VAR_0)
  return FUNC_0(&VAR_9->last_modified, "%s/index", VAR_8.git_dir)
   ? VAR_11 : VAR_5;

 if (VAR_10 == VAR_1)
  return VAR_5;

 if (!FUNC_1(&VAR_13, VAR_6, VAR_7))
  return FUNC_0(&VAR_9->last_modified, "%s/index", VAR_8.git_dir)
   ? VAR_11 : VAR_5;

 if (VAR_11 & VAR_2 && VAR_13.staged != VAR_9->diff.staged) {
  if (VAR_9->last_modified)
   VAR_12 |= VAR_2;
  VAR_9->diff.staged = VAR_13.staged;
 }

 if (VAR_11 & VAR_3 && VAR_13.unstaged != VAR_9->diff.unstaged) {
  if (VAR_9->last_modified)
   VAR_12 |= VAR_3;
  VAR_9->diff.unstaged = VAR_13.unstaged;
 }

 if (VAR_11 & VAR_4 && VAR_13.untracked != VAR_9->diff.untracked) {
  if (VAR_9->last_modified)
   VAR_12 |= VAR_4;
  VAR_9->diff.untracked = VAR_13.untracked;
 }

 VAR_9->last_modified = FUNC_2(((void*)0));

 return VAR_12;
}
