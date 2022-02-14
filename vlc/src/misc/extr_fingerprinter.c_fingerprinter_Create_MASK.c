
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int p_module; } ;
typedef TYPE_1__ fingerprinter_thread_t ;


 int FUNC_0 (TYPE_1__*,char*,int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (TYPE_1__*) ;

fingerprinter_thread_t *FUNC_4( vlc_object_t *VAR_0 )
{
    fingerprinter_thread_t *VAR_1;

    VAR_1 = ( fingerprinter_thread_t * )
            FUNC_2( VAR_0, sizeof( *VAR_1 ), "fingerprinter" );
    if( !VAR_1 )
    {
        FUNC_1( VAR_0, "unable to create fingerprinter" );
        return ((void*)0);
    }

    VAR_1->p_module = FUNC_0( VAR_1, "fingerprinter",
                                           ((void*)0), 0 );
    if( !VAR_1->p_module )
    {
        FUNC_3(VAR_1);
        FUNC_1( VAR_0, "AcoustID fingerprinter not found" );
        return ((void*)0);
    }

    return VAR_1;
}
