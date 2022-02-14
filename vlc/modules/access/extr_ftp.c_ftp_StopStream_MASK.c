
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int * data; } ;
typedef TYPE_1__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 ( vlc_object_t *VAR_2, access_sys_t *VAR_3 )
{
    int VAR_4 = VAR_1;

    if( FUNC_1( VAR_2, VAR_3, "ABOR" ) < 0 )
    {
        FUNC_2( VAR_2, "cannot abort file" );
        VAR_4 = VAR_0;
    }

    if( VAR_3->data != ((void*)0) )
    {
        FUNC_3( VAR_3->data );
        VAR_3->data = ((void*)0);

        if( VAR_4 == VAR_1 )

            FUNC_0( VAR_2, VAR_3, ((void*)0), ((void*)0) );
    }

    if( VAR_4 == VAR_1 )

        FUNC_0( VAR_2, VAR_3, ((void*)0), ((void*)0) );

    return VAR_4;
}
