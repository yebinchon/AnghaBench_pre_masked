
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_frame_length; int i_bytes_per_frame; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
typedef TYPE_3__ demux_sys_t ;



__attribute__((used)) static inline bool FUNC_0( demux_sys_t *VAR_0 )
{
    return ( !VAR_0->fmt.audio.i_bytes_per_frame || !VAR_0->fmt.audio.i_frame_length );
}
