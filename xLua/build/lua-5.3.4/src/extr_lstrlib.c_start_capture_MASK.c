
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
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2 (MatchState *VAR_1, const char *VAR_2,
                                    const char *VAR_3, int VAR_4) {
  const char *VAR_5;
  int VAR_6 = VAR_1->level;
  if (VAR_6 >= VAR_0) FUNC_0(VAR_1->L, "too many captures");
  VAR_1->capture[VAR_6].init = VAR_2;
  VAR_1->capture[VAR_6].len = VAR_4;
  VAR_1->level = VAR_6+1;
  if ((VAR_5=FUNC_1(VAR_1, VAR_2, VAR_3)) == ((void*)0))
    VAR_1->level--;
  return VAR_5;
}
