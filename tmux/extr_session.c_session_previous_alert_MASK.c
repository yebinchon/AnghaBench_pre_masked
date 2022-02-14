
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int flags; } ;


 int VAR_0 ;
 struct winlink* FUNC_0 (struct winlink*) ;

__attribute__((used)) static struct winlink *
FUNC_1(struct winlink *VAR_1)
{
 while (VAR_1 != ((void*)0)) {
  if (VAR_1->flags & VAR_0)
   break;
  VAR_1 = FUNC_0(VAR_1);
 }
 return (VAR_1);
}
