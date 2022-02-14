
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_find_state {int idx; TYPE_4__* wp; TYPE_3__* w; TYPE_2__* wl; TYPE_1__* s; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int name; int id; } ;
struct TYPE_6__ {TYPE_3__* window; int idx; } ;
struct TYPE_5__ {int name; int id; } ;


 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, struct cmd_find_state *VAR_1)
{
 if (VAR_1->s != ((void*)0))
  FUNC_0("%s: s=$%u %s", VAR_0, VAR_1->s->id, VAR_1->s->name);
 else
  FUNC_0("%s: s=none", VAR_0);
 if (VAR_1->wl != ((void*)0)) {
  FUNC_0("%s: wl=%u %d w=@%u %s", VAR_0, VAR_1->wl->idx,
      VAR_1->wl->window == VAR_1->w, VAR_1->w->id, VAR_1->w->name);
 } else
  FUNC_0("%s: wl=none", VAR_0);
 if (VAR_1->wp != ((void*)0))
  FUNC_0("%s: wp=%%%u", VAR_0, VAR_1->wp->id);
 else
  FUNC_0("%s: wp=none", VAR_0);
 if (VAR_1->idx != -1)
  FUNC_0("%s: idx=%d", VAR_0, VAR_1->idx);
 else
  FUNC_0("%s: idx=none", VAR_0);
}
