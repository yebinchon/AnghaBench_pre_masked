
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t const u32 ;
typedef int ostream_t ;
typedef int istream_t ;


 int FUNC_0 () ;
 int * FUNC_1 (int *,size_t const) ;
 int * FUNC_2 (int * const,size_t const) ;
 size_t const FUNC_3 (int *) ;
 int FUNC_4 (int * const,int const* const,size_t const) ;

__attribute__((used)) static u32 FUNC_5(const size_t VAR_0, istream_t *VAR_1,
                         ostream_t *const VAR_2) {


    if (VAR_0 > FUNC_3(VAR_1)) {
        FUNC_0();
    }

    u8 *const VAR_3 = FUNC_2(VAR_2, VAR_0);
    const u8 *const VAR_4 =
         FUNC_1(VAR_1, VAR_0);

    FUNC_4(VAR_3, VAR_4, VAR_0);

    return VAR_0;
}
