
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty {int term; } ;
typedef enum tty_code_code { ____Placeholder_tty_code_code } tty_code_code ;


 int FUNC_0 (struct tty*,int) ;
 int FUNC_1 (struct tty*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_0, enum tty_code_code VAR_1,
    enum tty_code_code VAR_2, u_int VAR_3)
{
 if (FUNC_2(VAR_0->term, VAR_1))
  FUNC_1(VAR_0, VAR_1, VAR_3);
 else {
  while (VAR_3-- > 0)
   FUNC_0(VAR_0, VAR_2);
 }
}
