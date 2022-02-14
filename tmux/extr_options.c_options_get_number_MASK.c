
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
 struct options_entry* FUNC_2 (struct options*,char const*) ;

long long
FUNC_3(struct options *VAR_0, const char *VAR_1)
{
 struct options_entry *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_1("missing option %s", VAR_1);
 if (!FUNC_0(VAR_2))
     FUNC_1("option %s is not a number", VAR_1);
 return (VAR_2->value.number);
}
