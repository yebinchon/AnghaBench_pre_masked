
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t size; int member_2; int member_1; int const* member_0; } ;
typedef TYPE_1__ ZSTD_inBuffer ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,int,size_t) ;

__attribute__((used)) static ZSTD_inBuffer FUNC_2(const uint8_t **VAR_0, size_t *VAR_1,
                                  FUZZ_dataProducer_t *VAR_2)
{
    ZSTD_inBuffer VAR_3 = { *VAR_0, 0, 0 };

    FUNC_0(*VAR_1 > 0);
    VAR_3.size = (FUNC_1(VAR_2, 1, *VAR_1));
    FUNC_0(VAR_3.size <= *VAR_1);
    *VAR_0 += VAR_3.size;
    *VAR_1 -= VAR_3.size;

    return VAR_3;
}
