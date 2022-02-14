
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct winlink {int idx; } ;
struct window_tree_modedata {int data; int format; } ;
struct window_tree_itemdata {int pane; int winlink; int session; int type; } ;
struct window_pane {int id; } ;
struct session {int id; } ;
struct mode_tree_item {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ,int *,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct mode_tree_item*,struct window_tree_itemdata*,int ,char*,char*,int) ;
 int FUNC_3 (struct window_pane*,int *) ;
 struct window_tree_itemdata* FUNC_4 (struct window_tree_modedata*) ;
 int FUNC_5 (char**,char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct session *VAR_1, struct winlink *VAR_2,
    struct window_pane *VAR_3, void *VAR_4, struct mode_tree_item *VAR_5)
{
 struct window_tree_modedata *VAR_6 = VAR_4;
 struct window_tree_itemdata *VAR_7;
 char *VAR_8, *VAR_9;
 u_int VAR_10;

 FUNC_3(VAR_3, &VAR_10);

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->type = VAR_0;
 VAR_7->session = VAR_1->id;
 VAR_7->winlink = VAR_2->idx;
 VAR_7->pane = VAR_3->id;

 VAR_9 = FUNC_0(((void*)0), VAR_6->format, ((void*)0), VAR_1, VAR_2, VAR_3);
 FUNC_5(&VAR_8, "%u", VAR_10);

 FUNC_2(VAR_6->data, VAR_5, VAR_7, (uint64_t)VAR_3, VAR_8, VAR_9, -1);
 FUNC_1(VAR_9);
 FUNC_1(VAR_8);
}
