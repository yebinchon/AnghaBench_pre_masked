
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int term_type; } ;


 int FUNC_0 (struct tty*,char*) ;
 scalar_t__ FUNC_1 (struct tty*) ;

void
FUNC_2(struct tty *VAR_0, int VAR_1)
{
 VAR_0->term_type = VAR_1;

 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, "\033[?69h");
}
