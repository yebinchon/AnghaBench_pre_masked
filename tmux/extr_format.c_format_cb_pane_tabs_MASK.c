
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {int tabs; TYPE_1__* grid; } ;
struct window_pane {TYPE_2__ base; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_entry {int value; } ;
struct evbuffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ sx; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct evbuffer*,char*,int) ;
 int FUNC_4 (struct evbuffer*,char*,scalar_t__) ;
 int FUNC_5 (struct evbuffer*) ;
 struct evbuffer* FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,char*,int,int ) ;

__attribute__((used)) static void
FUNC_9(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 struct evbuffer *VAR_3;
 u_int VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_6();
 if (VAR_3 == ((void*)0))
  FUNC_7("out of memory");
 for (VAR_4 = 0; VAR_4 < VAR_2->base.grid->sx; VAR_4++) {
  if (!FUNC_2(VAR_2->base.tabs, VAR_4))
   continue;

  if (FUNC_1(VAR_3) > 0)
   FUNC_3(VAR_3, ",", 1);
  FUNC_4(VAR_3, "%u", VAR_4);
 }
 if ((VAR_5 = FUNC_1(VAR_3)) != 0)
  FUNC_8(&VAR_1->value, "%.*s", VAR_5, FUNC_0(VAR_3));
 FUNC_5(VAR_3);
}
