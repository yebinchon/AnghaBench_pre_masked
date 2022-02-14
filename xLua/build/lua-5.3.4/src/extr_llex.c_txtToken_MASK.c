
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buff; int L; } ;
typedef TYPE_1__ LexState ;






 char const* FUNC_0 (int ,char*,int ) ;
 char const* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char) ;

__attribute__((used)) static const char *FUNC_4 (LexState *VAR_0, int VAR_1) {
  switch (VAR_1) {
    case 129: case 128:
    case 131: case 130:
      FUNC_3(VAR_0, '\0');
      return FUNC_0(VAR_0->L, "'%s'", FUNC_2(VAR_0->buff));
    default:
      return FUNC_1(VAR_0, VAR_1);
  }
}
