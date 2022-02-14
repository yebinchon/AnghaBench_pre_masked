
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bo_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int const*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static bo_t *FUNC_7(const uint8_t *VAR_0, size_t VAR_1)
{
    bo_t *VAR_2 = FUNC_5("SMI ");
    if(!VAR_2)
        return ((void*)0);

    if (VAR_1 > 0x4e) {
        const uint8_t *VAR_3 = &VAR_0[VAR_1];
        const uint8_t *VAR_4 = &VAR_0[0x46];

        while (VAR_4 + 8 < VAR_3) {
            int VAR_5 = FUNC_0(VAR_4);
            if (VAR_5 <= 1)
                break;
            if (!FUNC_6((const char *)&VAR_4[4], "SMI ", 4)) {
                FUNC_4(VAR_2, VAR_3 - VAR_4 - 8, &VAR_4[8]);
                return VAR_2;
            }
            VAR_4 += VAR_5;
        }
    }


    FUNC_3(VAR_2, "SEQH");
    FUNC_1(VAR_2, 0x5);
    FUNC_1(VAR_2, 0xe2c0211d);
    FUNC_2(VAR_2, 0xc0);

    return VAR_2;
}
