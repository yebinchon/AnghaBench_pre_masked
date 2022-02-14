
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int ref; int pipe; } ;
struct line {struct blame* data; } ;
struct blame {TYPE_1__* commit; } ;
typedef enum request { ____Placeholder_request } request ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int * parent_id; int filename; int id; } ;


 char const* FUNC_0 (int ,int ,int ,int ) ;
 char const* FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int FUNC_2 (struct view*) ;
 int FUNC_3 (struct view*,struct blame*,int) ;
 int FUNC_4 (struct blame*,int) ;
 int FUNC_5 () ;
 struct view VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (struct view*,struct view*,char const**,int *,int) ;
 int FUNC_8 (struct view*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct view*) ;

__attribute__((used)) static enum request
FUNC_13(struct view *VAR_6, enum request VAR_7, struct line *VAR_8)
{
 enum open_flags VAR_9 = FUNC_12(VAR_6) ? VAR_2 : VAR_1;
 struct blame *VAR_10 = VAR_8->data;
 struct view *VAR_11 = &VAR_4;

 switch (VAR_7) {
 case 128:
 case 129:
  if (!FUNC_4(VAR_10, VAR_7 == 128))
   break;
  FUNC_3(VAR_6, VAR_10, VAR_7 == 129);
  break;

 case 131:
  FUNC_2(VAR_6);
  break;

 case 130:
  if (!FUNC_4(VAR_10, 0))
   break;

  if (FUNC_12(VAR_11) &&
      !FUNC_9(VAR_10->commit->id, VAR_11->ref))
   break;

  if (FUNC_11(VAR_10->commit->id)) {
   const char *VAR_12[] = {
    FUNC_0(VAR_5,
     FUNC_5(),
     FUNC_6(),
     VAR_10->commit->filename)
   };
   const char *VAR_13[] = {
    FUNC_1(VAR_5,
     FUNC_5(),
     FUNC_6(),
     VAR_10->commit->filename)
   };
   const char **VAR_14 = *VAR_10->commit->parent_id
    ? VAR_12 : VAR_13;

   FUNC_7(VAR_6, VAR_11, VAR_14, ((void*)0), VAR_9);
   if (VAR_11->pipe)
    FUNC_10(VAR_11->ref, VAR_0);
  } else {
   FUNC_8(VAR_6, VAR_9);
  }
  break;

 default:
  return VAR_7;
 }

 return VAR_3;
}
