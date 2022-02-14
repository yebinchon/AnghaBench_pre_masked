
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const char *FUNC_1(MatchState *VAR_2, const char *VAR_3)
{
  switch (*VAR_3++) {
  case 128:
    if (*VAR_3 == '\0')
      FUNC_0(VAR_2->L, VAR_0);
    return VAR_3+1;
  case '[':
    if (*VAR_3 == '^') VAR_3++;
    do {
      if (*VAR_3 == '\0')
 FUNC_0(VAR_2->L, VAR_1);
      if (*(VAR_3++) == 128 && *VAR_3 != '\0')
 VAR_3++;
    } while (*VAR_3 != ']');
    return VAR_3+1;
  default:
    return VAR_3;
  }
}
