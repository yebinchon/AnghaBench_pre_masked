
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {scalar_t__ es; int fmt; scalar_t__ b_configured; } ;
typedef TYPE_1__ ps_track_t ;
struct TYPE_6__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {int i_titles; int p_dvdread; scalar_t__ p_vmg_file; scalar_t__ p_vts_file; scalar_t__ p_title; int * titles; TYPE_1__* tk; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_1 )
{
    demux_t *VAR_2 = (demux_t*)VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    for( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
        ps_track_t *VAR_5 = &VAR_3->tk[VAR_4];
        if( VAR_5->b_configured )
        {
            FUNC_3( &VAR_5->fmt );
            if( VAR_5->es ) FUNC_4( VAR_2->out, VAR_5->es );
        }
    }


    for( int VAR_6 = 0; VAR_6 < VAR_3->i_titles; VAR_6++ )
        FUNC_7( VAR_3->titles[VAR_6] );
    FUNC_2( VAR_3->i_titles, VAR_3->titles );


    if( VAR_3->p_title ) FUNC_1( VAR_3->p_title );
    if( VAR_3->p_vts_file ) FUNC_6( VAR_3->p_vts_file );
    if( VAR_3->p_vmg_file ) FUNC_6( VAR_3->p_vmg_file );
    FUNC_0( VAR_3->p_dvdread );

    FUNC_5( VAR_3 );
}
