
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int text_t ;
struct TYPE_5__ {int i_start; int i_stop; char* psz_text; } ;
typedef TYPE_1__ subtitle_t ;
struct TYPE_6__ {int i_microsecperframe; } ;
typedef TYPE_2__ subs_properties_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (float) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char const*,char*,int*,...) ;
 scalar_t__ FUNC_6 (char const*) ;
 float FUNC_7 (char*,int *) ;
 float FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_4, subs_properties_t *VAR_5,
                          text_t *VAR_6, subtitle_t *VAR_7,
                          size_t VAR_8 )
{
    FUNC_1( VAR_8 );
    char *VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;

    for( ;; )
    {
        const char *VAR_13 = FUNC_0( VAR_6 );
        if( !VAR_13 )
            return VAR_1;

        VAR_9 = FUNC_4( FUNC_6(VAR_13) + 1 );
        if( !VAR_9 )
            return VAR_2;

        VAR_10 = 0;
        VAR_11 = -1;
        if( FUNC_5( VAR_13, "{%d}{}%[^\r\n]", &VAR_10, VAR_9 ) == 2 ||
            FUNC_5( VAR_13, "{%d}{%d}%[^\r\n]", &VAR_10, &VAR_11, VAR_9 ) == 3)
        {
            if( VAR_10 != 1 || VAR_11 != 1 )
                break;



            float VAR_14 = FUNC_7( VAR_9, ((void*)0) );
            if( VAR_14 > 0.f && FUNC_8( VAR_4, "sub-original-fps" ) <= 0.f )
                VAR_5->i_microsecperframe = FUNC_3((float)VAR_0 / VAR_14);
        }
        FUNC_2( VAR_9 );
    }


    for( VAR_12 = 0; VAR_9[VAR_12] != '\0'; VAR_12++ )
    {
        if( VAR_9[VAR_12] == '|' )
            VAR_9[VAR_12] = '\n';
    }


    VAR_7->i_start = VAR_10 * VAR_5->i_microsecperframe;
    VAR_7->i_stop = VAR_11 >= 0 ? (VAR_11 * VAR_5->i_microsecperframe) : -1;
    VAR_7->psz_text = VAR_9;
    return VAR_3;
}
