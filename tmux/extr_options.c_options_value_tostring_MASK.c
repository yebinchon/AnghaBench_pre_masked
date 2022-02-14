
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union options_value {size_t number; char* string; int style; int cmdlist; } ;
struct options_entry {TYPE_1__* tableentry; } ;
struct TYPE_2__ {int type; char** choices; } ;


 scalar_t__ FUNC_0 (struct options_entry*) ;
 scalar_t__ FUNC_1 (struct options_entry*) ;
 scalar_t__ FUNC_2 (struct options_entry*) ;
 scalar_t__ FUNC_3 (struct options_entry*) ;
 char* FUNC_4 (int ,int ) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (char**,char*,size_t) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static char *
FUNC_11(struct options_entry *VAR_0, union options_value *VAR_1,
    int VAR_2)
{
 char *VAR_3;

 if (FUNC_0(VAR_0))
  return (FUNC_4(VAR_1->cmdlist, 0));
 if (FUNC_3(VAR_0))
  return (FUNC_10(FUNC_8(&VAR_1->style)));
 if (FUNC_1(VAR_0)) {
  switch (VAR_0->tableentry->type) {
  case 130:
   FUNC_9(&VAR_3, "%lld", VAR_1->number);
   break;
  case 131:
   VAR_3 = FUNC_10(FUNC_7(VAR_1->number));
   break;
  case 134:
   VAR_3 = FUNC_10(FUNC_5(VAR_1->number));
   break;
  case 132:
   if (VAR_2)
    FUNC_9(&VAR_3, "%lld", VAR_1->number);
   else
    VAR_3 = FUNC_10(VAR_1->number ? "on" : "off");
   break;
  case 135:
   VAR_3 = FUNC_10(VAR_0->tableentry->choices[VAR_1->number]);
   break;
  case 129:
  case 128:
  case 133:
   FUNC_6("not a number option type");
  }
  return (VAR_3);
 }
 if (FUNC_2(VAR_0))
  return (FUNC_10(VAR_1->string));
 return (FUNC_10(""));
}
