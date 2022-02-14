
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bo_t ;
struct TYPE_7__ {int i_cat; int f_fps; int i_frames; int i_bitrate; TYPE_2__* p_wf; TYPE_1__* p_bih; } ;
typedef TYPE_3__ avi_stream_t ;
struct TYPE_6__ {int nBlockAlign; } ;
struct TYPE_5__ {int biCompression; int biHeight; int biWidth; int biBitCount; } ;



 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6( bo_t *VAR_0, avi_stream_t *VAR_1 )
{
    FUNC_0( "strh" );

    switch( VAR_1->i_cat )
    {
        case 128:
            {
                FUNC_5( VAR_0, "vids" );
                if( VAR_1->p_bih->biBitCount )
                    FUNC_5( VAR_0, "DIB " );
                else



                FUNC_4( VAR_0, VAR_1->p_bih->biCompression );

                FUNC_4( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_4( VAR_0, 0 );
                FUNC_4( VAR_0, 1000 );
                FUNC_4( VAR_0, (uint32_t)( 1000 * VAR_1->f_fps ));
                FUNC_4( VAR_0, 0 );
                FUNC_4( VAR_0, VAR_1->i_frames );
                FUNC_4( VAR_0, 1024 * 1024 );
                FUNC_4( VAR_0, -1 );
                FUNC_4( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, VAR_1->p_bih->biWidth );
                FUNC_2( VAR_0, VAR_1->p_bih->biHeight );
            }
            break;
        case 129:
            {
                int VAR_2, VAR_3, VAR_4;

                VAR_4 = VAR_1->p_wf->nBlockAlign;
                if( VAR_4 > 1 )
                {
                    VAR_3 = VAR_4;
                    VAR_2 = VAR_1->i_bitrate / 8;
                }
                else
                {
                    VAR_4 = 1;
                    VAR_3 = 1000;
                    VAR_2 = 1000 * VAR_1->i_bitrate / 8;
                }
                FUNC_5( VAR_0, "auds" );
                FUNC_4( VAR_0, 0 );
                FUNC_4( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_4( VAR_0, 0 );
                FUNC_4( VAR_0, VAR_3 );
                FUNC_4( VAR_0, VAR_2 );
                FUNC_4( VAR_0, 0 );
                FUNC_4( VAR_0, VAR_1->i_frames );
                FUNC_4( VAR_0, 10 * 1024 );
                FUNC_4( VAR_0, -1 );
                FUNC_4( VAR_0, VAR_4 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
                FUNC_2( VAR_0, 0 );
            }
            break;
    }

    FUNC_1( 0 );
}
