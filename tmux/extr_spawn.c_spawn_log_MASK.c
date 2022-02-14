
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int idx; } ;
struct window_pane {int id; } ;
struct spawn_context {char* name; int idx; int flags; TYPE_1__* item; struct window_pane* wp0; struct winlink* wl; struct session* s; } ;
struct session {int id; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, struct spawn_context *VAR_1)
{
 struct session *VAR_2 = VAR_1->s;
 struct winlink *VAR_3 = VAR_1->wl;
 struct window_pane *VAR_4 = VAR_1->wp0;
 char VAR_5[128];
 const char *VAR_6;

 FUNC_0("%s: %s, flags=%#x", VAR_0, VAR_1->item->name, VAR_1->flags);

 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0))
  FUNC_1(VAR_5, sizeof VAR_5, "wl=%d wp0=%%%u", VAR_3->idx, VAR_4->id);
 else if (VAR_3 != ((void*)0))
  FUNC_1(VAR_5, sizeof VAR_5, "wl=%d wp0=none", VAR_3->idx);
 else if (VAR_4 != ((void*)0))
  FUNC_1(VAR_5, sizeof VAR_5, "wl=none wp0=%%%u", VAR_4->id);
 else
  FUNC_1(VAR_5, sizeof VAR_5, "wl=none wp0=none");
 FUNC_0("%s: s=$%u %s idx=%d", VAR_0, VAR_2->id, VAR_5, VAR_1->idx);

 VAR_6 = VAR_1->name;
 if (VAR_6 == ((void*)0))
  VAR_6 = "none";
 FUNC_0("%s: name=%s", VAR_0, VAR_6);
}
