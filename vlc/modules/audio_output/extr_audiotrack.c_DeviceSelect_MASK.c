
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef enum at_dev { ____Placeholder_at_dev } at_dev ;
typedef int enc_fourccs ;
struct TYPE_9__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_10__ {int at_dev; long long i_encoding_flags; } ;
typedef TYPE_2__ aout_sys_t ;
struct TYPE_11__ {char* id; int at_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int const) ;





 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_4__* VAR_4 ;
 long long FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 size_t const FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,size_t const) ;

__attribute__((used)) static int FUNC_7(audio_output_t *VAR_5, const char *VAR_6)
{
    aout_sys_t *VAR_7 = VAR_5->sys;
    enum at_dev VAR_8 = VAR_1;

    if( VAR_6 )
    {
        for( unsigned int VAR_9 = 0; VAR_4[VAR_9].id; ++VAR_9 )
        {
            if( FUNC_6( VAR_6, VAR_4[VAR_9].id, FUNC_5( VAR_4[VAR_9].id ) ) == 0 )
            {
                VAR_8 = VAR_4[VAR_9].at_dev;
                break;
            }
        }
    }

    long long VAR_10 = 0;
    if( VAR_8 == VAR_2 )
    {
        const size_t VAR_11 = FUNC_5( "encoded:" );
        if( FUNC_6( VAR_6, "encoded:", VAR_11 ) == 0 )
            VAR_10 = FUNC_3( VAR_6 + VAR_11 );
    }

    if( VAR_8 != VAR_7->at_dev || VAR_10 != VAR_7->i_encoding_flags )
    {
        VAR_7->at_dev = VAR_8;
        VAR_7->i_encoding_flags = VAR_10;
        FUNC_2( VAR_5, VAR_0 );
        FUNC_4( VAR_5, "selected device: %s", VAR_6 );

        if( VAR_8 == VAR_2 )
        {
            static const vlc_fourcc_t VAR_12[] = {
                131, 130, 132, 129,
                128,
            };
            for( size_t VAR_13 = 0;
                 VAR_13 < sizeof( VAR_12 ) / sizeof( VAR_12[0] ); ++VAR_13 )
            {
                if( FUNC_0( VAR_5, VAR_12[VAR_13] ) )
                    FUNC_4( VAR_5, "device has %4.4s passthrough support",
                             (const char *)&VAR_12[VAR_13] );
            }
        }
    }
    FUNC_1( VAR_5, VAR_6 );
    return VAR_3;
}
