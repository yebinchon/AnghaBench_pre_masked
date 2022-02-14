
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int level; int L; TYPE_1__* capture; } ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_2__ MatchState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(MatchState *VAR_2, int VAR_3)
{
  VAR_3 -= '1';
  if (VAR_3 < 0 || VAR_3 >= VAR_2->level || VAR_2->capture[VAR_3].len == VAR_0)
    FUNC_0(VAR_2->L, VAR_1);
  return VAR_3;
}
