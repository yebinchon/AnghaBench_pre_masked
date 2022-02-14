
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* converted; } ;
typedef TYPE_2__ libvlc_picture_t ;
struct TYPE_4__ {int i_buffer; int p_buffer; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int ,int ,int,int *) ;
 int * FUNC_2 (char const*,char*) ;

int FUNC_3( const libvlc_picture_t* VAR_0, const char* VAR_1 )
{
    FILE* VAR_2 = FUNC_2( VAR_1, "wb" );
    if ( !VAR_2 )
        return -1;
    size_t VAR_3 = FUNC_1( VAR_0->converted->p_buffer,
                         VAR_0->converted->i_buffer, 1, VAR_2 );
    FUNC_0( VAR_2 );
    return VAR_3 == 1 ? 0 : -1;
}
