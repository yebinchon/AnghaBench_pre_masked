
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int flags; int options; } ;
struct input_ctx {struct window_pane* wp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int *,int *) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,int,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct input_ctx *VAR_2, const char *VAR_3)
{
 struct window_pane *VAR_4 = VAR_2->wp;
 u_int VAR_5, VAR_6, VAR_7;
 char VAR_8[16];

 if (FUNC_3(VAR_3, "?") == 0)
  return;

 if (!FUNC_0(VAR_3, &VAR_5, &VAR_6, &VAR_7))
  goto bad;
 FUNC_4(VAR_8, sizeof VAR_8, "fg=#%02x%02x%02x", VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_4->options, "window-style", 1, VAR_8);
 FUNC_2(VAR_4->options, "window-active-style", 1, VAR_8);
 VAR_4->flags |= (VAR_0|VAR_1);

 return;

bad:
 FUNC_1("bad OSC 10: %s", VAR_3);
}
