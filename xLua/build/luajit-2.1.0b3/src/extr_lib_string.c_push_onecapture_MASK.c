
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ptrdiff_t ;
struct TYPE_5__ {int level; int src_init; TYPE_1__* capture; int L; } ;
struct TYPE_4__ {char const* init; scalar_t__ len; } ;
typedef TYPE_2__ MatchState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(MatchState *VAR_4, int VAR_5, const char *VAR_6, const char *VAR_7)
{
  if (VAR_5 >= VAR_4->level) {
    if (VAR_5 == 0)
      FUNC_2(VAR_4->L, VAR_6, (size_t)(VAR_7 - VAR_6));
    else
      FUNC_0(VAR_4->L, VAR_2);
  } else {
    ptrdiff_t VAR_8 = VAR_4->capture[VAR_5].len;
    if (VAR_8 == VAR_1) FUNC_0(VAR_4->L, VAR_3);
    if (VAR_8 == VAR_0)
      FUNC_1(VAR_4->L, VAR_4->capture[VAR_5].init - VAR_4->src_init + 1);
    else
      FUNC_2(VAR_4->L, VAR_4->capture[VAR_5].init, (size_t)VAR_8);
  }
}
