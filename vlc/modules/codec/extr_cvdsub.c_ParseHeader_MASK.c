
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int i_spu_size; int metadata_offset; int metadata_length; int i_image_offset; int i_image_length; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_9__ {int* p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;

__attribute__((used)) static void FUNC_1( decoder_t *VAR_0, block_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    uint8_t *VAR_3 = VAR_1->p_buffer;

    VAR_2->i_spu_size = (VAR_3[0] << 8) + VAR_3[1] + 4; VAR_3 += 2;


    VAR_2->metadata_offset = (VAR_3[0] << 8) + VAR_3[1]; VAR_3 +=2;
    VAR_2->metadata_length = VAR_2->i_spu_size - VAR_2->metadata_offset;

    VAR_2->i_image_offset = 4;
    VAR_2->i_image_length = VAR_2->metadata_offset - VAR_2->i_image_offset;





}
