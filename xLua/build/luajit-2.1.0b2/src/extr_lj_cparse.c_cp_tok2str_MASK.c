
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef scalar_t__ CPToken ;
typedef TYPE_1__ CPState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const** VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static const char *FUNC_3(CPState *VAR_3, CPToken VAR_4)
{
  FUNC_2(VAR_4 < VAR_0);
  if (VAR_4 > VAR_1)
    return VAR_2[VAR_4-VAR_1-1];
  else if (!FUNC_0(VAR_4))
    return FUNC_1(VAR_3->L, "%c", VAR_4);
  else
    return FUNC_1(VAR_3->L, "char(%d)", VAR_4);
}
