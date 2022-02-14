
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int psz_location; int * pf_seek; int pf_control; int * pf_block; int pf_read; TYPE_2__* p_sys; scalar_t__ b_preparsing; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int fd; int timeout; scalar_t__ length; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*,int,char const*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char const*,int,char const*,int,int ) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 TYPE_2__* FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_6 )
{
    stream_t *VAR_7 = (stream_t*)VAR_6;
    access_sys_t *VAR_8;

    if( VAR_7->b_preparsing )
        return VAR_3;

    VAR_8 = FUNC_9( VAR_6, sizeof( *VAR_8 ) );
    if( FUNC_7( VAR_8 == ((void*)0) ) )
        return VAR_4;

    VAR_8->length = 0;
    VAR_7->p_sys = VAR_8;
    VAR_7->pf_read = VAR_2;
    VAR_7->pf_block = ((void*)0);
    VAR_7->pf_control = VAR_0;
    VAR_7->pf_seek = ((void*)0);

    char *VAR_9 = FUNC_6( VAR_7->psz_location );
    char *VAR_10;
    const char *VAR_11, *VAR_12 = "";
    int VAR_13 = 1234, VAR_14 = 0;

    if( FUNC_7(VAR_9 == ((void*)0)) )
        return VAR_4;



    VAR_10 = FUNC_5( VAR_9, '@' );
    if( VAR_10 != ((void*)0) )
    {

        *VAR_10++ = '\0';
        VAR_12 = VAR_10;

        if( VAR_12[0] == '[' )

            VAR_10 = FUNC_5( VAR_10, ']' );

        if( VAR_10 != ((void*)0) )
        {
            VAR_10 = FUNC_5( VAR_10, ':' );
            if( VAR_10 != ((void*)0) )
            {
                *VAR_10++ = '\0';
                VAR_13 = FUNC_0( VAR_10 );
            }
        }
    }

    VAR_11 = VAR_9;
    VAR_10 = ( VAR_11[0] == '[' )
        ? FUNC_5( VAR_9, ']' )
        : VAR_9;

    if( VAR_10 != ((void*)0) )
    {
        VAR_10 = FUNC_5( VAR_10, ':' );
        if( VAR_10 != ((void*)0) )
        {
            *VAR_10++ = '\0';
            VAR_14 = FUNC_0( VAR_10 );
        }
    }

    FUNC_2( VAR_7, "opening server=%s:%d local=%s:%d",
             VAR_11, VAR_14, VAR_12, VAR_13 );

    VAR_8->fd = FUNC_4( VAR_7, VAR_12, VAR_13,
                             VAR_11, VAR_14, VAR_1 );
    FUNC_1( VAR_9 );
    if( VAR_8->fd == -1 )
    {
        FUNC_3( VAR_7, "cannot open socket" );
        return VAR_3;
    }

    VAR_8->timeout = FUNC_8( VAR_7, "udp-timeout");
    if( VAR_8->timeout > 0)
        VAR_8->timeout *= 1000;

    return VAR_5;
}
