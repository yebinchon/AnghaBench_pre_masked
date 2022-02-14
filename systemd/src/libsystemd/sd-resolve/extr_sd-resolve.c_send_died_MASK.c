
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int type; } ;
typedef TYPE_1__ RHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_3) {
        RHeader VAR_4 = {
                .type = VAR_1,
                .length = sizeof(RHeader),
        };

        FUNC_0(VAR_3 >= 0);

        if (FUNC_1(VAR_3, &VAR_4, VAR_4.length, VAR_0) < 0)
                return -VAR_2;

        return 0;
}
