
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* ops; int vid; int lines; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct view*) ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_2, enum open_flags VAR_3)
{
 bool VAR_4 = !!(VAR_3 & VAR_0) || !VAR_2->lines;

 return (!VAR_4 && !FUNC_0(VAR_2->vid, VAR_2->ops->id)) ||
        ((VAR_3 & VAR_1) && !FUNC_1(VAR_2));
}
