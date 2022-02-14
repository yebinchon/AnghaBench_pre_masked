
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_3, uint64_t *VAR_4, uint64_t VAR_5, sd_bus_error *VAR_6) {
        FUNC_0(VAR_4);

        if (VAR_3 < 0)
                return FUNC_1(VAR_6, VAR_0, "Invalid interface index");

        if (*VAR_4 & ~(VAR_2|VAR_1|VAR_5))
                return FUNC_1(VAR_6, VAR_0, "Invalid flags parameter");

        if ((*VAR_4 & VAR_2) == 0)
                *VAR_4 |= VAR_2;

        return 0;
}
