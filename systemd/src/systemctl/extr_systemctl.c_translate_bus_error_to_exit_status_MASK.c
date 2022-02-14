
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(int VAR_13, const sd_bus_error *VAR_14) {
        FUNC_0(VAR_14);

        if (!FUNC_2(VAR_14))
                return VAR_13;

        if (FUNC_1(VAR_14, VAR_11) ||
            FUNC_1(VAR_14, VAR_4) ||
            FUNC_1(VAR_14, VAR_2) ||
            FUNC_1(VAR_14, VAR_5))
                return VAR_7;

        if (FUNC_1(VAR_14, VAR_3))
                return VAR_10;

        if (FUNC_1(VAR_14, VAR_0) ||
            FUNC_1(VAR_14, VAR_12))
                return VAR_9;

        if (FUNC_1(VAR_14, VAR_1))
                return VAR_8;

        if (VAR_13 != 0)
                return VAR_13;

        return VAR_6;
}
