
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_alpha; int i_delay; int p_pic; } ;
typedef TYPE_1__ logo_t ;
struct TYPE_6__ {int i_counter; int i_count; TYPE_1__* p_logo; scalar_t__ i_next_pic; } ;
typedef TYPE_2__ logo_list_t ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*,int,int) ;
 int FUNC_5 (int *,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;
 unsigned int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( vlc_object_t *VAR_0, logo_list_t *VAR_1,
                          const char *VAR_2 )
{
    char *VAR_3;
    char *VAR_4;
    logo_t *VAR_5;

    VAR_1->i_counter = 0;
    VAR_1->i_next_pic = 0;

    VAR_4 = VAR_3 = FUNC_7( VAR_2 );

    if( !VAR_3 )
        return;


    VAR_1->i_count = 1;
    for( unsigned VAR_6 = 0; VAR_6 < FUNC_8( VAR_3 ); VAR_6++ )
    {
        if( VAR_3[VAR_6] == ';' )
            VAR_1->i_count++;
    }

    VAR_1->p_logo =
    VAR_5 = FUNC_2( VAR_1->i_count, sizeof(*VAR_5) );

    if( !VAR_5 )
    {
        FUNC_3( VAR_3 );
        return;
    }


    for( unsigned VAR_7 = 0; VAR_7 < VAR_1->i_count; VAR_7++ )
    {
        char *VAR_8 = FUNC_6( VAR_3, ';' );
        char *VAR_9 = FUNC_6( VAR_3, ',' );

        VAR_5[VAR_7].i_alpha = -1;
        VAR_5[VAR_7].i_delay = -1;

        if( VAR_9 && ( VAR_9 < VAR_8 || !VAR_8 ) )
        {

            if( VAR_9[1] != ',' && VAR_9[1] != ';' && VAR_9[1] != '\0' )
                VAR_5[VAR_7].i_delay = FUNC_1( VAR_9+1 );
            *VAR_9 = '\0';
            if( ( VAR_9 = FUNC_6( VAR_9+1, ',' ) )
                && ( VAR_9 < VAR_8 || !VAR_8 ) && VAR_9[1] != ';' && VAR_9[1] != '\0' )
                VAR_5[VAR_7].i_alpha = FUNC_1( VAR_9 + 1 );
        }
        else
        {

            if( VAR_8 )
                *VAR_8 = '\0';
        }

        FUNC_4( VAR_0, "logo file name %s, delay %d, alpha %d",
                 VAR_3, VAR_5[VAR_7].i_delay, VAR_5[VAR_7].i_alpha );
        VAR_5[VAR_7].p_pic = FUNC_0( VAR_0, VAR_3 );
        if( !VAR_5[VAR_7].p_pic )
        {
            FUNC_5( VAR_0, "error while loading logo %s, will be skipped",
                      VAR_3 );
        }

        if( VAR_8 )
            VAR_3 = &VAR_8[1];
    }


    VAR_1->i_counter = VAR_1->i_count - 1;

    FUNC_3( VAR_4 );
}
