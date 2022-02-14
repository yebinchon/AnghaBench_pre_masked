
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_item_t ;
struct TYPE_3__ {int lock; int album_cache; } ;
typedef TYPE_1__ input_fetcher_t ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( input_fetcher_t* VAR_0, input_item_t* VAR_1,
                           bool VAR_2 )
{
    char* VAR_3 = FUNC_2( VAR_1 );
    char* VAR_4 = FUNC_0( VAR_1 );

    if( VAR_4 && VAR_3 && FUNC_3( VAR_3, "attachment://", 13 ) )
    {
        FUNC_6( &VAR_0->lock );
        if( VAR_2 || !FUNC_4( &VAR_0->album_cache, VAR_4 ) )
        {
            FUNC_5( &VAR_0->album_cache, VAR_4, VAR_3 );
            VAR_3 = ((void*)0);
        }
        FUNC_7( &VAR_0->lock );
    }

    FUNC_1( VAR_3 );
    FUNC_1( VAR_4 );
}
