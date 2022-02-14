
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ i_type; struct TYPE_4__* p_next; struct TYPE_4__* p_first; struct TYPE_4__* p_father; } ;
typedef TYPE_1__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char**,int*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,char const*,int ) ;

__attribute__((used)) static void FUNC_6( const MP4_Box_t **VAR_1, const MP4_Box_t *VAR_2,
                                 const char *VAR_3, va_list VAR_4)
{
    char *VAR_5;
    char *VAR_6;
    char *VAR_7 = ((void*)0);

    if( !VAR_2 )
    {
        *VAR_1 = ((void*)0);
        return;
    }

    if( FUNC_5( &VAR_6, VAR_3, VAR_4 ) == -1 )
        VAR_6 = ((void*)0);

    if( !VAR_6 || !VAR_6[0] )
    {
        FUNC_1( VAR_6 );
        *VAR_1 = ((void*)0);
        return;
    }


    VAR_5 = VAR_6;
    for( ; ; )
    {
        int VAR_8;

        if( !FUNC_2( &VAR_6, &VAR_7, &VAR_8 ) )
            goto error_box;


        if( !VAR_7 )
        {
            FUNC_1( VAR_5 );
            *VAR_1 = VAR_2;
            return;
        }
        else
        if( !FUNC_3( VAR_7, "/" ) )
        {

            while( VAR_2 && VAR_2->i_type != VAR_0 )
            {
                VAR_2 = VAR_2->p_father;
            }
            if( !VAR_2 )
            {
                goto error_box;
            }
        }
        else
        if( !FUNC_3( VAR_7, "." ) )
        {

        }
        else
        if( !FUNC_3( VAR_7, ".." ) )
        {
            VAR_2 = VAR_2->p_father;
            if( !VAR_2 )
            {
                goto error_box;
            }
        }
        else
        if( FUNC_4( VAR_7 ) == 4 )
        {
            uint32_t VAR_9;
            VAR_9 = FUNC_0( VAR_7[0], VAR_7[1],
                                   VAR_7[2], VAR_7[3] );
            VAR_2 = VAR_2->p_first;
            for( ; ; )
            {
                if( !VAR_2 )
                {
                    goto error_box;
                }
                if( VAR_2->i_type == VAR_9 )
                {
                    if( !VAR_8 )
                    {
                        break;
                    }
                    VAR_8--;
                }
                VAR_2 = VAR_2->p_next;
            }
        }
        else
        if( *VAR_7 == '\0' )
        {
            VAR_2 = VAR_2->p_first;
            for( ; ; )
            {
                if( !VAR_2 )
                {
                    goto error_box;
                }
                if( !VAR_8 )
                {
                    break;
                }
                VAR_8--;
                VAR_2 = VAR_2->p_next;
            }
        }
        else
        {

            goto error_box;
        }

        FUNC_1( VAR_7 );
    }

    return;

error_box:
    FUNC_1( VAR_7 );
    FUNC_1( VAR_5 );
    *VAR_1 = ((void*)0);
    return;
}
