
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t lineno; } ;
struct view {TYPE_2__ pos; int * line; TYPE_1__* ops; int lines; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_3__ {int (* request ) (struct view*,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct view** VAR_4 ;
 scalar_t__ FUNC_0 (struct view*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct view*,int,int *) ;
 int FUNC_3 (struct view*) ;
 scalar_t__ FUNC_4 (struct view*,int ) ;

__attribute__((used)) static enum request
FUNC_5(struct view *VAR_7, enum request VAR_8)
{
 if (!VAR_7 || !VAR_7->lines)
  return VAR_8;

 if (VAR_8 == VAR_0 && !VAR_5 && VAR_6 &&
     FUNC_4(VAR_7, VAR_3)) {
  struct view *VAR_9 = VAR_4[1];

  if (FUNC_0(VAR_9, VAR_8)) {
   FUNC_5(VAR_9, VAR_8);
   return VAR_1;
  }
 }

 if (VAR_8 == VAR_2 && !FUNC_3(VAR_7)) {
  FUNC_1("This view can not be refreshed");
  return VAR_1;
 }

 return VAR_7->ops->request(VAR_7, VAR_8, &VAR_7->line[VAR_7->pos.lineno]);
}
