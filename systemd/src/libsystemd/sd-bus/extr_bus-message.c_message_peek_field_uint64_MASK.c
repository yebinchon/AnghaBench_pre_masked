
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t sd_bus_message ;


 int FUNC_0 (size_t*,int ) ;
 scalar_t__ FUNC_1 (size_t*) ;
 int VAR_0 ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (size_t*,size_t*,int,int,void**) ;

__attribute__((used)) static int FUNC_4(
                sd_bus_message *VAR_1,
                size_t *VAR_2,
                size_t VAR_3,
                uint64_t *VAR_4) {

        int VAR_5;
        void *VAR_6;

        FUNC_2(VAR_1);
        FUNC_2(VAR_2);

        if (FUNC_1(VAR_1) && VAR_3 != 8)
                return -VAR_0;



        VAR_5 = FUNC_3(VAR_1, VAR_2, 8, 8, &VAR_6);
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_4)
                *VAR_4 = FUNC_0(VAR_1, *(uint64_t*) VAR_6);

        return 0;
}
