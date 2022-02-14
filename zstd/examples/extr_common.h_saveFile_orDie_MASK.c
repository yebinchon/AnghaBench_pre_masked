
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int * const) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 size_t FUNC_4 (void const*,int,size_t,int * const) ;
 int FUNC_5 (char const*) ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const char* VAR_4, const void* VAR_5, size_t VAR_6)
{
    FILE* const VAR_7 = FUNC_2(VAR_4, "wb");
    size_t const VAR_8 = FUNC_4(VAR_5, 1, VAR_6, VAR_7);
    if (VAR_8 != (size_t)VAR_6) {
        FUNC_3(VAR_3, "fwrite: %s : %s \n", VAR_4, FUNC_6(VAR_2));
        FUNC_0(VAR_1);
    }
    if (FUNC_1(VAR_7)) {
        FUNC_5(VAR_4);
        FUNC_0(VAR_0);
    }
}
