
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct tty*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_3)
{
 const char *VAR_4;

 if (FUNC_4(VAR_3->term, VAR_0)) {
  VAR_4 = FUNC_0(VAR_2, "default-terminal");
  if (FUNC_1(VAR_4, "screen") != 0 && FUNC_2(VAR_4, "screen-", 7) != 0) {
   FUNC_3(VAR_3, VAR_0);
   return;
  }
 }
 FUNC_3(VAR_3, VAR_1);
}
