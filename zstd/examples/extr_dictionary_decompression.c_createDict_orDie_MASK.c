
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_DDict ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (void* const,size_t) ;
 int FUNC_2 (void* const) ;
 void* FUNC_3 (char const*,size_t*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static ZSTD_DDict* FUNC_5(const char* VAR_0)
{
    size_t VAR_1;
    FUNC_4("loading dictionary %s \n", VAR_0);
    void* const VAR_2 = FUNC_3(VAR_0, &VAR_1);
    ZSTD_DDict* const VAR_3 = FUNC_1(VAR_2, VAR_1);
    FUNC_0(VAR_3 != ((void*)0), "ZSTD_createDDict() failed!");
    FUNC_2(VAR_2);
    return VAR_3;
}
