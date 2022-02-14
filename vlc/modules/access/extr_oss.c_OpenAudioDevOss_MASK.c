
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int b_stereo; int i_sample_rate; int i_max_frame_size; int psz_device; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_7 )
{
    demux_sys_t *VAR_8 = (demux_sys_t *)VAR_7->p_sys;
    int VAR_9;
    int VAR_10;

    VAR_9 = FUNC_3( VAR_8->psz_device, VAR_2 | VAR_1 );

    if( VAR_9 < 0 )
    {
        FUNC_1( VAR_7, "cannot open OSS audio device (%s)",
                 FUNC_4(VAR_6) );
        goto adev_fail;
    }

    VAR_10 = VAR_0;
    if( FUNC_0( VAR_9, VAR_3, &VAR_10 ) < 0
        || VAR_10 != VAR_0 )
    {
        FUNC_1( VAR_7,
                 "cannot set audio format (16b little endian) (%s)",
                 FUNC_4(VAR_6) );
        goto adev_fail;
    }

    if( FUNC_0( VAR_9, VAR_5, &VAR_8->b_stereo ) < 0 )
    {
        FUNC_1( VAR_7, "cannot set audio channels count (%s)",
                 FUNC_4(VAR_6) );
        goto adev_fail;
    }

    if( FUNC_0( VAR_9, VAR_4, &VAR_8->i_sample_rate ) < 0 )
    {
        FUNC_1( VAR_7, "cannot set audio sample rate (%s)",
                 FUNC_4(VAR_6) );
        goto adev_fail;
    }

    VAR_8->i_max_frame_size = 6 * 1024;

    return VAR_9;

 adev_fail:

    if( VAR_9 >= 0 )
        FUNC_2( VAR_9 );
    return -1;
}
