
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_6__ {int psz_string; int i_int; } ;
typedef TYPE_1__ vlc_value_t ;
struct TYPE_7__ {int type; char* name; } ;
typedef TYPE_2__ opt_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,char const**,int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *,char const*,int,TYPE_1__) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8( libvlc_media_player_t *VAR_1, const char *restrict VAR_2,
           const opt_t *restrict VAR_3, unsigned VAR_4,
           const vlc_value_t *VAR_5, bool VAR_6 )
{
    if( !VAR_3 ) return;

    int VAR_7 = VAR_3->type;
    vlc_value_t VAR_8 = *VAR_5;
    const char *VAR_9 = VAR_3->name;
    switch( VAR_7 )
    {
        case 0:
        {
            int VAR_10 = FUNC_3( FUNC_1( VAR_1 ), VAR_3->name, VAR_5->i_int,
                                        &VAR_9, &VAR_8.psz_string );
            if( VAR_10 != VAR_0 )
                return;
            VAR_7 = 128;
            break;
        }
        case 129:
        case 130:
        case 128:
            if( VAR_4 != VAR_3->type )
            {
                FUNC_4( "Invalid argument to %s", VAR_2 );
                return;
            }
            break;
        default:
            FUNC_4( "Invalid argument to %s", VAR_2 );
            return;
    }



    FUNC_5( VAR_1, VAR_9, VAR_7, VAR_8 );


    size_t VAR_11;
    vout_thread_t **VAR_12 = FUNC_0( VAR_1, &VAR_11 );
    for( size_t VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13 )
    {
        FUNC_5( VAR_12[VAR_13], VAR_9, VAR_7, VAR_8 );
        if( VAR_6 )
            FUNC_6( VAR_12[VAR_13], "sub-source" );
        FUNC_7(VAR_12[VAR_13]);
    }

    if( VAR_3->type == 0 )
        FUNC_2( VAR_8.psz_string );
}
