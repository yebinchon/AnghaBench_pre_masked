
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blame {TYPE_1__* commit; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct blame *VAR_0, bool VAR_1)
{
 if (!VAR_0->commit)
  FUNC_0("Commit data not loaded yet");
 else if (VAR_1 && FUNC_1(VAR_0->commit->id))
  FUNC_0("No commit exist for the selected line");
 else
  return 1;
 return 0;
}
