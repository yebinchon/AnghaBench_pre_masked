
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct input_ctx {struct window_pane* wp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 long FUNC_2 (char*,char**,int) ;
 int FUNC_3 (struct window_pane*) ;
 int FUNC_4 (struct window_pane*,long) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct input_ctx *VAR_0, const char *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 char *VAR_3, *VAR_4;
 long VAR_5;

 if (*VAR_1 == '\0') {
  FUNC_3(VAR_2);
  return;
 }

 VAR_3 = VAR_4 = FUNC_5(VAR_1);
 while (*VAR_4 != '\0') {
  VAR_5 = FUNC_2(VAR_4, &VAR_4, 10);
  if (*VAR_4 != '\0' && *VAR_4 != ';')
   goto bad;
  if (VAR_5 < 0 || VAR_5 >= 0x100)
   goto bad;

  FUNC_4(VAR_2, VAR_5);
  if (*VAR_4 == ';')
   VAR_4++;
 }
 FUNC_0(VAR_3);
 return;

bad:
 FUNC_1("bad OSC 104: %s", VAR_1);
 FUNC_0(VAR_3);
}
