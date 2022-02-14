
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long number; } ;
struct options_entry {TYPE_1__ value; } ;
struct options {int dummy; } ;


 int FUNC_0 (struct options_entry*) ;
 int FUNC_1 (char*,char const*) ;
 struct options_entry* FUNC_2 (struct options*,int ) ;
 struct options_entry* FUNC_3 (struct options*,char const*) ;
 int FUNC_4 (struct options*,char const*) ;

struct options_entry *
FUNC_5(struct options *VAR_0, const char *VAR_1, long long VAR_2)
{
 struct options_entry *VAR_3;

 if (*VAR_1 == '@')
  FUNC_1("user option %s must be a string", VAR_1);

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_2(VAR_0, FUNC_4(VAR_0, VAR_1));
  if (VAR_3 == ((void*)0))
   return (((void*)0));
 }

 if (!FUNC_0(VAR_3))
  FUNC_1("option %s is not a number", VAR_1);
 VAR_3->value.number = VAR_2;
 return (VAR_3);
}
