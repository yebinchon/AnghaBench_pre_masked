
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_3 (LexState *VAR_0, expdesc *VAR_1) {

  int VAR_2 = 1;
  FUNC_0(VAR_0, VAR_1);
  while (FUNC_2(VAR_0, ',')) {
    FUNC_1(VAR_0->fs, VAR_1);
    FUNC_0(VAR_0, VAR_1);
    VAR_2++;
  }
  return VAR_2;
}
