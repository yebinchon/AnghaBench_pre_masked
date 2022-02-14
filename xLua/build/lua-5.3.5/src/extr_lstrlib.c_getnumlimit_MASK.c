
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef TYPE_1__ Header ;


 int VAR_0 ;
 int FUNC_0 (char const**,int) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_2 (Header *VAR_1, const char **VAR_2, int VAR_3) {
  int VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 > VAR_0 || VAR_4 <= 0)
    return FUNC_1(VAR_1->L, "integral size (%d) out of limits [1,%d]",
                            VAR_4, VAR_0);
  return VAR_4;
}
