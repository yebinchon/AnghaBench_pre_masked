
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct format_modifier {int argc; int * argv; } ;


 int * FUNC_0 (int ,char) ;
 int FUNC_1 (struct window_pane*,char const*,int,int) ;
 int FUNC_2 (char**,char*,int ) ;

__attribute__((used)) static char *
FUNC_3(struct format_modifier *VAR_0, struct window_pane *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 char *VAR_5;

 if (VAR_0->argc >= 1) {
  if (FUNC_0(VAR_0->argv[0], 'i') != ((void*)0))
   VAR_3 = 1;
  if (FUNC_0(VAR_0->argv[0], 'r') != ((void*)0))
   VAR_4 = 1;
 }
 FUNC_2(&VAR_5, "%u", FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3));
 return (VAR_5);
}
