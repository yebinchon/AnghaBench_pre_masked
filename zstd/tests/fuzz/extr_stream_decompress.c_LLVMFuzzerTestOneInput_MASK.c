
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ZSTD_outBuffer ;
struct TYPE_4__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_1__ ZSTD_inBuffer ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 size_t FUNC_7 (int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (size_t const) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_10 (int const**,size_t*,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;

int FUNC_13(const uint8_t *VAR_4, size_t VAR_5)
{


    FUZZ_dataProducer_t *VAR_6 = FUNC_2(VAR_4, VAR_5);
    VAR_5 = FUNC_4(VAR_6);


    if (!VAR_1) {
      VAR_1 = FUNC_12(VAR_3);
        FUNC_0(VAR_1);
      }

    if (!VAR_2) {
        VAR_2 = FUNC_6();
        FUNC_0(VAR_2);
    } else {
        FUNC_1(FUNC_5(VAR_2, VAR_0));
    }

    while (VAR_5 > 0) {
        ZSTD_inBuffer VAR_7 = FUNC_10(&VAR_4, &VAR_5, VAR_6);
        while (VAR_7.pos != VAR_7.size) {
            ZSTD_outBuffer VAR_8 = FUNC_11(VAR_6);
            size_t const VAR_9 = FUNC_7(VAR_2, &VAR_8, &VAR_7);
            if (FUNC_9(VAR_9)) goto error;
        }
    }

error:

    FUNC_8(VAR_2); VAR_2 = ((void*)0);

    FUNC_3(VAR_6);
    return 0;
}
