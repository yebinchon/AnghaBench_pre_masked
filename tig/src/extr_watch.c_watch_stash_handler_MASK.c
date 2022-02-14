
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watch_handler {int last_modified; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;
struct TYPE_2__ {int git_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static enum watch_trigger
FUNC_1(struct watch_handler *VAR_3, enum watch_event VAR_4, enum watch_trigger VAR_5)
{
 if (FUNC_0(&VAR_3->last_modified, "%s/refs/stash", VAR_2.git_dir))
  return VAR_1;

 return VAR_0;
}
