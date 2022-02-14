
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; int term; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2(struct tty *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (0);
 if (FUNC_0(VAR_2->term, VAR_0) &&
     FUNC_1(VAR_2->term, VAR_0) == 0)
  return (1);

 if (VAR_2->flags & VAR_1)
  return (0);
 return (1);
}
