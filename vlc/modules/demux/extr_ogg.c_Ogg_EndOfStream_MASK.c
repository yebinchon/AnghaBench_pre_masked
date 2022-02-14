
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_6__ {scalar_t__ minor; scalar_t__ major; } ;
struct TYPE_8__ {int i_streams; int b_preparsing_done; int b_es_created; int i_attachments; int i_seekpoints; scalar_t__* pp_seekpoints; scalar_t__* attachments; int * p_meta; TYPE_1__ skeleton; int * pp_stream; scalar_t__ i_bitrate; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys ;
    int VAR_2;

    for( VAR_2 = 0 ; VAR_2 < VAR_1->i_streams; VAR_2++ )
        FUNC_0( VAR_0, VAR_1->pp_stream[VAR_2] );
    FUNC_2( VAR_1->pp_stream );


    VAR_1->i_bitrate = 0;
    VAR_1->i_streams = 0;
    VAR_1->pp_stream = ((void*)0);
    VAR_1->skeleton.major = 0;
    VAR_1->skeleton.minor = 0;
    VAR_1->b_preparsing_done = 0;
    VAR_1->b_es_created = 0;


    if( VAR_1->p_meta )
        FUNC_4( VAR_1->p_meta );
    VAR_1->p_meta = ((void*)0);

    for(int VAR_3=0; VAR_3<VAR_1->i_attachments; VAR_3++)
        FUNC_3( VAR_1->attachments[VAR_3] );
    FUNC_1(VAR_1->i_attachments, VAR_1->attachments);

    for ( int VAR_4=0; VAR_4 < VAR_1->i_seekpoints; VAR_4++ )
    {
        if ( VAR_1->pp_seekpoints[VAR_4] )
            FUNC_5( VAR_1->pp_seekpoints[VAR_4] );
    }
    FUNC_1( VAR_1->i_seekpoints, VAR_1->pp_seekpoints );
}
