
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ display; } ;
struct TYPE_4__ {TYPE_1__ id; } ;
struct view_column {TYPE_2__ opt; } ;
struct view {int force_redraw; } ;
struct main_state {char** reflog; int reflog_width; int reflogs; } ;


 int VAR_0 ;
 struct view_column* FUNC_0 (struct view*,int ) ;
 int FUNC_1 (char***,int ,int) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool
FUNC_5(struct view *VAR_1, struct main_state *VAR_2, char *VAR_3)
{
 char *VAR_4 = FUNC_2(VAR_3, ' ');
 int VAR_5;

 if (!VAR_4)
  return 0;
 *VAR_4 = 0;

 if (!FUNC_1(&VAR_2->reflog, VAR_2->reflogs, 1)
     || !(VAR_3 = FUNC_3(VAR_3)))
  return 0;

 VAR_2->reflog[VAR_2->reflogs++] = VAR_3;
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_2->reflog_width < VAR_5) {
  struct view_column *VAR_6 = FUNC_0(VAR_1, VAR_0);

  VAR_2->reflog_width = VAR_5;
  if (VAR_6 && VAR_6->opt.id.display)
   VAR_1->force_redraw = 1;
 }

 return 1;
}
