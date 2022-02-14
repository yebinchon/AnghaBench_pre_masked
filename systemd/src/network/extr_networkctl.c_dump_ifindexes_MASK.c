
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,int ,char const*,int ,int const) ;

__attribute__((used)) static int FUNC_2(Table *VAR_3, const char *VAR_4, const int *VAR_5) {
        unsigned VAR_6;
        int VAR_7;

        FUNC_0(VAR_4);

        if (!VAR_5 || VAR_5[0] <= 0)
                return 0;

        for (VAR_6 = 0; VAR_5[VAR_6] > 0; VAR_6++) {
                VAR_7 = FUNC_1(VAR_3,
                                   VAR_0,
                                   VAR_2, VAR_6 == 0 ? VAR_4 : "",
                                   VAR_1, VAR_5[VAR_6]);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        return 0;
}
