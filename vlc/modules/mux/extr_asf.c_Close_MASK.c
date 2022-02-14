
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int p_access; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_11__ {struct TYPE_11__* psz_rating; struct TYPE_11__* psz_comment; struct TYPE_11__* psz_copyright; struct TYPE_11__* psz_author; struct TYPE_11__* psz_title; int tracks; int fmt; struct TYPE_11__* p_extra; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int block_t ;
typedef TYPE_2__ asf_track_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *,size_t) ;

__attribute__((used)) static void FUNC_11( vlc_object_t * VAR_1 )
{
    sout_mux_t *VAR_2 = (sout_mux_t*)VAR_1;
    sout_mux_sys_t *VAR_3 = VAR_2->p_sys;
    block_t *VAR_4;

    FUNC_5( VAR_2, "Asf muxer closed" );


    if( (VAR_4 = FUNC_1( VAR_2 ) ) )
    {
        FUNC_7( VAR_2->p_access, VAR_4 );
    }

    if( ( VAR_4 = FUNC_2( VAR_2 ) ) )
    {
        FUNC_7( VAR_2->p_access, VAR_4 );
    }


    if( FUNC_6( VAR_2->p_access, 0 ) == VAR_0 )
    {
        VAR_4 = FUNC_0( VAR_2, 0 );
        FUNC_7( VAR_2->p_access, VAR_4 );
    }


    for( size_t VAR_5 = 0; VAR_5 < FUNC_9( &VAR_3->tracks ); VAR_5++ )
    {
        asf_track_t *VAR_6 = FUNC_10( &VAR_3->tracks, VAR_5 );
        FUNC_4( VAR_6->p_extra );
        FUNC_3( &VAR_6->fmt );
        FUNC_4( VAR_6 );
    }

    FUNC_8( &VAR_3->tracks );
    FUNC_4( VAR_3->psz_title );
    FUNC_4( VAR_3->psz_author );
    FUNC_4( VAR_3->psz_copyright );
    FUNC_4( VAR_3->psz_comment );
    FUNC_4( VAR_3->psz_rating );
    FUNC_4( VAR_3 );
}
