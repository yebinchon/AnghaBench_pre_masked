
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_17__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_18__ {struct TYPE_18__* psz_indexPath; struct TYPE_18__* psz_indexUrl; scalar_t__ i_numsegs; scalar_t__ b_delsegs; int segments_t; struct TYPE_18__* key_uri; int aes_ctx; TYPE_4__* ongoing_segment; TYPE_4__* full_segments; TYPE_4__** ongoing_segment_end; TYPE_4__** full_segments_end; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_19__ {scalar_t__ psz_filename; int i_segment_number; } ;
typedef TYPE_3__ output_segment_t ;
struct TYPE_20__ {struct TYPE_20__* p_next; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__***,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_14( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    sout_access_out_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->ongoing_segment )
        FUNC_1( &VAR_2->full_segments_end, VAR_2->ongoing_segment );
    VAR_2->ongoing_segment = ((void*)0);
    VAR_2->ongoing_segment_end = &VAR_2->ongoing_segment;

    block_t *VAR_3 = VAR_2->full_segments;
    VAR_2->full_segments = ((void*)0);
    VAR_2->full_segments_end = &VAR_2->full_segments;

    while( VAR_3 )
    {
        block_t *VAR_4 = VAR_3->p_next;
        VAR_3->p_next = ((void*)0);

        FUNC_0( VAR_1, VAR_3 );
        VAR_3 = VAR_4;
    }
    if( VAR_2->ongoing_segment )
    {
        FUNC_1( &VAR_2->full_segments_end, VAR_2->ongoing_segment );
        VAR_2->ongoing_segment = ((void*)0);
        VAR_2->ongoing_segment_end = &VAR_2->ongoing_segment;
    }

    ssize_t VAR_5 = FUNC_13( VAR_1 );
    FUNC_7( VAR_1, "Writing.. %zd", VAR_5 );
    if( FUNC_8( VAR_5 < 0 ) )
    {
        if( VAR_2->full_segments )
            FUNC_2( VAR_2->full_segments );
        if( VAR_2->ongoing_segment )
            FUNC_2( VAR_2->ongoing_segment );
    }

    FUNC_3( VAR_1, VAR_2, 1 );

    if( VAR_2->key_uri )
    {
        FUNC_6( VAR_2->aes_ctx );
        FUNC_5( VAR_2->key_uri );
    }

    while( FUNC_9( &VAR_2->segments_t ) > 0 )
    {
        output_segment_t *VAR_6 = FUNC_10( &VAR_2->segments_t, 0 );
        FUNC_11( &VAR_2->segments_t, 0 );
        if( VAR_2->b_delsegs && VAR_2->i_numsegs && VAR_6->psz_filename )
        {
            FUNC_7( VAR_1, "Removing segment number %d name %s", VAR_6->i_segment_number, VAR_6->psz_filename );
            FUNC_12( VAR_6->psz_filename );
        }

        FUNC_4( VAR_6 );
    }

    FUNC_5( VAR_2->psz_indexUrl );
    FUNC_5( VAR_2->psz_indexPath );
    FUNC_5( VAR_2 );

    FUNC_7( VAR_1, "livehttp access output closed" );
}
