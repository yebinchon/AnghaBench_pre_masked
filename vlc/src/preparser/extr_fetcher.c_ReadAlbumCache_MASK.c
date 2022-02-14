
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_item_t ;
struct TYPE_3__ {int lock; int album_cache; } ;
typedef TYPE_1__ input_fetcher_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( input_fetcher_t* VAR_2, input_item_t* VAR_3 )
{
    char* VAR_4 = FUNC_0( VAR_3 );

    if( VAR_4 == ((void*)0) )
        return VAR_0;

    FUNC_4( &VAR_2->lock );
    char const* VAR_5 = FUNC_3( &VAR_2->album_cache,
                                                    VAR_4 );
    if( VAR_5 )
        FUNC_2( VAR_3, VAR_5 );
    FUNC_5( &VAR_2->lock );

    FUNC_1( VAR_4 );
    return VAR_5 ? VAR_1 : VAR_0;
}
