
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ demux_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char,char,char,char) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_4, vlc_fourcc_t *VAR_5, uint64_t *VAR_6 )
{
    uint8_t VAR_7[12];

    if( FUNC_4( VAR_4->s, VAR_7, 12 ) < 12 )
        return VAR_1;

    *VAR_5 = FUNC_1( VAR_7 );
    uint64_t VAR_8 = FUNC_0( VAR_7 + 4 );



    if( VAR_8 > VAR_0 )
    {
        if( *VAR_5 == FUNC_3( 'd', 'a', 't', 'a' ) && VAR_8 == FUNC_2( -1 ))
            VAR_8 = VAR_3;
        else
            return VAR_1;
    }

    *VAR_6 = VAR_8;

    return VAR_2;
}
