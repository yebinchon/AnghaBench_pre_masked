
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* p_end; int L; } ;
typedef TYPE_1__ MatchState ;



 int FUNC_0 (int ,char*) ;

__attribute__((used)) static const char *FUNC_1 (MatchState *VAR_0, const char *VAR_1) {
  switch (*VAR_1++) {
    case 128: {
      if (VAR_1 == VAR_0->p_end)
        FUNC_0(VAR_0->L, "malformed pattern (ends with '%%')");
      return VAR_1+1;
    }
    case '[': {
      if (*VAR_1 == '^') VAR_1++;
      do {
        if (VAR_1 == VAR_0->p_end)
          FUNC_0(VAR_0->L, "malformed pattern (missing ']')");
        if (*(VAR_1++) == 128 && VAR_1 < VAR_0->p_end)
          VAR_1++;
      } while (*VAR_1 != ']');
      return VAR_1+1;
    }
    default: {
      return VAR_1;
    }
  }
}
