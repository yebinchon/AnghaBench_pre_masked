
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int video_device; int p_dccontext; int camera; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6( vlc_object_t *VAR_2 )
{
    demux_t *VAR_3 = (demux_t*)VAR_2;
    demux_sys_t *VAR_4 = VAR_3->p_sys;


    if( FUNC_3( VAR_4->camera,
                       VAR_0 ) != VAR_1 )
        FUNC_5( VAR_3, "Unable to stop camera iso transmission" );


    FUNC_1( VAR_4->camera );

    FUNC_0(VAR_4->camera);
    FUNC_2(VAR_4->p_dccontext);

    FUNC_4( VAR_4->video_device );
}
