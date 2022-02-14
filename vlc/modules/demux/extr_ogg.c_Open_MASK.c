
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_8__ {int force; } ;
struct TYPE_9__ {scalar_t__ (* pf_demux ) (TYPE_2__*) ;scalar_t__ b_preparsing; int pf_control; TYPE_3__* p_sys; int s; TYPE_1__ obj; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {int i_length; int b_preparsing_done; int pp_seekpoints; int i_seekpoints; int oy; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int const*,char*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_11( vlc_object_t * VAR_4 )
{
    demux_t *VAR_5 = (demux_t *)VAR_4;
    demux_sys_t *VAR_6;
    const uint8_t *VAR_7;


    if( FUNC_10( VAR_5->s, &VAR_7, 4 ) < 4 ) return VAR_1;
    if( !VAR_5->obj.force && FUNC_5( VAR_7, "OggS", 4 ) )
    {
        char *VAR_8 = FUNC_8( VAR_5->s );
        if( !VAR_8 )
        {
            return VAR_1;
        }
        else if ( FUNC_7( VAR_8, "application/ogg" ) &&
                  FUNC_7( VAR_8, "video/ogg" ) &&
                  FUNC_7( VAR_8, "audio/ogg" ) )
        {
            FUNC_4( VAR_8 );
            return VAR_1;
        }
        FUNC_4( VAR_8 );
    }


    VAR_5->p_sys = VAR_6 = FUNC_3( 1, sizeof( demux_sys_t ) );
    if( !VAR_6 )
        return VAR_2;

    VAR_6->i_length = -1;
    VAR_6->b_preparsing_done = 0;


    VAR_5->pf_demux = FUNC_0;
    VAR_5->pf_control = VAR_0;


    FUNC_6( &VAR_6->oy );


    FUNC_2( VAR_6->i_seekpoints, VAR_6->pp_seekpoints );


    while ( !VAR_6->b_preparsing_done && VAR_5->pf_demux( VAR_5 ) > 0 )
    {}
    if ( VAR_6->b_preparsing_done && VAR_5->b_preparsing )
        FUNC_1( VAR_5 );

    return VAR_3;
}
