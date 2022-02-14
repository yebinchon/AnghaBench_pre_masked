
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_service; } ;
typedef TYPE_1__ vdr_info_t ;
typedef int uint8_t ;
struct TYPE_8__ {int s; } ;
typedef TYPE_2__ demux_t ;


 int FUNC_0 (TYPE_2__*,unsigned int*,scalar_t__) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (char*,int const*,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_5 (int ,int const**,scalar_t__) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_2, unsigned *VAR_3, vdr_info_t *VAR_4 )
{
    const uint8_t *VAR_5;
    *VAR_3 = 0;
    int VAR_6 = -1;

    if( FUNC_5( VAR_2->s,
                     &VAR_5, VAR_1 ) < VAR_1 )
        return -1;

    if( FUNC_2( VAR_5, "TFrc", 4 ) == 0 && VAR_5[6] == 0 &&
        FUNC_5( VAR_2->s, &VAR_5, VAR_0 + VAR_1 )
            == VAR_0 + VAR_1 )
    {
        const int VAR_7 = FUNC_1(&VAR_5[18]);
        VAR_6 = FUNC_0( VAR_2, VAR_3, VAR_0 );
        if( VAR_6 != -1 )
        {
            FUNC_4( VAR_2, "this is a topfield file" );
            VAR_4->i_service = VAR_7;

            return VAR_6;

        }
    }

    return FUNC_0( VAR_2, VAR_3, 0 );
}
