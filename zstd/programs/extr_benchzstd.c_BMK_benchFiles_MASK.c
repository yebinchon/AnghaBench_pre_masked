
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_compressionParameters ;
typedef int BMK_benchOutcome_t ;
typedef int BMK_advancedParams_t ;


 int FUNC_0 (char const* const*,unsigned int,char const*,int,int const*,int,int const*) ;
 int FUNC_1 () ;

BMK_benchOutcome_t FUNC_2(
                    const char* const * VAR_0, unsigned VAR_1,
                    const char* VAR_2,
                    int VAR_3, const ZSTD_compressionParameters* VAR_4,
                    int VAR_5)
{
    BMK_advancedParams_t const VAR_6 = FUNC_1();
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
}
