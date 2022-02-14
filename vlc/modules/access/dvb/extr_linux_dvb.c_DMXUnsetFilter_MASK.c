
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

int FUNC_5( vlc_object_t *VAR_4, int VAR_5 )
{
    if( FUNC_0( VAR_5, VAR_0 ) < 0 )
    {
        FUNC_2( VAR_4, "stopping demux failed: %s",
                 FUNC_4(VAR_3) );
        return VAR_1;
    }

    FUNC_1( VAR_4, "DMXUnsetFilter: closing demux %d", VAR_5 );
    FUNC_3( VAR_5 );
    return VAR_2;
}
