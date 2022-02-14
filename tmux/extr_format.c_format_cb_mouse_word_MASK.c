
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int grid; } ;
struct window_pane {TYPE_1__ base; int modes; } ;
struct TYPE_5__ {int valid; } ;
struct format_tree {TYPE_2__ m; } ;
struct format_entry {char* value; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct window_pane*,TYPE_2__*,int *,int *,int ) ;
 struct window_pane* FUNC_2 (TYPE_2__*,int *,int *) ;
 char* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window_pane *VAR_2;
 u_int VAR_3, VAR_4;
 char *VAR_5;

 if (!VAR_0->m.valid)
  return;
 VAR_2 = FUNC_2(&VAR_0->m, ((void*)0), ((void*)0));
 if (VAR_2 == ((void*)0))
  return;
 if (!FUNC_0 (&VAR_2->modes))
  return;
 if (FUNC_1(VAR_2, &VAR_0->m, &VAR_3, &VAR_4, 0) != 0)
  return;

 VAR_5 = FUNC_3(VAR_2->base.grid, VAR_3, VAR_4);
 if (VAR_5 != ((void*)0))
  VAR_1->value = VAR_5;
}
