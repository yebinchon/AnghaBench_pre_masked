
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int album_cache; int lock; scalar_t__ downloader; scalar_t__ network; scalar_t__ local; int * owner; } ;
typedef TYPE_1__ input_fetcher_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

input_fetcher_t* FUNC_7( vlc_object_t* VAR_3 )
{
    input_fetcher_t* VAR_4 = FUNC_3( sizeof( *VAR_4 ) );

    if( FUNC_4( !VAR_4 ) )
        return ((void*)0);

    VAR_4->owner = VAR_3;

    FUNC_0( VAR_4, &VAR_4->local, VAR_1 );
    FUNC_0( VAR_4, &VAR_4->network, VAR_2 );
    FUNC_0( VAR_4, &VAR_4->downloader, VAR_0 );

    if( FUNC_4( !VAR_4->local || !VAR_4->network || !VAR_4->downloader ) )
    {
        if( VAR_4->local )
            FUNC_1( VAR_4->local );

        if( VAR_4->network )
            FUNC_1( VAR_4->network );

        if( VAR_4->downloader )
            FUNC_1( VAR_4->downloader );

        FUNC_2( VAR_4 );
        return ((void*)0);
    }

    FUNC_6( &VAR_4->lock );
    FUNC_5( &VAR_4->album_cache, 0 );

    return VAR_4;
}
