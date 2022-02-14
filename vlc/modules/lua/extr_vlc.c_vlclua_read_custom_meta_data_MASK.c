
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int lua_State ;
struct TYPE_3__ {int lock; scalar_t__ p_meta; } ;
typedef TYPE_1__ input_item_t ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (scalar_t__,char const*,char const*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12( vlc_object_t *VAR_0, lua_State *VAR_1,
                                     input_item_t *VAR_2 )
{

    FUNC_10( &VAR_2->lock );

    if( !VAR_2->p_meta )
        VAR_2->p_meta = FUNC_9();


    FUNC_0( VAR_1, -1, "meta" );

    if( FUNC_2( VAR_1, -1 ) )
    {
        FUNC_5( VAR_1 );

        while( FUNC_3( VAR_1, -2 ) )
        {

            if( !FUNC_1( VAR_1, -2 ) || !FUNC_1( VAR_1, -1 ) )
            {
                FUNC_7( VAR_0, "'meta' keys and values must be strings");
                FUNC_4( VAR_1, 1 );
                continue;
            }
            const char *VAR_3 = FUNC_6( VAR_1, -2 );
            const char *VAR_4 = FUNC_6( VAR_1, -1 );

            FUNC_8( VAR_2->p_meta, VAR_3, VAR_4 );

            FUNC_4( VAR_1, 1 );
        }
    }
    FUNC_4( VAR_1, 1 );


    FUNC_11( &VAR_2->lock );
}
