
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int id ;
typedef scalar_t__ be32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__*,int,int ) ;

int FUNC_2(int VAR_3) {
        be32_t VAR_4;
        ssize_t VAR_5;

        VAR_5 = FUNC_1(VAR_3, &VAR_4, sizeof(VAR_4), 0);
        if (VAR_5 < 0)
                return -VAR_2;
        if (VAR_5 != sizeof(VAR_4))
                return -VAR_0;

        return FUNC_0(VAR_1) == VAR_4;
}
