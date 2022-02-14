
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3) {
        const uint8_t *VAR_4 = VAR_0, *VAR_5 = VAR_2;
        size_t VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_1 && VAR_6 < VAR_3; VAR_6++) {

                if (VAR_4[VAR_6] != VAR_5[VAR_6])
                        return 0;

                if (VAR_4[VAR_6] == '=')
                        return 1;
        }

        FUNC_0("\"=\" not found");
}
