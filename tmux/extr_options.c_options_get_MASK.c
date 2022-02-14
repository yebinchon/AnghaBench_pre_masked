
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {int dummy; } ;
struct options {struct options* parent; } ;


 struct options_entry* FUNC_0 (struct options*,char const*) ;

struct options_entry *
FUNC_1(struct options *VAR_0, const char *VAR_1)
{
 struct options_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 while (VAR_2 == ((void*)0)) {
  VAR_0 = VAR_0->parent;
  if (VAR_0 == ((void*)0))
   break;
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }
 return (VAR_2);
}
