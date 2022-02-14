
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;


 char* FUNC_0 (int *,char const*,int *,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct session *VAR_0, struct winlink *VAR_1,
    struct window_pane *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_0(((void*)0), VAR_3, ((void*)0), VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 return (VAR_5);
}
