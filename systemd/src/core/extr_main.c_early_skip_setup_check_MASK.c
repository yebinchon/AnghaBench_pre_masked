
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static bool FUNC_1(int VAR_0, char *VAR_1[]) {
        bool VAR_2 = 0;
        int VAR_3;





        for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
                if (FUNC_0(VAR_1[VAR_3], "--switched-root"))
                        return 0;
                else if (FUNC_0(VAR_1[VAR_3], "--deserialize"))
                        VAR_2 = 1;
        }

        return VAR_2;
}
