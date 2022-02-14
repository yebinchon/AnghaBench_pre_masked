
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ i_line; scalar_t__ i_line_count; } ;
typedef TYPE_1__ text_t ;
struct TYPE_8__ {int i_stop; char* psz_text; scalar_t__ i_start; } ;
typedef TYPE_2__ subtitle_t ;
typedef int subs_properties_t ;
typedef scalar_t__ int64_t ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(vlc_object_t *VAR_3, subs_properties_t *VAR_4, text_t *VAR_5, subtitle_t *VAR_6, size_t VAR_7 )
{
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2( VAR_7 );

    char *VAR_8 = FUNC_7( "" );
    int VAR_9 = 0;
    int VAR_10 = 1;

    for( ;; )
    {
        int VAR_11;

        const char *VAR_12 = FUNC_0( VAR_5 );

        if( !VAR_12 )
        {
            FUNC_3( VAR_8 );
            return VAR_0;
        }


        if( FUNC_5 (VAR_12, "-->> %d", &VAR_11) == 1)
        {
            VAR_6->i_start = (int64_t)VAR_11;
            VAR_6->i_stop = -1;


            if( VAR_10 )
            {
                VAR_10 = 0;
            }

            else
            {
                FUNC_1( VAR_5 );
                break;
            }
        }

        else
        {
            VAR_9 = FUNC_8( VAR_8 ) + 1;
            VAR_8 = FUNC_4( VAR_8, VAR_9 + FUNC_8( VAR_12 ) + 1 );
            if( !VAR_8 )
                 return VAR_1;
            FUNC_6( VAR_8, VAR_12 );
            FUNC_6( VAR_8, "\n" );
            if( VAR_5->i_line == VAR_5->i_line_count )
                break;
        }
    }
    VAR_6->psz_text = VAR_8;
    return VAR_2;
}
