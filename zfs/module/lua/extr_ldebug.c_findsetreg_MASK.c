
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * code; } ;
typedef TYPE_1__ Proto ;
typedef int OpCode ;
typedef int Instruction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;






 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (Proto *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3;
  int VAR_4 = -1;
  int VAR_5 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    Instruction VAR_6 = VAR_0->code[VAR_3];
    OpCode VAR_7 = FUNC_3(VAR_6);
    int VAR_8 = FUNC_0(VAR_6);
    switch (VAR_7) {
      case 131: {
        int VAR_9 = FUNC_1(VAR_6);
        if (VAR_8 <= VAR_2 && VAR_2 <= VAR_8 + VAR_9)
          VAR_4 = FUNC_4(VAR_3, VAR_5);
        break;
      }
      case 128: {
        if (VAR_2 >= VAR_8 + 2)
          VAR_4 = FUNC_4(VAR_3, VAR_5);
        break;
      }
      case 133:
      case 130: {
        if (VAR_2 >= VAR_8)
          VAR_4 = FUNC_4(VAR_3, VAR_5);
        break;
      }
      case 132: {
        int VAR_10 = FUNC_2(VAR_6);
        int VAR_11 = VAR_3 + 1 + VAR_10;

        if (VAR_3 < VAR_11 && VAR_11 <= VAR_1) {
          if (VAR_11 > VAR_5)
            VAR_5 = VAR_11;
        }
        break;
      }
      case 129: {
        if (VAR_2 == VAR_8)
          VAR_4 = FUNC_4(VAR_3, VAR_5);
        break;
      }
      default:
        if (FUNC_5(VAR_7) && VAR_2 == VAR_8)
          VAR_4 = FUNC_4(VAR_3, VAR_5);
        break;
    }
  }
  return VAR_4;
}
