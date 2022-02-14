
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,int ) ;
 int FUNC_1 (struct tty*,char const*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct tty *VAR_2, const char *VAR_3)
{
 if (!FUNC_2(VAR_2->term, VAR_1) ||
     !FUNC_2(VAR_2->term, VAR_0))
  return;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_0);
}
