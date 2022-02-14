
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* converted; } ;
typedef TYPE_2__ libvlc_picture_t ;
struct TYPE_4__ {size_t i_buffer; unsigned char const* p_buffer; } ;


 int FUNC_0 (int ) ;

const unsigned char* FUNC_1( const libvlc_picture_t* VAR_0,
                                                size_t *VAR_1 )
{
    FUNC_0( VAR_1 != ((void*)0) );
    *VAR_1 = VAR_0->converted->i_buffer;
    return VAR_0->converted->p_buffer;
}
