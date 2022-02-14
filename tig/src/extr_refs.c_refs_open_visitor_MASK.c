
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct reference {struct ref const* ref; } ;
struct ref {int type; } ;
struct line {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 struct line* FUNC_0 (struct view*,struct reference**,int ,int ,int) ;
 struct ref const* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct view*,struct line*) ;

__attribute__((used)) static bool
FUNC_2(void *VAR_9, const struct ref *VAR_10)
{
 struct view *VAR_11 = VAR_9;
 struct reference *VAR_12;
 bool VAR_13 = VAR_10 == VAR_7;
 struct line *VAR_14;

        if (!VAR_13)
  switch (VAR_8) {
  case 128:
   if (VAR_10->type != VAR_5 && VAR_10->type != VAR_3)
    return 1;
   break;
  case 131:
   if (VAR_10->type != VAR_1 && VAR_10->type != VAR_2)
    return 1;
   break;
  case 129:
   if (VAR_10->type != VAR_6 && VAR_10->type != VAR_4)
    return 1;
   break;
  case 130:
  default:
   break;
  }

 VAR_14 = FUNC_0(VAR_11, &VAR_12, VAR_0, 0, VAR_13);
 if (!VAR_14)
  return 0;

 VAR_12->ref = VAR_10;
 FUNC_1(VAR_11, VAR_14);

 return 1;
}
