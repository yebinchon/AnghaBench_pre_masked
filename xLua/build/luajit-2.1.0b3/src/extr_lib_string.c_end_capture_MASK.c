
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* capture; } ;
struct TYPE_6__ {char const* len; int init; } ;
typedef TYPE_2__ MatchState ;


 char const* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(MatchState *VAR_1, const char *VAR_2,
          const char *VAR_3)
{
  int VAR_4 = FUNC_0(VAR_1);
  const char *VAR_5;
  VAR_1->capture[VAR_4].len = VAR_2 - VAR_1->capture[VAR_4].init;
  if ((VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3)) == ((void*)0))
    VAR_1->capture[VAR_4].len = VAR_0;
  return VAR_5;
}
