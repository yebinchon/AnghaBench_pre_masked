
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct view {int dummy; } ;
struct line {struct commit* data; } ;
struct commit {int id; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_3__ {int argv; int env; } ;


 char const* FUNC_0 (int ,int ,char*,char*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int ,int *,char const**,int,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (struct view*,int,struct line*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct view*,TYPE_1__*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

__attribute__((used)) static enum request
FUNC_8(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 struct commit *VAR_8 = VAR_7->data;

 switch (VAR_6) {
 case 128:
 {
  const char *VAR_9[] = {
   FUNC_0(VAR_3, FUNC_2(),
    "%(mainargs)", "", VAR_8->id, "",
    FUNC_7(), FUNC_3())
  };

  if (!FUNC_1(VAR_4.env, &VAR_4.argv, VAR_9, 0, 0))
   FUNC_6("Failed to format argument");
  else
   FUNC_5(VAR_5, &VAR_4, VAR_1 | VAR_0);
  return VAR_2;
 }

 default:
  return FUNC_4(VAR_5, VAR_6, VAR_7);
 }
}
