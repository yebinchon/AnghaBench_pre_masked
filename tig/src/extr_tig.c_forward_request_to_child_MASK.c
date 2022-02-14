
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* ops; int vid; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct view*) ;

__attribute__((used)) static bool
FUNC_3(struct view *VAR_0, enum request VAR_1)
{
 return FUNC_0() == 2 && FUNC_2(VAR_0) &&
  !FUNC_1(VAR_0->vid, VAR_0->ops->id);
}
