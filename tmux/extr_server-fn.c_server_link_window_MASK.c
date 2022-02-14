
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int idx; int window; int flags; } ;
struct session_group {int dummy; } ;
struct session {int options; struct winlink* curw; int windows; int lastw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct session*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct session*) ;
 struct winlink* FUNC_3 (struct session*,int ,int,char**) ;
 struct session_group* FUNC_4 (struct session*) ;
 int FUNC_5 (struct session*,int ) ;
 struct winlink* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct winlink*) ;
 int FUNC_8 (int *,struct winlink*) ;
 int FUNC_9 (char**,char*,...) ;

int
FUNC_10(struct session *VAR_1, struct winlink *VAR_2,
    struct session *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    char **VAR_7)
{
 struct winlink *VAR_8;
 struct session_group *VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_1);
 VAR_10 = FUNC_4(VAR_3);
 if (VAR_1 != VAR_3 && VAR_9 != ((void*)0) && VAR_10 != ((void*)0) && VAR_9 == VAR_10) {
  FUNC_9(VAR_7, "sessions are grouped");
  return (-1);
 }

 VAR_8 = ((void*)0);
 if (VAR_4 != -1)
  VAR_8 = FUNC_6(&VAR_3->windows, VAR_4);
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->window == VAR_2->window) {
   FUNC_9(VAR_7, "same index: %d", VAR_4);
   return (-1);
  }
  if (VAR_5) {




   FUNC_0("window-unlinked", VAR_3,
       VAR_8->window);
   VAR_8->flags &= ~VAR_0;
   FUNC_8(&VAR_3->lastw, VAR_8);
   FUNC_7(&VAR_3->windows, VAR_8);


   if (VAR_8 == VAR_3->curw) {
    VAR_6 = 1;
    VAR_3->curw = ((void*)0);
   }
  }
 }

 if (VAR_4 == -1)
  VAR_4 = -1 - FUNC_1(VAR_3->options, "base-index");
 VAR_8 = FUNC_3(VAR_3, VAR_2->window, VAR_4, VAR_7);
 if (VAR_8 == ((void*)0))
  return (-1);

 if (VAR_6)
  FUNC_5(VAR_3, VAR_8->idx);
 FUNC_2(VAR_3);

 return (0);
}
