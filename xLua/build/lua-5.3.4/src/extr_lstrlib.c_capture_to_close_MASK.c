
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
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1 (MatchState *VAR_1) {
  int VAR_2 = VAR_1->level;
  for (VAR_2--; VAR_2>=0; VAR_2--)
    if (VAR_1->capture[VAR_2].len == VAR_0) return VAR_2;
  return FUNC_0(VAR_1->L, "invalid pattern capture");
}
