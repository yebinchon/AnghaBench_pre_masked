
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct screen {int dummy; } ;
struct mode_tree_data {TYPE_1__* wp; struct screen screen; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mode_tree_data*) ;
 int FUNC_1 (struct mode_tree_data*) ;
 int FUNC_2 (struct screen*,int ,int ,int ) ;

void
FUNC_3(struct mode_tree_data *VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct screen *VAR_4 = &VAR_1->screen;

 FUNC_2(VAR_4, VAR_2, VAR_3, 0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_1->wp->flags |= VAR_0;
}
