
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {struct session* session; } ;
struct window {int dummy; } ;
struct session {int windows; } ;


 int FUNC_0 (char*,struct session*,struct window*) ;
 int FUNC_1 (struct session*) ;
 struct winlink* FUNC_2 (int *,int) ;
 int FUNC_3 (struct winlink*,struct window*) ;
 int FUNC_4 (char**,char*,int) ;

struct winlink *
FUNC_5(struct session *VAR_0, struct window *VAR_1, int VAR_2, char **VAR_3)
{
 struct winlink *VAR_4;

 if ((VAR_4 = FUNC_2(&VAR_0->windows, VAR_2)) == ((void*)0)) {
  FUNC_4(VAR_3, "index in use: %d", VAR_2);
  return (((void*)0));
 }
 VAR_4->session = VAR_0;
 FUNC_3(VAR_4, VAR_1);
 FUNC_0("window-linked", VAR_0, VAR_1);

 FUNC_1(VAR_0);
 return (VAR_4);
}
