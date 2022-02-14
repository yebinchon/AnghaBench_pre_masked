
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int dummy; } ;
struct input_ctx {struct window_pane* wp; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int *,int *) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char**,char*) ;
 long FUNC_5 (char*,char**,int) ;
 int FUNC_6 (struct window_pane*,long,int ) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(struct input_ctx *VAR_0, const char *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 char *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
 long VAR_6;
 u_int VAR_7, VAR_8, VAR_9;

 VAR_3 = VAR_4 = FUNC_7(VAR_1);
 while (VAR_4 != ((void*)0) && *VAR_4 != '\0') {
  VAR_6 = FUNC_5(VAR_4, &VAR_5, 10);
  if (*VAR_5++ != ';')
   goto bad;
  if (VAR_6 < 0 || VAR_6 >= 0x100)
   goto bad;

  VAR_4 = FUNC_4(&VAR_5, ";");
  if (!FUNC_2(VAR_4, &VAR_7, &VAR_8, &VAR_9)) {
   VAR_4 = VAR_5;
   continue;
  }

  FUNC_6(VAR_2, VAR_6, FUNC_0(VAR_7, VAR_8, VAR_9));
  VAR_4 = VAR_5;
 }

 FUNC_1(VAR_3);
 return;

bad:
 FUNC_3("bad OSC 4: %s", VAR_1);
 FUNC_1(VAR_3);
}
