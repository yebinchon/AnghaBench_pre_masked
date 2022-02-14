
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int picture_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*,char const*) ;

__attribute__((used)) static void FUNC_5( vout_thread_t *VAR_1, picture_t *VAR_2, const char *VAR_3 )
{
    FUNC_1( VAR_1, "snapshot taken (%s)", VAR_3 );
    FUNC_4( VAR_1, VAR_0, "%s", VAR_3 );

    if( FUNC_3( VAR_1, "snapshot-preview" ) )
    {
        if( FUNC_0( VAR_1, VAR_2 ) )
            FUNC_2( VAR_1, "Failed to display snapshot" );
    }
}
