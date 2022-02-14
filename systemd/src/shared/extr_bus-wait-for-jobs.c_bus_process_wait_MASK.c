
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_0) {
        int VAR_1;

        for (;;) {
                VAR_1 = FUNC_0(VAR_0, ((void*)0));
                if (VAR_1 < 0)
                        return VAR_1;
                if (VAR_1 > 0)
                        return 0;

                VAR_1 = FUNC_1(VAR_0, (uint64_t) -1);
                if (VAR_1 < 0)
                        return VAR_1;
        }
}
