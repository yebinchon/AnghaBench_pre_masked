
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_cat; void* psz_description; } ;
struct TYPE_4__ {TYPE_2__ fmt; } ;
typedef TYPE_1__ logical_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_5( logical_stream_t *VAR_10, const char* VAR_11,
                                  bool *VAR_12 )
{
    if( VAR_10->fmt.i_cat != VAR_1 )
        return;

    if( !FUNC_4(VAR_11, "audio/x-wav", 11) )
    {

        FUNC_1( &VAR_10->fmt, VAR_1, 0 );
        FUNC_2( VAR_10->fmt.psz_description );
        VAR_10->fmt.psz_description = FUNC_3("WAV Audio (Unsupported)");
    }
    else if( !FUNC_4(VAR_11, "audio/x-vorbis", 14) ||
             !FUNC_4(VAR_11, "audio/vorbis", 12) )
    {
        FUNC_1( &VAR_10->fmt, VAR_0, VAR_8 );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "audio/x-speex", 13) ||
             !FUNC_4(VAR_11, "audio/speex", 11) )
    {
        FUNC_1( &VAR_10->fmt, VAR_0, VAR_6 );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "audio/flac", 10) )
    {
        FUNC_1( &VAR_10->fmt, VAR_0, VAR_4 );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "video/x-theora", 14) ||
             !FUNC_4(VAR_11, "video/theora", 12) )
    {
        FUNC_1( &VAR_10->fmt, VAR_2, VAR_7 );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "video/x-daala", 13) ||
             !FUNC_4(VAR_11, "video/daala", 11) )
    {
        FUNC_1( &VAR_10->fmt, VAR_2, VAR_3 );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "video/x-xvid", 12) )
    {
        FUNC_1( &VAR_10->fmt, VAR_2, FUNC_0( 'x','v','i','d' ) );

        *VAR_12 = 1;
    }
    else if( !FUNC_4(VAR_11, "video/mpeg", 10) )
    {

        FUNC_1( &VAR_10->fmt, VAR_2, VAR_5 );
    }
    else if( !FUNC_4(VAR_11, "application/kate", 16) )
    {

        FUNC_1( &VAR_10->fmt, VAR_1, 0 );
        VAR_10->fmt.psz_description = FUNC_3("OGG Kate Overlay (Unsupported)");
    }
    else if( !FUNC_4(VAR_11, "video/x-vp8", 11) )
    {
        FUNC_1( &VAR_10->fmt, VAR_2, VAR_9 );
    }
}
