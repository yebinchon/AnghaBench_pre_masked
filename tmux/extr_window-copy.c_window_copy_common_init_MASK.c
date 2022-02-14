
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct screen {int dummy; } ;
struct window_pane {TYPE_1__* window; int * searchstr; struct screen base; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct window_copy_mode_data {int searchx; int searchy; int searcho; char jumpchar; int dragtimer; int modekeys; int screen; void* jumptype; int * searchmark; int * searchstr; void* searchtype; int lineflag; int cursordrag; } ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,int ,struct window_mode_entry*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen*) ;
 int VAR_4 ;
 struct window_copy_mode_data* FUNC_5 (int,int) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static struct window_copy_mode_data *
FUNC_7(struct window_mode_entry *VAR_5)
{
 struct window_pane *VAR_6 = VAR_5->wp;
 struct window_copy_mode_data *VAR_7;
 struct screen *VAR_8 = &VAR_6->base;

 VAR_5->data = VAR_7 = FUNC_5(1, sizeof *VAR_7);

 VAR_7->cursordrag = VAR_0;
 VAR_7->lineflag = VAR_1;

 if (VAR_6->searchstr != ((void*)0)) {
  VAR_7->searchtype = VAR_3;
  VAR_7->searchstr = FUNC_6(VAR_6->searchstr);
 } else {
  VAR_7->searchtype = VAR_2;
  VAR_7->searchstr = ((void*)0);
 }
 VAR_7->searchmark = ((void*)0);
 VAR_7->searchx = VAR_7->searchy = VAR_7->searcho = -1;

 VAR_7->jumptype = VAR_2;
 VAR_7->jumpchar = '\0';

 FUNC_2(&VAR_7->screen, FUNC_3(VAR_8), FUNC_4(VAR_8), 0);
 VAR_7->modekeys = FUNC_1(VAR_6->window->options, "mode-keys");

 FUNC_0(&VAR_7->dragtimer, VAR_4, VAR_5);

 return (VAR_7);
}
