
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int curtype; int win; TYPE_1__* curline; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_2__ {int selected; } ;


 int FUNC_0 (struct view*,int) ;
 int FUNC_1 (struct view*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int ,int ,int *) ;

__attribute__((used)) static inline void
FUNC_5(struct view *VAR_0, enum line_type VAR_1)
{
 if (!VAR_0->curline->selected && VAR_0->curtype != VAR_1) {
  (void) FUNC_3(VAR_0->win, FUNC_0(VAR_0, VAR_1));
  FUNC_4(VAR_0->win, -1, 0, FUNC_1(VAR_0, VAR_1), ((void*)0));



  VAR_0->curtype = VAR_1;
 }
}
