
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int id; int environ; } ;
struct environ {int dummy; } ;


 int FUNC_0 (int ,struct environ*) ;
 struct environ* FUNC_1 () ;
 int FUNC_2 (struct environ*,char*,char*,char const*,...) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int ,char*) ;
 int VAR_2 ;

struct environ *
FUNC_5(struct session *VAR_3, int VAR_4)
{
 struct environ *VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1();
 FUNC_0(VAR_0, VAR_5);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3->environ, VAR_5);

 if (!VAR_4) {
  VAR_6 = FUNC_4(VAR_1, "default-terminal");
  FUNC_2(VAR_5, "TERM", "%s", VAR_6);
 }

 if (VAR_3 != ((void*)0))
  VAR_7 = VAR_3->id;
 else
  VAR_7 = -1;
 FUNC_2(VAR_5, "TMUX", "%s,%ld,%d", VAR_2, (long)FUNC_3(), VAR_7);

 return (VAR_5);
}
