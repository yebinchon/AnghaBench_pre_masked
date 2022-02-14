
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef scalar_t__ LexToken ;
typedef TYPE_1__ LexState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (int ,char*,scalar_t__) ;
 char const** VAR_1 ;

const char *FUNC_2(LexState *VAR_2, LexToken VAR_3)
{
  if (VAR_3 > VAR_0)
    return VAR_1[VAR_3-VAR_0-1];
  else if (!FUNC_0(VAR_3))
    return FUNC_1(VAR_2->L, "%c", VAR_3);
  else
    return FUNC_1(VAR_2->L, "char(%d)", VAR_3);
}
