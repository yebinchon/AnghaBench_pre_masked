
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* src_end; int L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const char *FUNC_1(MatchState *VAR_1, const char *VAR_2, const char *VAR_3)
{
  if (*VAR_3 == 0 || *(VAR_3+1) == 0)
    FUNC_0(VAR_1->L, VAR_0);
  if (*VAR_2 != *VAR_3) {
    return ((void*)0);
  } else {
    int VAR_4 = *VAR_3;
    int VAR_5 = *(VAR_3+1);
    int VAR_6 = 1;
    while (++VAR_2 < VAR_1->src_end) {
      if (*VAR_2 == VAR_5) {
 if (--VAR_6 == 0) return VAR_2+1;
      } else if (*VAR_2 == VAR_4) {
 VAR_6++;
      }
    }
  }
  return ((void*)0);
}
