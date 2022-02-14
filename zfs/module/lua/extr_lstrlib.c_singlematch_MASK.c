
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* src_end; } ;
typedef TYPE_1__ MatchState ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char const*,char const*) ;
 int FUNC_2 (char const) ;

__attribute__((used)) static int FUNC_3 (MatchState *VAR_0, const char *VAR_1, const char *VAR_2,
                        const char *VAR_3) {
  if (VAR_1 >= VAR_0->src_end)
    return 0;
  else {
    int VAR_4 = FUNC_2(*VAR_1);
    switch (*VAR_2) {
      case '.': return 1;
      case 128: return FUNC_0(VAR_4, FUNC_2(*(VAR_2+1)));
      case '[': return FUNC_1(VAR_4, VAR_2, VAR_3-1);
      default: return (FUNC_2(*VAR_2) == VAR_4);
    }
  }
}
