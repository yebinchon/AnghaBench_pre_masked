
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int bo_t ;
struct TYPE_7__ {int i_cat; TYPE_2__* p_bih; int i_bih; TYPE_1__* p_wf; } ;
typedef TYPE_3__ avi_stream_t ;
typedef int VLC_BITMAPINFOHEADER ;
struct TYPE_6__ {int biClrImportant; int biClrUsed; int biYPelsPerMeter; int biXPelsPerMeter; int biSizeImage; int biCompression; int biBitCount; int biPlanes; int biHeight; int biWidth; int biSize; } ;
struct TYPE_5__ {int cbSize; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int nSamplesPerSec; int nChannels; int wFormatTag; } ;



 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_6( bo_t *VAR_0, avi_stream_t *VAR_1 )
{
    FUNC_0( "strf" );

    switch( VAR_1->i_cat )
    {
        case 129:
            FUNC_2( VAR_0, VAR_1->p_wf->wFormatTag );
            FUNC_2( VAR_0, VAR_1->p_wf->nChannels );
            FUNC_4( VAR_0, VAR_1->p_wf->nSamplesPerSec );
            FUNC_4( VAR_0, VAR_1->p_wf->nAvgBytesPerSec );
            FUNC_2( VAR_0, VAR_1->p_wf->nBlockAlign );
            FUNC_2( VAR_0, VAR_1->p_wf->wBitsPerSample );
            FUNC_2( VAR_0, VAR_1->p_wf->cbSize );
            FUNC_5( VAR_0, VAR_1->p_wf->cbSize, (uint8_t*)&VAR_1->p_wf[1] );
            break;
        case 128:
            FUNC_4( VAR_0, VAR_1->p_bih->biSize );
            FUNC_4( VAR_0, VAR_1->p_bih->biWidth );
            FUNC_4( VAR_0, VAR_1->p_bih->biHeight );
            FUNC_2( VAR_0, VAR_1->p_bih->biPlanes );
            FUNC_2( VAR_0, VAR_1->p_bih->biBitCount );



                FUNC_4( VAR_0, VAR_1->p_bih->biCompression );

            FUNC_4( VAR_0, VAR_1->p_bih->biSizeImage );
            FUNC_4( VAR_0, VAR_1->p_bih->biXPelsPerMeter );
            FUNC_4( VAR_0, VAR_1->p_bih->biYPelsPerMeter );
            FUNC_4( VAR_0, VAR_1->p_bih->biClrUsed );
            FUNC_4( VAR_0, VAR_1->p_bih->biClrImportant );
            FUNC_5( VAR_0,
                        VAR_1->i_bih - sizeof( VLC_BITMAPINFOHEADER ),
                        (uint8_t*)&VAR_1->p_bih[1] );
            break;
    }

    FUNC_1( 0 );
}
