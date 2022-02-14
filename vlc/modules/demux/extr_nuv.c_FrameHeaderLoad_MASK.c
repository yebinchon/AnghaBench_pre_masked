
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_7__ {char i_compression; char i_keyframe; void* i_length; void* i_timecode; void* i_filters; void* i_type; } ;
typedef TYPE_1__ frame_header_t ;
struct TYPE_8__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {void** fh_buffer; } ;
typedef TYPE_3__ demux_sys_t ;


 void* FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,void*,char,char,void*,void*,void*) ;
 int FUNC_2 (int ,void**,int) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_2, frame_header_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    uint8_t* VAR_5 = VAR_4->fh_buffer;

    if( FUNC_2( VAR_2->s, VAR_5, 12 ) != 12 )
        return VAR_0;

    VAR_3->i_type = VAR_5[0];
    VAR_3->i_compression = VAR_5[1];
    VAR_3->i_keyframe = VAR_5[2];
    VAR_3->i_filters = VAR_5[3];

    VAR_3->i_timecode = FUNC_0( &VAR_5[4] );
    VAR_3->i_length = FUNC_0( &VAR_5[8] );
    return VAR_1;
}
