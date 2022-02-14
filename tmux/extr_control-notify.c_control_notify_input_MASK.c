
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef char u_char ;
struct window_pane {char const id; int window; } ;
struct evbuffer {int dummy; } ;
struct client {int flags; TYPE_1__* session; } ;
struct TYPE_2__ {int windows; } ;


 int VAR_0 ;
 int FUNC_0 (struct client*,struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*,char*,char const) ;
 int FUNC_2 (struct evbuffer*) ;
 struct evbuffer* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,int ) ;

void
FUNC_6(struct client *VAR_1, struct window_pane *VAR_2,
    const u_char *VAR_3, size_t VAR_4)
{
 struct evbuffer *VAR_5;
 u_int VAR_6;

 if (VAR_1->session == ((void*)0))
     return;

 if (VAR_1->flags & VAR_0)
  return;





 if (FUNC_5(&VAR_1->session->windows, VAR_2->window) != ((void*)0)) {
  VAR_5 = FUNC_3();
  if (VAR_5 == ((void*)0))
   FUNC_4("out of memory");
  FUNC_1(VAR_5, "%%output %%%u ", VAR_2->id);
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   if (VAR_3[VAR_6] < ' ' || VAR_3[VAR_6] == '\\')
       FUNC_1(VAR_5, "\\%03o", VAR_3[VAR_6]);
   else
       FUNC_1(VAR_5, "%c", VAR_3[VAR_6]);
  }
  FUNC_0(VAR_1, VAR_5);
  FUNC_2(VAR_5);
 }
}
