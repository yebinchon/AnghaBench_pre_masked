
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int module_t ;
typedef int libvlc_instance_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; struct TYPE_6__* psz_description; struct TYPE_6__* psz_name; } ;
typedef TYPE_1__ libvlc_audio_output_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int ** FUNC_8 (size_t*) ;
 int FUNC_9 (int *,char*) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

libvlc_audio_output_t *
        FUNC_12( libvlc_instance_t *VAR_0 )
{
    size_t VAR_1;
    module_t **VAR_2 = FUNC_8( &VAR_1 );
    libvlc_audio_output_t *VAR_3 = ((void*)0);

    for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        module_t *VAR_5 = VAR_2[VAR_4];

        if( !FUNC_9( VAR_5, "audio output" ) )
            continue;

        libvlc_audio_output_t *VAR_6 = FUNC_4( sizeof( *VAR_6 ) );
        if( FUNC_11(VAR_6 == ((void*)0)) )
        {
    error:
            FUNC_3( "Not enough memory" );
            FUNC_2( VAR_3 );
            VAR_3 = ((void*)0);
            break;
        }

        VAR_6->psz_name = FUNC_10( FUNC_6( VAR_5 ) );
        VAR_6->psz_description = FUNC_10( FUNC_5( VAR_5, 1 ) );
        if( FUNC_11(VAR_6->psz_name == ((void*)0) || VAR_6->psz_description == ((void*)0)) )
        {
            FUNC_1( VAR_6->psz_name );
            FUNC_1( VAR_6->psz_description );
            FUNC_1( VAR_6 );
            goto error;
        }
        VAR_6->p_next = VAR_3;
        VAR_3 = VAR_6;
    }
    FUNC_7( VAR_2 );

    FUNC_0( VAR_0 );
    return VAR_3;
}
