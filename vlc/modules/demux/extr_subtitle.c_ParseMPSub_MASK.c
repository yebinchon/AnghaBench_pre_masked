
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_7__ {char* psz_text; void* i_stop; void* i_start; } ;
typedef TYPE_2__ subtitle_t ;
struct TYPE_6__ {int b_inited; double f_total; int i_factor; } ;
struct TYPE_8__ {TYPE_1__ mpsub; } ;
typedef TYPE_3__ subs_properties_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (float) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (char*,size_t) ;
 int FUNC_6 (char const*,char*,char*) ;
 int FUNC_7 (char*,char const*) ;
 char* FUNC_8 (char*) ;
 size_t FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 float FUNC_11 (char const*,char**) ;
 float FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*,float) ;

__attribute__((used)) static int FUNC_14( vlc_object_t *VAR_3, subs_properties_t *VAR_4,
                       text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_1( VAR_7 );

    char *VAR_8 = FUNC_8( "" );

    if( !VAR_4->mpsub.b_inited )
    {
        VAR_4->mpsub.f_total = 0.0;
        VAR_4->mpsub.i_factor = 0;

        VAR_4->mpsub.b_inited = 1;
    }

    for( ;; )
    {
        char VAR_9;
        char *VAR_10;

        const char *VAR_11 = FUNC_0( VAR_5 );
        if( !VAR_11 )
        {
            FUNC_2( VAR_8 );
            return VAR_0;
        }

        if( FUNC_10( VAR_11, "FORMAT" ) )
        {
            if( FUNC_6 (VAR_11, "FORMAT=TIM%c", &VAR_9 ) == 1 && VAR_9 == 'E')
            {
                VAR_4->mpsub.i_factor = 100;
                break;
            }

            VAR_10 = FUNC_4( FUNC_9(VAR_11) );
            if( !VAR_10 )
            {
                FUNC_2( VAR_8 );
                return VAR_1;
            }

            if( FUNC_6( VAR_11, "FORMAT=%[^\r\n]", VAR_10 ) )
            {
                float VAR_12 = FUNC_11( VAR_10, ((void*)0) );

                if( VAR_12 > 0.f && FUNC_12( VAR_3, "sub-original-fps" ) <= 0.f )
                    FUNC_13( VAR_3, "sub-original-fps", VAR_12 );

                VAR_4->mpsub.i_factor = 1;
                FUNC_2( VAR_10 );
                break;
            }
            FUNC_2( VAR_10 );
        }


        float VAR_13 = FUNC_11( VAR_11, &VAR_10 );
        if( *VAR_10 )
        {
            float VAR_14 = FUNC_11( VAR_10, ((void*)0) );
            VAR_4->mpsub.f_total += VAR_13 * VAR_4->mpsub.i_factor;
            VAR_6->i_start = FUNC_3(10000.f * VAR_4->mpsub.f_total);
            VAR_4->mpsub.f_total += VAR_14 * VAR_4->mpsub.i_factor;
            VAR_6->i_stop = FUNC_3(10000.f * VAR_4->mpsub.f_total);
            break;
        }
    }

    for( ;; )
    {
        const char *VAR_15 = FUNC_0( VAR_5 );

        if( !VAR_15 )
        {
            FUNC_2( VAR_8 );
            return VAR_0;
        }

        size_t VAR_16 = FUNC_9( VAR_15 );
        if( VAR_16 == 0 )
            break;

        size_t VAR_17 = FUNC_9( VAR_8 );

        VAR_8 = FUNC_5( VAR_8, VAR_17 + VAR_16 + 1 + 1 );
        if( !VAR_8 )
             return VAR_1;

        FUNC_7( VAR_8, VAR_15 );
        FUNC_7( VAR_8, "\n" );
    }

    VAR_6->psz_text = VAR_8;
    return VAR_2;
}
