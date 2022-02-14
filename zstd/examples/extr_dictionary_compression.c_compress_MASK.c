
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (size_t const) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (int * const,void* const,size_t const,void* const,size_t,int const*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int * const) ;
 int FUNC_6 (void* const) ;
 void* FUNC_7 (char const*,size_t*) ;
 void* FUNC_8 (size_t const) ;
 int FUNC_9 (char*,char const*,unsigned int,unsigned int,char const*) ;
 int FUNC_10 (char const*,void* const,size_t const) ;

__attribute__((used)) static void FUNC_11(const char* VAR_0, const char* VAR_1, const ZSTD_CDict* VAR_2)
{
    size_t VAR_3;
    void* const VAR_4 = FUNC_7(VAR_0, &VAR_3);
    size_t const VAR_5 = FUNC_2(VAR_3);
    void* const VAR_6 = FUNC_8(VAR_5);







    ZSTD_CCtx* const VAR_7 = FUNC_4();
    FUNC_0(VAR_7 != ((void*)0), "ZSTD_createCCtx() failed!");
    size_t const VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_5, VAR_4, VAR_3, VAR_2);
    FUNC_1(VAR_8);

    FUNC_10(VAR_1, VAR_6, VAR_8);


    FUNC_9("%25s : %6u -> %7u - %s \n", VAR_0, (unsigned)VAR_3, (unsigned)VAR_8, VAR_1);

    FUNC_5(VAR_7);
    FUNC_6(VAR_4);
    FUNC_6(VAR_6);
}
