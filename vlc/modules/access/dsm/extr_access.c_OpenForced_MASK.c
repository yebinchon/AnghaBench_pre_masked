
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_1 )
{
    if( !FUNC_2( VAR_1 , "smb-force-v1" ) )
        return VAR_0;

    FUNC_1( VAR_1, "SMB 2/3 disabled by the user, using *unsafe* SMB 1" );
    return FUNC_0( VAR_1 );
}
