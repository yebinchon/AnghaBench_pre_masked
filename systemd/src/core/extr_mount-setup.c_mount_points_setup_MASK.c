
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, bool VAR_2) {
        unsigned VAR_3;
        int VAR_4 = 0;

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 ++) {
                int VAR_5;

                VAR_5 = FUNC_0(VAR_0 + VAR_3, VAR_2);
                if (VAR_5 != 0 && VAR_4 >= 0)
                        VAR_4 = VAR_5;
        }

        return VAR_4;
}
