
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty {int dummy; } ;


 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (struct tty*,char*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_0, u_int VAR_1)
{
 static char VAR_2[500];

 if (*VAR_2 != ' ')
  FUNC_0(VAR_2, ' ', sizeof VAR_2);

 while (VAR_1 > sizeof VAR_2) {
  FUNC_1(VAR_0, VAR_2, sizeof VAR_2, sizeof VAR_2);
  VAR_1 -= sizeof VAR_2;
 }
 if (VAR_1 != 0)
  FUNC_1(VAR_0, VAR_2, VAR_1, VAR_1);
}
