
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notify_entry {char const* name; int pane; int window; int session; int client; int fs; } ;
struct TYPE_4__ {TYPE_1__* wp; int w; int s; } ;
struct cmdq_item {TYPE_2__ target; int client; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (struct notify_entry*,int ,int) ;
 int FUNC_2 (struct cmdq_item*,struct notify_entry*) ;

void
FUNC_3(struct cmdq_item *VAR_0, const char *VAR_1)
{
 struct notify_entry VAR_2;

 FUNC_1(&VAR_2, 0, sizeof VAR_2);

 VAR_2.name = VAR_1;
 FUNC_0(&VAR_2.fs, &VAR_0->target);

 VAR_2.client = VAR_0->client;
 VAR_2.session = VAR_0->target.s;
 VAR_2.window = VAR_0->target.w;
 VAR_2.pane = VAR_0->target.wp->id;

 FUNC_2(VAR_0, &VAR_2);
}
