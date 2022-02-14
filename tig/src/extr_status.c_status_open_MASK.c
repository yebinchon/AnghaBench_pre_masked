
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int watch; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {scalar_t__* worktree; scalar_t__ is_inside_work_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct view*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (struct view*) ;
 int VAR_6 ;
 char const** VAR_7 ;
 char const** VAR_8 ;
 char const** VAR_9 ;
 int FUNC_4 (struct view*) ;
 int FUNC_5 (struct view*) ;
 int FUNC_6 (struct view*,char const**,char,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static enum status_code
FUNC_10(struct view *VAR_10, enum open_flags VAR_11)
{
 const char **VAR_12 = FUNC_2() ?
  VAR_9 : VAR_8;
 char VAR_13 = VAR_12 == VAR_9 ? 'A' : 0;

 if (!(VAR_5.is_inside_work_tree || *VAR_5.worktree))
  return FUNC_1("The status view requires a working tree");

 FUNC_3(VAR_10);


 FUNC_9(&VAR_10->watch, VAR_4);

 FUNC_0(VAR_10, VAR_0);
 FUNC_7();

 FUNC_8();

 if ((!VAR_6 && !FUNC_6(VAR_10, VAR_12, VAR_13, VAR_1)) ||
     (!VAR_6 && !FUNC_6(VAR_10, VAR_7, 0, VAR_2)) ||
     !FUNC_4(VAR_10))
  return FUNC_1("Failed to load status data");



 FUNC_5(VAR_10);
 return VAR_3;
}
