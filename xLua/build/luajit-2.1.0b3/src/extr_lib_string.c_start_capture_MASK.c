
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int level; TYPE_1__* capture; int L; } ;
struct TYPE_5__ {char const* init; int len; } ;
typedef TYPE_2__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(MatchState *VAR_2, const char *VAR_3,
     const char *VAR_4, int VAR_5)
{
  const char *VAR_6;
  int VAR_7 = VAR_2->level;
  if (VAR_7 >= VAR_1) FUNC_0(VAR_2->L, VAR_0);
  VAR_2->capture[VAR_7].init = VAR_3;
  VAR_2->capture[VAR_7].len = VAR_5;
  VAR_2->level = VAR_7+1;
  if ((VAR_6=FUNC_1(VAR_2, VAR_3, VAR_4)) == ((void*)0))
    VAR_2->level--;
  return VAR_6;
}
