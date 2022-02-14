
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty {scalar_t__ rleft; scalar_t__ rright; int sx; int cy; int cx; int rlower; int rupper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (struct tty*,int ,int ,int ) ;
 int FUNC_2 (struct tty*,char*) ;
 int FUNC_3 (struct tty*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_2, u_int VAR_3, u_int VAR_4)
{
 char VAR_5[64];

 if (!FUNC_3(VAR_2))
  return;
 if (VAR_2->rleft == VAR_3 && VAR_2->rright == VAR_4)
  return;

 FUNC_1(VAR_2, VAR_0, VAR_2->rupper, VAR_2->rlower);

 VAR_2->rleft = VAR_3;
 VAR_2->rright = VAR_4;

 if (VAR_3 == 0 && VAR_4 == VAR_2->sx - 1)
  FUNC_0(VAR_5, sizeof VAR_5, "\033[s");
 else
  FUNC_0(VAR_5, sizeof VAR_5, "\033[%u;%us", VAR_3 + 1, VAR_4 + 1);
 FUNC_2(VAR_2, VAR_5);
 VAR_2->cx = VAR_2->cy = VAR_1;
}
