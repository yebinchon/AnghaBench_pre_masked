
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,int,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
                int VAR_2, uint64_t VAR_3,
                int VAR_4, uint64_t VAR_5,
                uint64_t VAR_6,
                void *VAR_7) {

        ssize_t VAR_8;
        int VAR_9;

        VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_9 >= 0)
                return VAR_9;

        VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_6, VAR_3);
        if (VAR_8 < 0)
                return -VAR_1;
        if ((uint64_t) VAR_8 != VAR_6)
                return -VAR_0;

        VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_6, VAR_5);
        if (VAR_8 < 0)
                return -VAR_1;
        if ((uint64_t) VAR_8 != VAR_6)
                return -VAR_0;

        return 0;
}
