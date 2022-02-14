
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int * const) ;
 scalar_t__ FUNC_2 (int * const) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (int const*,int,size_t,int * const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
    FILE* const VAR_4 = FUNC_3(VAR_1, "wb");
    if (!VAR_4) {
        FUNC_4(VAR_0, "failed to open file %s \n", VAR_1);
        FUNC_0(1);
    }

    size_t VAR_5 = 0;
    while (VAR_5 < VAR_3) {
        VAR_5 += FUNC_5(VAR_2+VAR_5, 1, VAR_3, VAR_4);
        if (FUNC_2(VAR_4)) {
            FUNC_4(VAR_0, "error while writing file %s\n", VAR_1);
            FUNC_0(1);
    } }

    FUNC_1(VAR_4);
}
