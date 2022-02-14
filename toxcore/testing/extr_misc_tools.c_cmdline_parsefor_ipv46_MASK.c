
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(int VAR_0, char **VAR_1, uint8_t *VAR_2)
{
    int VAR_3 = 0, VAR_4;

    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
        if (!FUNC_1(VAR_1[VAR_4], "--ipv", 5)) {
            if (VAR_1[VAR_4][5] && !VAR_1[VAR_4][6]) {
                char VAR_5 = VAR_1[VAR_4][5];

                if (VAR_5 == '4')
                    *VAR_2 = 0;
                else if (VAR_5 == '6')
                    *VAR_2 = 1;
                else {
                    FUNC_0("Invalid argument: %s. Try --ipv4 or --ipv6!\n", VAR_1[VAR_4]);
                    return -1;
                }
            } else {
                FUNC_0("Invalid argument: %s. Try --ipv4 or --ipv6!\n", VAR_1[VAR_4]);
                return -1;
            }

            if (VAR_3 != VAR_4 - 1) {
                FUNC_0("Argument must come first: %s.\n", VAR_1[VAR_4]);
                return -1;
            }

            VAR_3++;
        }

    return VAR_3;
}
