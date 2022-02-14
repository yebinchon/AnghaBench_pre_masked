
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, size_t VAR_1) {
        size_t VAR_2;

        FUNC_0(VAR_0);

        if (VAR_1 < 2)
                return 0;

        if (VAR_0[0] != '_')
                return 0;


        if (!(VAR_0[1] >= 'A' && VAR_0[1] <= 'Z') &&
            !(VAR_0[1] >= 'a' && VAR_0[1] <= 'z'))
                return 0;


        for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2++) {
                if (!(VAR_0[VAR_2] >= 'A' && VAR_0[VAR_2] <= 'Z') &&
                    !(VAR_0[VAR_2] >= 'a' && VAR_0[VAR_2] <= 'z') &&
                    !(VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9') &&
                    VAR_0[VAR_2] != '-')
                        return 0;
        }

        return 1;
}
