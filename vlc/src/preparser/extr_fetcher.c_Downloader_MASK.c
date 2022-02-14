
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_memstream {char* ptr; int length; } ;
struct fetcher_request {int item; } ;
typedef int stream_t ;
struct TYPE_5__ {int owner; } ;
typedef TYPE_1__ input_fetcher_t ;
typedef int buffer ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct fetcher_request*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char*,int ,int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (struct vlc_memstream*) ;
 int FUNC_12 (struct vlc_memstream*) ;
 scalar_t__ FUNC_13 (struct vlc_memstream*,char*,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char*) ;
 int FUNC_16 (int *,char*,int) ;

__attribute__((used)) static void FUNC_17( input_fetcher_t* VAR_0,
    struct fetcher_request* VAR_1 )
{
    FUNC_3( VAR_0, VAR_1->item );

    char *VAR_2 = FUNC_6( VAR_1->item );
    if( !VAR_2 )
        goto error;

    if( !FUNC_8( VAR_2, "file://", 7 ) ||
        !FUNC_8( VAR_2, "attachment://", 13 ) )
        goto out;

    stream_t* VAR_3 = FUNC_15( VAR_0->owner, VAR_2 );

    if( !VAR_3 )
        goto error;

    struct vlc_memstream VAR_4;
    FUNC_12( &VAR_4 );

    for( ;; )
    {
        char VAR_5[2048];

        int VAR_6 = FUNC_16( VAR_3, VAR_5, sizeof( VAR_5 ) );
        if( VAR_6 <= 0 )
            break;

        if( (int)FUNC_13( &VAR_4, VAR_5, VAR_6 ) < VAR_6 )
            break;
    }

    FUNC_14( VAR_3 );

    if( FUNC_11( &VAR_4 ) )
        goto error;

    if( FUNC_10() )
    {
        FUNC_4( VAR_4.ptr );
        goto error;
    }

    FUNC_5( VAR_0->owner, VAR_1->item, VAR_4.ptr,
                   VAR_4.length, ((void*)0) );

    FUNC_4( VAR_4.ptr );
    FUNC_0( VAR_0, VAR_1->item, 1 );

out:
    if( VAR_2 )
    {
        FUNC_9( VAR_0->owner, "item-change", VAR_1->item );
        FUNC_7( VAR_1->item, 1 );
    }

    FUNC_4( VAR_2 );
    FUNC_2(VAR_1, VAR_2 != ((void*)0));
    return;

error:
    FUNC_1( VAR_2 );
    goto out;
}
