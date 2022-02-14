
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; } ;
typedef TYPE_1__ LoadF ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (LoadF *VAR_1, int *VAR_2) {
  int VAR_3 = *VAR_2 = FUNC_1(VAR_1);
  if (VAR_3 == '#') {
    do {
      VAR_3 = FUNC_0(VAR_1->f);
    } while (VAR_3 != VAR_0 && VAR_3 != '\n');
    *VAR_2 = FUNC_0(VAR_1->f);
    return 1;
  }
  else return 0;
}
