
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_4, uid_t VAR_5) {
        int VAR_6;

        FUNC_1(VAR_4 >= 0);


        if (FUNC_3(VAR_4) < 1) {
                if (FUNC_0(VAR_3, VAR_0, VAR_1))
                        return 0;

                return -VAR_3;
        }


        VAR_6 = FUNC_2(VAR_4, VAR_2, VAR_5, -1);
        if (VAR_6 < 0)
                return VAR_6;

        return 1;
}
