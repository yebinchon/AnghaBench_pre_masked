
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw1394_portinfo {int dummy; } ;
typedef int stream_t ;
typedef int * raw1394handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct raw1394_portinfo*,int) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static raw1394handle_t FUNC_6( stream_t *VAR_1, int VAR_2 )
{
    int VAR_3;
    struct raw1394_portinfo VAR_4[ 16 ];
    raw1394handle_t VAR_5;


    VAR_5 = FUNC_3();
    if( !VAR_5 )
    {
        FUNC_0( VAR_1, "raw1394 - failed to get handle: %s",
                 FUNC_5(VAR_0) );
        return ((void*)0);
    }

    if( ( VAR_3 = FUNC_2( VAR_5, VAR_4, 16 ) ) < 0 )
    {
        FUNC_0( VAR_1, "raw1394 - failed to get port info: %s",
                 FUNC_5(VAR_0) );
        FUNC_1( VAR_5 );
        return ((void*)0);
    }


    if( FUNC_4( VAR_5, VAR_2 ) < 0 )
    {
        FUNC_0( VAR_1, "raw1394 - failed to set set port: %s",
                 FUNC_5(VAR_0) );
        return ((void*)0);
    }

    return VAR_5;
}
