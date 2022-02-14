
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_height; int i_width; int * p_pixbuf; int i_id; } ;
typedef TYPE_1__ dvbsub_region_t ;
typedef int decoder_t ;
typedef int bs_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int,int*) ;
 int FUNC_4 (int *,int *,int,int*) ;
 int FUNC_5 (int *,int *,int,int*) ;
 int FUNC_6 (int *,char*,int,int) ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_8( decoder_t *VAR_0, dvbsub_region_t *VAR_1,
                                 int VAR_2, int VAR_3,
                                 uint8_t *VAR_4, int VAR_5 )
{
    uint8_t *VAR_6;
    int VAR_7 = 0;
    bs_t VAR_8;


    if( !VAR_1->p_pixbuf )
    {
        FUNC_7( VAR_0, "region %i has no pixel buffer!", VAR_1->i_id );
        return;
    }
    if( VAR_3 < 0 || VAR_2 < 0 || VAR_3 >= VAR_1->i_height ||
        VAR_2 >= VAR_1->i_width )
    {
        FUNC_6( VAR_0, "invalid offset (%i,%i)", VAR_2, VAR_3 );
        return;
    }

    VAR_6 = VAR_1->p_pixbuf + VAR_3 * VAR_1->i_width;
    FUNC_1( &VAR_8, VAR_4, VAR_5 );

    while( !FUNC_0( &VAR_8 ) )
    {

        if( VAR_3 >= VAR_1->i_height ) return;

        switch( FUNC_2( &VAR_8, 8 ) )
        {
        case 0x10:
            FUNC_3( &VAR_8, VAR_6 + VAR_2, VAR_1->i_width - VAR_2,
                              &VAR_7 );
            break;

        case 0x11:
            FUNC_4( &VAR_8, VAR_6 + VAR_2, VAR_1->i_width - VAR_2,
                              &VAR_7 );
            break;

        case 0x12:
            FUNC_5( &VAR_8, VAR_6 + VAR_2, VAR_1->i_width - VAR_2,
                              &VAR_7 );
            break;

        case 0x20:
        case 0x21:
        case 0x22:

            break;

        case 0xf0:
            VAR_6 += 2*VAR_1->i_width;
            VAR_7 = 0; VAR_3 += 2;
            break;
        }
    }
}
