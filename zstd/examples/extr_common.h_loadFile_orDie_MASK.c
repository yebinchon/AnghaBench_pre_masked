
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int * const) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*,char*) ;
 size_t FUNC_5 (void*,int,size_t const,int * const) ;
 size_t FUNC_6 (char const*) ;
 int VAR_2 ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static size_t FUNC_8(const char* VAR_3, void* VAR_4, size_t VAR_5)
{
    size_t const VAR_6 = FUNC_6(VAR_3);
    FUNC_0(VAR_6 <= VAR_5, "File too large!");

    FILE* const VAR_7 = FUNC_3(VAR_3, "rb");
    size_t const VAR_8 = FUNC_5(VAR_4, 1, VAR_6, VAR_7);
    if (VAR_8 != (size_t)VAR_6) {
        FUNC_4(VAR_2, "fread: %s : %s \n", VAR_3, FUNC_7(VAR_1));
        FUNC_1(VAR_0);
    }
    FUNC_2(VAR_7);
    return VAR_6;
}
