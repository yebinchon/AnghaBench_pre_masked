
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;
typedef int private_sys_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static private_sys_t* FUNC_4( vlc_object_t* VAR_0, stream_t* VAR_1 )
{
    if( FUNC_2( VAR_1 ) )
        return ((void*)0);

    private_sys_t* VAR_2 = FUNC_3( VAR_0, VAR_1 );

    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    if( FUNC_1( VAR_2, VAR_1 ) )
    {
        FUNC_0( VAR_2 );
        return ((void*)0);
    }

    return VAR_2;
}
