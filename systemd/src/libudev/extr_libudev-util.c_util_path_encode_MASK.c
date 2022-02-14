
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,int) ;

size_t FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2) {
        size_t VAR_3, VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        for (VAR_3 = 0, VAR_4 = 0; VAR_0[VAR_3] != '\0'; VAR_3++) {
                if (VAR_0[VAR_3] == '/') {
                        if (VAR_4+4 >= VAR_2) {
                                VAR_4 = 0;
                                break;
                        }
                        FUNC_1(&VAR_1[VAR_4], "\\x2f", 4);
                        VAR_4 += 4;
                } else if (VAR_0[VAR_3] == '\\') {
                        if (VAR_4+4 >= VAR_2) {
                                VAR_4 = 0;
                                break;
                        }
                        FUNC_1(&VAR_1[VAR_4], "\\x5c", 4);
                        VAR_4 += 4;
                } else {
                        if (VAR_4+1 >= VAR_2) {
                                VAR_4 = 0;
                                break;
                        }
                        VAR_1[VAR_4] = VAR_0[VAR_3];
                        VAR_4++;
                }
        }
        VAR_1[VAR_4] = '\0';
        return VAR_4;
}
