
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_outBuffer ;
struct TYPE_10__ {int member_2; int member_1; int * member_0; } ;
typedef TYPE_3__ ZSTD_inBuffer ;
struct TYPE_8__ {int checksumFlag; } ;
struct TYPE_9__ {scalar_t__ nbWorkers; TYPE_1__ fParams; } ;
struct TYPE_11__ {TYPE_2__ appliedParams; scalar_t__ frameEnded; } ;
typedef TYPE_4__ ZSTD_CStream ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (size_t const) ;
 size_t VAR_0 ;
 size_t FUNC_2 (TYPE_4__*,int *,TYPE_3__*,int ) ;
 int VAR_1 ;

size_t FUNC_3(ZSTD_CStream* VAR_2, ZSTD_outBuffer* VAR_3)
{
    ZSTD_inBuffer VAR_4 = { ((void*)0), 0, 0 };
    size_t const VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_4, VAR_1);
    FUNC_1( VAR_5 );
    if (VAR_2->appliedParams.nbWorkers > 0) return VAR_5;

    { size_t const VAR_6 = VAR_2->frameEnded ? 0 : VAR_0;
        size_t const VAR_7 = (size_t)(VAR_2->frameEnded ? 0 : VAR_2->appliedParams.fParams.checksumFlag * 4);
        size_t const VAR_8 = VAR_5 + VAR_6 + VAR_7;
        FUNC_0(4, "ZSTD_endStream : remaining to flush : %u", (unsigned)VAR_8);
        return VAR_8;
    }
}
