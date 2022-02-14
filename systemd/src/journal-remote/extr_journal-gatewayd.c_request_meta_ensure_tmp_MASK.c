
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tmp; } ;
typedef TYPE_1__ RequestMeta ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(RequestMeta *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->tmp)
                FUNC_3(VAR_3->tmp);
        else {
                int VAR_4;

                VAR_4 = FUNC_2("/tmp", VAR_1|VAR_0);
                if (VAR_4 < 0)
                        return VAR_4;

                VAR_3->tmp = FUNC_1(VAR_4, "w+");
                if (!VAR_3->tmp) {
                        FUNC_4(VAR_4);
                        return -VAR_2;
                }
        }

        return 0;
}
