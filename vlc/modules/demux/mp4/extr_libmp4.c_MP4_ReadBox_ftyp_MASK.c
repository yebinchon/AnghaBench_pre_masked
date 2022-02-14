
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_ftyp; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int i_compatible_brands_count; int * i_compatible_brands; int i_minor_version; int i_major_brand; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_3, MP4_Box_t *VAR_4 )
{
    FUNC_2( VAR_0, VAR_1 );

    FUNC_1( VAR_4->data.p_ftyp->i_major_brand );
    FUNC_0( VAR_4->data.p_ftyp->i_minor_version );

    VAR_4->data.p_ftyp->i_compatible_brands_count = VAR_2 / 4;
    if( VAR_4->data.p_ftyp->i_compatible_brands_count > 0 )
    {
        uint32_t *VAR_5 = VAR_4->data.p_ftyp->i_compatible_brands =
            FUNC_5( VAR_4->data.p_ftyp->i_compatible_brands_count,
                       sizeof(uint32_t) );

        if( FUNC_4( VAR_5 == ((void*)0) ) )
            FUNC_3( 0 );

        for( unsigned VAR_6 = 0; VAR_6 < VAR_4->data.p_ftyp->i_compatible_brands_count; VAR_6++ )
        {
            FUNC_1( VAR_5[VAR_6] );
        }
    }
    else
    {
        VAR_4->data.p_ftyp->i_compatible_brands = ((void*)0);
    }

    FUNC_3( 1 );
}
