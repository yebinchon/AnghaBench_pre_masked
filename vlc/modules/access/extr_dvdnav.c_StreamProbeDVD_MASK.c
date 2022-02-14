
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef char uint16_t ;
typedef int stream_t ;
typedef int ssize_t ;
typedef int iso_dsc ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,scalar_t__ const**,int) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_3 )
{

    ssize_t VAR_4;
    const uint8_t *VAR_5;
    VAR_4 = FUNC_2( VAR_3, &VAR_5, 2048 );
    if( VAR_4 < 512 ) {
        return VAR_1;
    }
    while (VAR_4 > 0) {
        if (VAR_5[ --VAR_4 ]) {
            return VAR_1;
        }
    }


    char VAR_6[6];
    if( FUNC_4( VAR_3, 0x8000 + 1 ) != VAR_2
     || FUNC_3( VAR_3, VAR_6, sizeof (VAR_6) ) < (int)sizeof (VAR_6)
     || FUNC_1( VAR_6, "CD001\x01", 6 ) )
        return VAR_1;


    uint16_t VAR_7;

    if( FUNC_4( VAR_3, 256 * VAR_0 ) == VAR_2
     && FUNC_3( VAR_3, &VAR_7, 2 ) == 2
     && FUNC_0( &VAR_7 ) == 2 )
        return VAR_2;
    else
        return VAR_1;
}
