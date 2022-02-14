
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* val; int len; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_3__*) ;

void
FUNC_3(JsonbParseState *VAR_1, const char *VAR_2, JsonbValue *VAR_3)
{
 JsonbValue VAR_4;

 FUNC_0(VAR_2 != ((void*)0));
 if (VAR_3 == ((void*)0))
  return;

 VAR_4.type = VAR_0;
 VAR_4.val.string.val = (char *) VAR_2;
 VAR_4.val.string.len = FUNC_1(VAR_2);

 FUNC_2(VAR_1, &VAR_4, VAR_3);
}
