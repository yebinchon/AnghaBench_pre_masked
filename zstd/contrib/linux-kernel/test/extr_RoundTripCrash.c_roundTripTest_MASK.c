
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_parameters ;


 size_t FUNC_0 (int,size_t) ;
 size_t FUNC_1 (int ,void*,size_t,void const*,size_t,int const) ;
 size_t FUNC_2 (int ,void*,size_t,void*,size_t const) ;
 int FUNC_3 (size_t const) ;
 int FUNC_4 (int const,size_t,int ) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int) ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_7 (void const*,size_t const,int ) ;

__attribute__((used)) static size_t FUNC_8(void* VAR_4, size_t VAR_5,
                            void* VAR_6, size_t VAR_7,
                      const void* VAR_8, size_t VAR_9)
{
    size_t const VAR_10 = FUNC_0(128, VAR_9);
    unsigned const VAR_11 = FUNC_7(VAR_8, VAR_10, 0);
    int const VAR_12 = VAR_11 % VAR_2;
    ZSTD_parameters const VAR_13 = FUNC_4(VAR_12, VAR_9, 0);
    size_t const VAR_14 = FUNC_1(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13);
    if (FUNC_5(VAR_14)) {
        FUNC_6(VAR_3, "Compression error : %u \n", FUNC_3(VAR_14));
        return VAR_14;
    }
    return FUNC_2(VAR_1, VAR_4, VAR_5, VAR_6, VAR_14);
}
