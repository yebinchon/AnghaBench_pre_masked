
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int i_planes; TYPE_3__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_15__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_12__ {int i_frame_stride_chroma_div; } ;
struct TYPE_11__ {int i_frame_stride; } ;
struct TYPE_16__ {TYPE_2__ in; TYPE_1__ out; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_17__ {int nOffset; int * pBuffer; } ;
struct TYPE_13__ {int i_pitch; int i_visible_pitch; int i_visible_lines; int * p_pixels; } ;
typedef TYPE_7__ OMX_BUFFERHEADERTYPE ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1( decoder_t *VAR_0, OMX_BUFFERHEADERTYPE *VAR_1,
                     picture_t *VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    int VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8;
    uint8_t *VAR_9, *VAR_10;

    VAR_5 = VAR_3->out.i_frame_stride;
    VAR_9 = VAR_1->pBuffer + VAR_1->nOffset;

    for( VAR_6 = 0; VAR_6 < VAR_2->i_planes; VAR_6++ )
    {
        if(VAR_6 == 1) VAR_5 /= VAR_3->in.i_frame_stride_chroma_div;
        VAR_10 = VAR_2->p[VAR_6].p_pixels;
        VAR_4 = VAR_2->p[VAR_6].i_pitch;
        VAR_7 = VAR_2->p[VAR_6].i_visible_pitch;

        for( VAR_8 = 0; VAR_8 < VAR_2->p[VAR_6].i_visible_lines; VAR_8++ )
        {
            FUNC_0( VAR_9, VAR_10, VAR_7 );
            VAR_10 += VAR_4;
            VAR_9 += VAR_5;
        }
    }
}
