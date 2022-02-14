
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef int rom1394_directory ;
typedef int * raw1394handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_2, int* VAR_3, uint64_t VAR_4 )
{
    rom1394_directory VAR_5;
    raw1394handle_t VAR_6 = ((void*)0);
    int VAR_7 = -1;
    int VAR_8, VAR_9 = 0;
    int VAR_10 = FUNC_1( VAR_2 );

    if( *VAR_3 >= 0 )
    {

        VAR_9 = *VAR_3;
        VAR_10 = *VAR_3 + 1;
    }

    for( ; VAR_9 < VAR_10 && VAR_7 == -1; VAR_9++ )
    {
        VAR_6 = FUNC_2( VAR_2, VAR_9 );
        if( !VAR_6 )
            return -1;

        for( VAR_8 = 0; VAR_8 < FUNC_5( VAR_6 ); ++VAR_8 )
        {
            if( VAR_4 != 0 )
            {

                if( VAR_4 == FUNC_7( VAR_6, VAR_8 ) )
                {
                    VAR_7 = VAR_8;
                    *VAR_3 = VAR_9;
                    break;
                }
            }
            else
            {

                if( FUNC_6( VAR_6, VAR_8, &VAR_5 ) < 0 )
                {
                    FUNC_4( VAR_2, "error reading config rom directory for node %d", VAR_8 );
                    continue;
                }
                if( ( FUNC_8( &VAR_5 ) == VAR_1 ) &&
                        FUNC_3( VAR_6, VAR_8, VAR_0 ) )
                {
                    VAR_7 = VAR_8;
                    *VAR_3 = VAR_9;
                    break;
                }
            }
        }
        FUNC_0( VAR_6 );
    }

    return VAR_7;
}
