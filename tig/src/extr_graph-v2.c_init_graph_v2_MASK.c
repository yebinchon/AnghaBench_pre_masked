
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph {int symbol_to_chtype; int symbol_to_utf8; int symbol_to_ascii; int foreach_symbol; int render_parents; int is_merge; int add_parent; int add_commit; int done_rendering; int done; struct graph_v2* private; } ;
struct graph_v2 {struct graph api; } ;


 struct graph_v2* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

struct graph *
FUNC_1(void)
{
 struct graph_v2 *VAR_10 = FUNC_0(1, sizeof(*VAR_10));
 struct graph *VAR_11;

 if (!VAR_10)
  return ((void*)0);

 VAR_11 = &VAR_10->api;
 VAR_11->private = VAR_10;
 VAR_11->done = VAR_0;
 VAR_11->done_rendering = VAR_1;
 VAR_11->add_commit = VAR_2;
 VAR_11->add_parent = VAR_3;
 VAR_11->is_merge = VAR_5;
 VAR_11->render_parents = VAR_6;
 VAR_11->foreach_symbol = VAR_4;
 VAR_11->symbol_to_ascii = VAR_7;
 VAR_11->symbol_to_utf8 = VAR_9;
 VAR_11->symbol_to_chtype = VAR_8;

 return VAR_11;
}
