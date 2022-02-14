
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_14__ {int (* pf_video_postrender_callback ) (int ,int *,int ,int ,int ,size_t,int ) ;int (* pf_video_prerender_callback ) (int ,int **,size_t) ;} ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_11__ {int i_bits_per_pixel; int i_height; int i_width; } ;
struct TYPE_12__ {TYPE_1__ video; } ;
struct TYPE_15__ {TYPE_2__ format; int p_data; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;
struct TYPE_16__ {size_t i_buffer; int i_pts; int p_buffer; } ;
typedef TYPE_6__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ,int **,size_t) ;
 int FUNC_4 (int ,int *,int ,int ,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;
    sout_stream_id_sys_t *VAR_6 = (sout_stream_id_sys_t *)VAR_3;
    size_t VAR_7 = VAR_4->i_buffer;
    uint8_t* VAR_8 = ((void*)0);


    VAR_5->pf_video_prerender_callback( VAR_6->p_data, &VAR_8, VAR_7 );

    if (!VAR_8)
    {
        FUNC_2( VAR_2, "No buffer given!" );
        FUNC_0( VAR_4 );
        return VAR_0;
    }


    FUNC_1( VAR_8, VAR_4->p_buffer, VAR_7 );

    VAR_5->pf_video_postrender_callback( VAR_6->p_data, VAR_8,
                                         VAR_6->format.video.i_width, VAR_6->format.video.i_height,
                                         VAR_6->format.video.i_bits_per_pixel, VAR_7, VAR_4->i_pts );
    FUNC_0( VAR_4 );
    return VAR_1;
}
