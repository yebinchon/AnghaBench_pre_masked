
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int stream_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int *,char const**,int) ;

__attribute__((used)) static bool FUNC_2(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    int VAR_2 = FUNC_1(VAR_0, &VAR_1, 256);
    if (VAR_2 < 3)
        return 0;
    if (VAR_1[0] != 'P' ||
        VAR_1[1] < '1' || VAR_1[1] > '6' ||
        !FUNC_0(VAR_1[2]))
        return 0;

    int VAR_3 = 0;
    for (int VAR_4 = 3, VAR_5 = 0; VAR_4 < VAR_2 && VAR_3 < 2; VAR_4++) {
        if (FUNC_0(VAR_1[VAR_4])) {
            if (VAR_5) {
                VAR_5 = 0;
                VAR_3++;
            }
        } else {
            if (VAR_1[VAR_4] < '0' || VAR_1[VAR_4] > '9')
                break;
            VAR_5 = 1;
        }
    }
    if (VAR_3 < 2)
        return 0;
    return 1;
}
