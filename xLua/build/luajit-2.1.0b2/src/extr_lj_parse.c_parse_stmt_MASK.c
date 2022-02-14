
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int tok; int linenumber; } ;
typedef TYPE_1__ LexState ;
typedef int BCLine ;


 int VAR_0 ;


 int VAR_1 ;






 int VAR_2 ;



 int FUNC_0 (TYPE_1__*,int ,int const,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_15(LexState *VAR_3)
{
  BCLine VAR_4 = VAR_3->linenumber;
  switch (VAR_3->tok) {
  case 133:
    FUNC_9(VAR_3, VAR_4);
    break;
  case 128:
    FUNC_14(VAR_3, VAR_4);
    break;
  case 137:
    FUNC_2(VAR_3);
    FUNC_3(VAR_3);
    FUNC_0(VAR_3, VAR_1, 137, VAR_4);
    break;
  case 136:
    FUNC_6(VAR_3, VAR_4);
    break;
  case 130:
    FUNC_12(VAR_3, VAR_4);
    break;
  case 135:
    FUNC_7(VAR_3, VAR_4);
    break;
  case 131:
    FUNC_2(VAR_3);
    FUNC_11(VAR_3);
    break;
  case 129:
    FUNC_13(VAR_3);
    return 1;
  case 138:
    FUNC_2(VAR_3);
    FUNC_4(VAR_3);
    return !VAR_0;





  case 132:
    FUNC_10(VAR_3);
    break;
  case 134:
    if (VAR_0 || FUNC_1(VAR_3) == VAR_2) {
      FUNC_2(VAR_3);
      FUNC_8(VAR_3);
      break;
    }
  default:
    FUNC_5(VAR_3);
    break;
  }
  return 0;
}
