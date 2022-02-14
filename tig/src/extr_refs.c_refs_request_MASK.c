
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct view {int dummy; } ;
struct reference {struct ref* ref; } ;
struct ref {char* name; } ;
struct line {struct reference* data; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_3__ {int argv; int env; } ;


 char const* FUNC_0 (int ,int ,char*,char*,char*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_1 (int ,int *,char const**,int,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct view*,TYPE_1__*,int) ;
 int FUNC_6 (struct view*) ;
 int FUNC_7 (struct reference*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;

__attribute__((used)) static enum request
FUNC_10(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 struct reference *VAR_8 = VAR_7->data;

 switch (VAR_6) {
 case 128:
  FUNC_3(1);
  FUNC_6(VAR_5);
  return VAR_2;

 case 129:
 {
  const struct ref *VAR_9 = VAR_8->ref;
  const char *VAR_10[] = {
   FUNC_0(VAR_3, FUNC_2(),
    "%(mainargs)", "",
    FUNC_7(VAR_8) ? "--all" : VAR_9->name, "",
    FUNC_9(), FUNC_4())
  };

  if (!FUNC_1(VAR_4.env, &VAR_4.argv, VAR_10, 0, 0))
   FUNC_8("Failed to format argument");
  else
   FUNC_5(VAR_5, &VAR_4, VAR_1 | VAR_0);
  return VAR_2;
 }
 default:
  return VAR_6;
 }
}
