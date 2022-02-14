
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ctx {int num; int ptr; } ;
struct tty {int term; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tty*,int ,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (size_t) ;

void
FUNC_5(struct tty *VAR_1, const struct tty_ctx *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 if (!FUNC_3(VAR_1->term, VAR_0))
  return;

 VAR_4 = 4 * ((VAR_2->num + 2) / 3) + 1;
 VAR_3 = FUNC_4(VAR_4);

 FUNC_0(VAR_2->ptr, VAR_2->num, VAR_3, VAR_4);
 FUNC_2(VAR_1, VAR_0, "", VAR_3);

 FUNC_1(VAR_3);
}
