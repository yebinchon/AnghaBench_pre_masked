
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, uint64_t VAR_3) {
        ssize_t VAR_4;

        VAR_4 = FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
        if (VAR_4 < 0)
                return -VAR_1;
        if (VAR_4 != sizeof(VAR_3))
                return -VAR_0;

        return 0;
}
