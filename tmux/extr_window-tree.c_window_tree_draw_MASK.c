
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct winlink {int window; } ;
struct window_tree_itemdata {int type; } ;
struct window_pane {int base; } ;
struct session {int dummy; } ;
struct screen_write_ctx {int dummy; } ;






 int FUNC_0 (struct screen_write_ctx*,int *,int ,int ) ;
 int FUNC_1 (void*,struct session*,struct screen_write_ctx*,int ,int ) ;
 int FUNC_2 (void*,struct session*,int ,struct screen_write_ctx*,int ,int ) ;
 int FUNC_3 (struct window_tree_itemdata*,struct session**,struct winlink**,struct window_pane**) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, void *VAR_1, struct screen_write_ctx *VAR_2,
    u_int VAR_3, u_int VAR_4)
{
 struct window_tree_itemdata *VAR_5 = VAR_1;
 struct session *VAR_6;
 struct winlink *VAR_7;
 struct window_pane *VAR_8;

 FUNC_3(VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_8 == ((void*)0))
  return;

 switch (VAR_5->type) {
 case 131:
  break;
 case 129:
  FUNC_1(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_6, VAR_7->window, VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  FUNC_0(VAR_2, &VAR_8->base, VAR_3, VAR_4);
  break;
 }
}
