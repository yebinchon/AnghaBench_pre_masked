
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct timespec*,scalar_t__) ;

int FUNC_3(void) {
        struct timespec VAR_3;

        if (FUNC_1(VAR_0) >= VAR_1)
                return 0;

        if (FUNC_0(VAR_0, FUNC_2(&VAR_3, VAR_1)) < 0)
                return -VAR_2;

        return 1;
}
