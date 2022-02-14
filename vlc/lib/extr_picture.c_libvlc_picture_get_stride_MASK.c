
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_width; int i_bits_per_pixel; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ fmt; } ;
typedef TYPE_2__ libvlc_picture_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

unsigned int FUNC_1( const libvlc_picture_t *VAR_1 )
{
    FUNC_0( VAR_1->type == VAR_0 );
    return VAR_1->fmt.i_width * VAR_1->fmt.i_bits_per_pixel / 8;
}
