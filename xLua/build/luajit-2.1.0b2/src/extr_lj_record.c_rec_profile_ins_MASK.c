
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pt; scalar_t__ prof_mode; } ;
typedef TYPE_1__ jit_State ;
typedef int BCIns ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_2, const BCIns *VAR_3)
{
  if (VAR_2->prof_mode && FUNC_3(VAR_2, VAR_2->pt, VAR_3)) {
    FUNC_1(FUNC_0(VAR_1, VAR_0), 0, 0);
    FUNC_2(VAR_2);
  }
}
