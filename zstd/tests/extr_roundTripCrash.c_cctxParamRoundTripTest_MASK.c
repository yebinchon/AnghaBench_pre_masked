
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* member_0; size_t member_1; int pos; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {void const* member_0; size_t member_1; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int,size_t) ;
 unsigned int FUNC_2 (void const*,size_t const,int ) ;
 int FUNC_3 (int * const,int ,int const) ;
 int FUNC_4 (int * const,int * const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int * const,TYPE_1__*,TYPE_2__*,int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 size_t FUNC_8 (void*,size_t,void*,int ) ;
 int VAR_3 ;
 int FUNC_9 (int * const) ;
 int FUNC_10 (int * const) ;

__attribute__((used)) static size_t FUNC_11(void* VAR_4, size_t VAR_5,
                            void* VAR_6, size_t VAR_7,
                      const void* VAR_8, size_t VAR_9)
{
    ZSTD_CCtx* const VAR_10 = FUNC_6();
    ZSTD_CCtx_params* const VAR_11 = FUNC_7();
    ZSTD_inBuffer VAR_12 = { VAR_8, VAR_9, 0 };
    ZSTD_outBuffer VAR_13 = { VAR_6, VAR_7, 0 };

    static const int VAR_14 = 19;
    size_t const VAR_15 = FUNC_1(128, VAR_9);
    unsigned const VAR_16 = FUNC_2(VAR_8, VAR_15, 0);
    int const VAR_17 = VAR_16 % VAR_14;


    FUNC_0( FUNC_3(VAR_11, VAR_0, VAR_17) );
    FUNC_0( FUNC_3(VAR_11, VAR_1, 2) );
    FUNC_0( FUNC_3(VAR_11, VAR_2, 5) );



    FUNC_0( FUNC_4(VAR_10, VAR_11) );

    FUNC_0 (FUNC_5(VAR_10, &VAR_13, &VAR_12, VAR_3) );

    FUNC_10(VAR_11);
    FUNC_9(VAR_10);

    return FUNC_8(VAR_4, VAR_5, VAR_6, VAR_13.pos);
}
