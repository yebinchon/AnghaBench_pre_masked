
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int,struct msghdr*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_6, struct msghdr *VAR_7, int VAR_8) {
        int VAR_9;

        FUNC_0(VAR_6 >= 0);
        FUNC_0(VAR_7);

        for (;;) {
                if (FUNC_2(VAR_6, VAR_7, VAR_8) >= 0)
                        return 0;

                if (VAR_5 == VAR_1)
                        continue;

                if (VAR_5 != VAR_0)
                        return -VAR_5;

                VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_4);
                if (VAR_9 < 0)
                        return VAR_9;
                if (VAR_9 == 0)
                        return -VAR_2;
        }
}
