
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int name; scalar_t__ keymap; struct view* parent; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int * git_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct view** VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct view*,struct view*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct view*,int ) ;

void
FUNC_7(struct view *VAR_6, struct view *VAR_7, enum open_flags VAR_8)
{
 bool VAR_9 = !!(VAR_8 & (VAR_2 | VAR_0));
 int VAR_10 = FUNC_1();

 FUNC_0(VAR_8 ^ VAR_1);

 if (VAR_7 == VAR_6 && VAR_10 == 1 && !VAR_9) {
  FUNC_4("Already in %s view", VAR_7->name);
  return;
 }

 if (!FUNC_6(VAR_7, VAR_3) && !VAR_5.git_dir[0]) {
  FUNC_4("The %s view is disabled in pager mode", VAR_7->name);
  return;
 }


 if (VAR_6 && VAR_6->parent && VAR_6 == VAR_4[1])
  VAR_6 = VAR_6->parent;

 if (!VAR_7->keymap)
  VAR_7->keymap = FUNC_2(VAR_7->name, FUNC_5(VAR_7->name));
 FUNC_3(VAR_7, VAR_6 ? VAR_6 : VAR_7, VAR_8);
}
