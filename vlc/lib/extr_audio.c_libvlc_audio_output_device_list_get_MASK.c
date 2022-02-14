
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int varname ;
typedef size_t ssize_t ;
typedef int libvlc_instance_t ;
struct TYPE_4__ {char* psz_device; char* psz_description; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ libvlc_audio_output_device_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (char*,char***,char***) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_5 (int ) ;

libvlc_audio_output_device_t *
FUNC_6( libvlc_instance_t *VAR_1,
                                     const char *VAR_2 )
{
    char VAR_3[32];
    if( (size_t)FUNC_4( VAR_3, sizeof(VAR_3), "%s-audio-device", VAR_2 )
                                                           >= sizeof(VAR_3) )
        return ((void*)0);

    if( FUNC_1(VAR_3) != VAR_0 )
        return ((void*)0);

    libvlc_audio_output_device_t *VAR_4 = ((void*)0), **VAR_5 = &VAR_4;
    char **VAR_6, **VAR_7;
    ssize_t VAR_8 = FUNC_0( VAR_3, &VAR_6, &VAR_7 );
    for( ssize_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++ )
    {
        libvlc_audio_output_device_t *VAR_10 = FUNC_3( sizeof(*VAR_10) );
        if( FUNC_5(VAR_10 == ((void*)0)) )
            break;

        *VAR_5 = VAR_10;
        VAR_5 = &VAR_10->p_next;
        VAR_10->psz_device = VAR_6[VAR_9];
        VAR_10->psz_description = VAR_7[VAR_9];
    }

    *VAR_5 = ((void*)0);
    FUNC_2( VAR_7 );
    FUNC_2( VAR_6 );
    (void) VAR_1;
    return VAR_4;
}
