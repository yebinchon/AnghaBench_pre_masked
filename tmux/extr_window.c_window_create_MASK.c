
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct window {int lastlayout; scalar_t__ id; int winlinks; scalar_t__ references; int options; void* sy; void* sx; int * layout_root; int * active; int panes; scalar_t__ flags; int name; } ;


 int FUNC_0 (int ,int *,struct window*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct window*) ;
 int VAR_2 ;
 struct window* FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;

struct window *
FUNC_6(u_int VAR_3, u_int VAR_4)
{
 struct window *VAR_5;

 VAR_5 = FUNC_4(1, sizeof *VAR_5);
 VAR_5->name = FUNC_5("");
 VAR_5->flags = 0;

 FUNC_1(&VAR_5->panes);
 VAR_5->active = ((void*)0);

 VAR_5->lastlayout = -1;
 VAR_5->layout_root = ((void*)0);

 VAR_5->sx = VAR_3;
 VAR_5->sy = VAR_4;

 VAR_5->options = FUNC_2(VAR_0);

 VAR_5->references = 0;
 FUNC_1(&VAR_5->winlinks);

 VAR_5->id = VAR_1++;
 FUNC_0(VAR_2, &VAR_2, VAR_5);

 FUNC_3(VAR_5);

 return (VAR_5);
}
