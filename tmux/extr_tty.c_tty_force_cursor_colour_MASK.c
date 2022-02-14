
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int ccolour; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*,int ,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_2, const char *VAR_3)
{
 if (*VAR_3 == '\0')
  FUNC_1(VAR_2, VAR_0);
 else
  FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_0(VAR_2->ccolour);
 VAR_2->ccolour = FUNC_3(VAR_3);
}
