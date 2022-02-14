
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct window_pane_input_data {int item; int wp; } ;
struct window_pane {int dummy; } ;
struct evbuffer {int dummy; } ;
struct client {int flags; int * stdin_callback; struct evbuffer* stdin_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct evbuffer*) ;
 size_t FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct evbuffer*,size_t) ;
 int FUNC_4 (struct window_pane_input_data*) ;
 int FUNC_5 (struct window_pane*,int *,size_t) ;
 int FUNC_6 (struct client*) ;
 struct window_pane* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct client *VAR_2, int VAR_3, void *VAR_4)
{
 struct window_pane_input_data *VAR_5 = VAR_4;
 struct window_pane *VAR_6;
 struct evbuffer *VAR_7 = VAR_2->stdin_data;
 u_char *VAR_8 = FUNC_0(VAR_7);
 size_t VAR_9 = FUNC_1(VAR_7);

 VAR_6 = FUNC_7(VAR_5->wp);
 if (VAR_6 == ((void*)0) || VAR_3 || VAR_2->flags & VAR_0) {
  if (VAR_6 == ((void*)0))
   VAR_2->flags |= VAR_1;
  FUNC_3(VAR_7, VAR_9);

  VAR_2->stdin_callback = ((void*)0);
  FUNC_6(VAR_2);

  FUNC_2(VAR_5->item);
  FUNC_4(VAR_5);

  return;
 }

 FUNC_5(VAR_6, VAR_8, VAR_9);
 FUNC_3(VAR_7, VAR_9);
}
