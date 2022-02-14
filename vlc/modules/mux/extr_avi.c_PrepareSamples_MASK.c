
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_11__ {int i_bmask; int i_rmask; int i_gmask; } ;
struct TYPE_12__ {TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_13__ {int i_buffer; int* p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_14__ {scalar_t__ i_frames; scalar_t__ i_cat; TYPE_5__* p_bih; } ;
typedef TYPE_4__ avi_stream_t ;
typedef int VLC_BITMAPINFOHEADER ;
struct TYPE_15__ {scalar_t__ biCompression; int biSize; int biBitCount; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,size_t,int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int*,TYPE_5__*,size_t) ;

__attribute__((used)) static int FUNC_4( const avi_stream_t *VAR_4,
                           const es_format_t *VAR_5,
                           block_t **VAR_6 )
{
    if( VAR_4->i_frames == 0 && VAR_4->i_cat == VAR_1 )
    {


       if( VAR_4->p_bih->biCompression == FUNC_0( 'X', 'V', 'I', 'D' ) )
       {
           size_t VAR_7 =
               VAR_4->p_bih->biSize - sizeof(VLC_BITMAPINFOHEADER);
           *VAR_6 = FUNC_1( *VAR_6, VAR_7,
                                      (*VAR_6)->i_buffer );
           if( !*VAR_6 )
               return VAR_2;
           FUNC_3((*VAR_6)->p_buffer,&VAR_4->p_bih[1], VAR_7);
       }
    }


    if( VAR_4->i_cat == VAR_1 &&
        VAR_4->p_bih->biCompression == VAR_0 &&
        VAR_4->p_bih->biBitCount == 24 &&
        (VAR_5->video.i_bmask != 0xFF0000 ||
         VAR_5->video.i_rmask != 0x0000FF) )
    {
        unsigned VAR_8 = FUNC_2(VAR_5->video.i_rmask);
        unsigned VAR_9 = FUNC_2(VAR_5->video.i_gmask);
        unsigned VAR_10 = FUNC_2(VAR_5->video.i_bmask);

        uint8_t *VAR_11 = (*VAR_6)->p_buffer;
        for( size_t VAR_12=0; VAR_12<(*VAR_6)->i_buffer / 3; VAR_12++ )
        {
            uint8_t *VAR_13 = &VAR_11[VAR_12*3];

            uint32_t VAR_14 = (VAR_13[0] << 16) | (VAR_13[1] << 8) | VAR_13[2];
            VAR_13[0] = (VAR_14 & VAR_5->video.i_bmask) >> VAR_10;
            VAR_13[1] = (VAR_14 & VAR_5->video.i_gmask) >> VAR_9;
            VAR_13[2] = (VAR_14 & VAR_5->video.i_rmask) >> VAR_8;
        }
    }

    return VAR_3;
}
