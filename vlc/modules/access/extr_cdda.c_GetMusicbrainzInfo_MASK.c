
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int i_tracks; TYPE_1__* p_sectors; } ;
typedef TYPE_2__ vcddev_toc_t ;
struct vlc_memstream {char* ptr; } ;
typedef int musicbrainz_recording_t ;
struct TYPE_10__ {char* psz_mb_server; int * psz_coverart_server; int * obj; } ;
typedef TYPE_3__ musicbrainz_config_t ;
struct TYPE_8__ {int i_lba; } ;


 char* FUNC_0 (TYPE_2__ const*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_3__*,char*) ;
 int * FUNC_4 (TYPE_3__*,char*) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (struct vlc_memstream*) ;
 scalar_t__ FUNC_7 (struct vlc_memstream*) ;
 scalar_t__ FUNC_8 (struct vlc_memstream*) ;
 int FUNC_9 (struct vlc_memstream*,char*,int,...) ;

__attribute__((used)) static musicbrainz_recording_t * FUNC_10( vlc_object_t *VAR_1,
                                                     const vcddev_toc_t *VAR_2,
                                                     int VAR_3, int VAR_4, int VAR_5 )
{
    musicbrainz_recording_t *VAR_6 = ((void*)0);

    char *VAR_7 = FUNC_5( VAR_1, "musicbrainz-server" );
    if( !VAR_7 || !*VAR_7 )
        return ((void*)0);

    musicbrainz_config_t VAR_8 = { .obj = VAR_1,
                                 .psz_mb_server = VAR_7,
                                 .psz_coverart_server = ((void*)0) };


    char *VAR_9 = FUNC_0( VAR_2,
                                                VAR_3, VAR_4, VAR_5 );
    if( VAR_9 )
    {
        VAR_6 = FUNC_3( &VAR_8, VAR_9 );
    }
    else
    {
        struct vlc_memstream VAR_10;
        if( FUNC_8(&VAR_10) )
        {
            FUNC_2( VAR_7 );
            return ((void*)0);
        }

        FUNC_9(&VAR_10, "toc=%u+%u", VAR_4, VAR_5 );


        int VAR_11;
        if (VAR_2->i_tracks > VAR_3)
            VAR_11 = FUNC_1(VAR_2->p_sectors[VAR_3].i_lba) - VAR_0;
        else
            VAR_11 = FUNC_1(VAR_2->p_sectors[VAR_2->i_tracks].i_lba);
        FUNC_9(&VAR_10, "+%u", VAR_11 );
        for( int VAR_12 = 0; VAR_12<VAR_3; VAR_12++ )
            FUNC_9(&VAR_10, "+%u", FUNC_1(VAR_2->p_sectors[VAR_12].i_lba) );
        if( FUNC_7(&VAR_10) )
        {
            if( FUNC_6(&VAR_10) )
                FUNC_2( VAR_10.ptr );
            FUNC_2( VAR_7 );
            return ((void*)0);
        }

        VAR_6 = FUNC_4( &VAR_8, VAR_10.ptr );

        if( FUNC_6(&VAR_10) == 0 )
            FUNC_2( VAR_10.ptr );
    }

    FUNC_2( VAR_7 );
    return VAR_6;
}
