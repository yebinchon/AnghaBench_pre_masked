
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* litlength_repeatMode; void* matchlength_repeatMode; void* offcode_repeatMode; } ;
struct TYPE_6__ {int repeatMode; } ;
struct TYPE_7__ {TYPE_3__ fse; TYPE_1__ huf; } ;
struct TYPE_9__ {TYPE_2__ entropy; int * rep; } ;
typedef TYPE_4__ ZSTD_compressedBlockState_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_0(ZSTD_compressedBlockState_t* VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
        VAR_4->rep[VAR_5] = VAR_3[VAR_5];
    VAR_4->entropy.huf.repeatMode = VAR_1;
    VAR_4->entropy.fse.offcode_repeatMode = VAR_0;
    VAR_4->entropy.fse.matchlength_repeatMode = VAR_0;
    VAR_4->entropy.fse.litlength_repeatMode = VAR_0;
}
