
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
typedef TYPE_1__ RN ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (RN *VAR_0, int VAR_1) {
  int VAR_2 = 0;
  while ((VAR_1 ? FUNC_1(VAR_0->c) : FUNC_0(VAR_0->c)) && FUNC_2(VAR_0))
    VAR_2++;
  return VAR_2;
}
