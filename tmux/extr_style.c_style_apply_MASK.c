
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr; int bg; int fg; } ;
struct style {TYPE_1__ gc; } ;
struct options {int dummy; } ;
struct grid_cell {int attr; int bg; int fg; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 struct style* FUNC_1 (struct options*,char const*) ;

void
FUNC_2(struct grid_cell *VAR_1, struct options *VAR_2, const char *VAR_3)
{
 struct style *VAR_4;

 FUNC_0(VAR_1, &VAR_0, sizeof *VAR_1);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 VAR_1->fg = VAR_4->gc.fg;
 VAR_1->bg = VAR_4->gc.bg;
 VAR_1->attr |= VAR_4->gc.attr;
}
