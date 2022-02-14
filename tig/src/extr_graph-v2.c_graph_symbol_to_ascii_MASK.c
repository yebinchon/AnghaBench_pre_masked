
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {scalar_t__ merge; scalar_t__ initial; scalar_t__ boundary; scalar_t__ commit; } ;


 scalar_t__ FUNC_0 (struct graph_symbol const*) ;
 scalar_t__ FUNC_1 (struct graph_symbol const*) ;
 scalar_t__ FUNC_2 (struct graph_symbol const*) ;
 scalar_t__ FUNC_3 (struct graph_symbol const*) ;
 scalar_t__ FUNC_4 (struct graph_symbol const*) ;
 scalar_t__ FUNC_5 (struct graph_symbol const*) ;
 scalar_t__ FUNC_6 (struct graph_symbol const*) ;
 scalar_t__ FUNC_7 (struct graph_symbol const*) ;
 scalar_t__ FUNC_8 (struct graph_symbol const*) ;
 scalar_t__ FUNC_9 (struct graph_symbol const*) ;
 scalar_t__ FUNC_10 (struct graph_symbol const*) ;
 scalar_t__ FUNC_11 (struct graph_symbol const*) ;

__attribute__((used)) static const char *
FUNC_12(const struct graph_symbol *VAR_0)
{
 if (VAR_0->commit) {
  if (VAR_0->boundary)
   return " o";
  else if (VAR_0->initial)
   return " I";
  else if (VAR_0->merge)
   return " M";
  return " *";
 }

 if (FUNC_0(VAR_0))
  return "-+";

 if (FUNC_11(VAR_0))
  return "-|";

 if (FUNC_1(VAR_0))
  return "-|";

 if (FUNC_10(VAR_0))
  return " |";

 if (FUNC_9(VAR_0))
  return "-'";

 if (FUNC_5(VAR_0))
  return "-+";

 if (FUNC_3(VAR_0))
  return "--";

 if (FUNC_2(VAR_0))
  return " +";

 if (FUNC_8(VAR_0))
  return "-.";

 if (FUNC_7(VAR_0))
  return " .";

 if (FUNC_4(VAR_0))
  return "-.";

 if (FUNC_6(VAR_0))
  return "-+";

 return "  ";
}
