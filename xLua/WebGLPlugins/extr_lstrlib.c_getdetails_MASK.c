
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxalign; int L; } ;
typedef scalar_t__ KOption ;
typedef TYPE_1__ Header ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const**,int*) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static KOption FUNC_2 (Header *VAR_2, size_t VAR_3,
                           const char **VAR_4, int *VAR_5, int *VAR_6) {
  KOption VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_5);
  int VAR_8 = *VAR_5;
  if (VAR_7 == VAR_1) {
    if (**VAR_4 == '\0' || FUNC_0(VAR_2, VAR_4, &VAR_8) == VAR_0 || VAR_8 == 0)
      FUNC_1(VAR_2->L, 1, "invalid next option for option 'X'");
  }
  if (VAR_8 <= 1 || VAR_7 == VAR_0)
    *VAR_6 = 0;
  else {
    if (VAR_8 > VAR_2->maxalign)
      VAR_8 = VAR_2->maxalign;
    if ((VAR_8 & (VAR_8 - 1)) != 0)
      FUNC_1(VAR_2->L, 1, "format asks for alignment not power of 2");
    *VAR_6 = (VAR_8 - (int)(VAR_3 & (VAR_8 - 1))) & (VAR_8 - 1);
  }
  return VAR_7;
}
