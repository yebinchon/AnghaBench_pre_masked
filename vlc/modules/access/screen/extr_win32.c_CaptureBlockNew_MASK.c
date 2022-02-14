
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct block_sys_t {int self; scalar_t__ hbmp; } ;
struct TYPE_11__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biClrImportant; scalar_t__ biClrUsed; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_17__ {TYPE_1__ bmiHeader; } ;
struct TYPE_14__ {int i_fragment_size; scalar_t__ hgdi_backup; int hdc_dst; TYPE_9__ bmi; scalar_t__ p_block; scalar_t__ i_fragment; } ;
typedef TYPE_4__ screen_data_t ;
struct TYPE_15__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_12__ {int i_width; int i_height; int i_bits_per_pixel; } ;
struct TYPE_13__ {TYPE_2__ video; } ;
struct TYPE_16__ {int f_fps; TYPE_3__ fmt; int i_incr; TYPE_4__* p_data; } ;
typedef TYPE_6__ demux_sys_t ;
typedef int block_t ;
typedef scalar_t__ HBITMAP ;
typedef int BITMAPINFOHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_9__*,int ,void**,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int *,void*,int) ;
 struct block_sys_t* FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static block_t *FUNC_8( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    screen_data_t *VAR_5 = VAR_4->p_data;
    struct block_sys_t *VAR_6;
    void *VAR_7;
    int VAR_8;
    HBITMAP VAR_9;

    if( VAR_5->bmi.bmiHeader.biSize == 0 )
    {
        int VAR_10;

        VAR_5->bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        VAR_5->bmi.bmiHeader.biWidth = VAR_4->fmt.video.i_width;
        VAR_5->bmi.bmiHeader.biHeight = - VAR_4->fmt.video.i_height;
        VAR_5->bmi.bmiHeader.biPlanes = 1;
        VAR_5->bmi.bmiHeader.biBitCount = VAR_4->fmt.video.i_bits_per_pixel;
        VAR_5->bmi.bmiHeader.biCompression = VAR_0;
        VAR_5->bmi.bmiHeader.biSizeImage = 0;
        VAR_5->bmi.bmiHeader.biXPelsPerMeter = 0;
        VAR_5->bmi.bmiHeader.biYPelsPerMeter = 0;
        VAR_5->bmi.bmiHeader.biClrUsed = 0;
        VAR_5->bmi.bmiHeader.biClrImportant = 0;

        VAR_10 = FUNC_6( VAR_3, "screen-fragment-size" );
        VAR_5->i_fragment_size = VAR_10 > 0 ? VAR_10 : (int)VAR_4->fmt.video.i_height;
        VAR_5->i_fragment_size = VAR_10 > (int)VAR_4->fmt.video.i_height ?
                                            (int)VAR_4->fmt.video.i_height :
                                            VAR_5->i_fragment_size;
        VAR_4->f_fps *= (VAR_4->fmt.video.i_height/VAR_5->i_fragment_size);
        VAR_4->i_incr = FUNC_7( VAR_4->f_fps );
        VAR_5->i_fragment = 0;
        VAR_5->p_block = 0;
    }



    VAR_9 = FUNC_0( VAR_5->hdc_dst, &VAR_5->bmi, VAR_2,
                             &VAR_7, ((void*)0), 0 );
    if( !VAR_9 || !VAR_7 )
    {
        FUNC_5( VAR_3, "cannot create bitmap" );
        goto error;
    }


    if( !VAR_5->hgdi_backup )
        VAR_5->hgdi_backup = FUNC_2( VAR_5->hdc_dst, VAR_9 );
    else
        FUNC_2( VAR_5->hdc_dst, VAR_9 );

    if( !VAR_5->hgdi_backup )
    {
        FUNC_5( VAR_3, "cannot select bitmap" );
        goto error;
    }


    if( !(VAR_6 = FUNC_4( sizeof( struct block_sys_t ) )) )
        goto error;


    int VAR_11 =
        ( ( ( ( VAR_4->fmt.video.i_width * VAR_4->fmt.video.i_bits_per_pixel ) + 31 ) & ~31 ) >> 3 );
    VAR_8 = VAR_11 * VAR_4->fmt.video.i_height;
    FUNC_3( &VAR_6->self, &VAR_1, VAR_7, VAR_8 );
    VAR_6->hbmp = VAR_9;

    return &VAR_6->self;

error:
    if( VAR_9 ) FUNC_1( VAR_9 );
    return ((void*)0);
}
