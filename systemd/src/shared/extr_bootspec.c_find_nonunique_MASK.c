
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BootEntry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(BootEntry *VAR_0, size_t VAR_1, bool *VAR_2) {
        size_t VAR_3, VAR_4;
        bool VAR_5 = 0;

        FUNC_0(VAR_0 || VAR_1 == 0);
        FUNC_0(VAR_2 || VAR_1 == 0);

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
                VAR_2[VAR_3] = 0;

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
                for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
                        if (VAR_3 != VAR_4 && FUNC_2(FUNC_1(VAR_0 + VAR_3),
                                            FUNC_1(VAR_0 + VAR_4)))
                                VAR_5 = VAR_2[VAR_3] = VAR_2[VAR_4] = 1;

        return VAR_5;
}
