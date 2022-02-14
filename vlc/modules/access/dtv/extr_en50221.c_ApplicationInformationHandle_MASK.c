
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ cam_t ;



 int* FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int) ;
 int* FUNC_2 (int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_6( cam_t * VAR_0, int VAR_1,
                                          uint8_t *VAR_2, int VAR_3 )
{
    FUNC_3(VAR_1);
    int VAR_4 = FUNC_1( VAR_2, VAR_3 );

    switch ( VAR_4 )
    {
    case 128:
    {
        int VAR_5, VAR_6, VAR_7;
        int VAR_8 = 0;
        uint8_t *VAR_9 = FUNC_0( VAR_2, &VAR_8 );

        if ( VAR_8 < 4 ) break;
        VAR_2[VAR_8 + 4] = '\0';

        VAR_5 = *VAR_9++;
        VAR_6 = ((int)VAR_9[0] << 8) | VAR_9[1];
        VAR_9 += 2;
        VAR_7 = ((int)VAR_9[0] << 8) | VAR_9[1];
        VAR_9 += 2;
        VAR_9 = FUNC_2( VAR_9, &VAR_8 );
        VAR_9[VAR_8] = '\0';
        FUNC_5( VAR_0->obj, "CAM: %s, %02X, %04X, %04X",
                  VAR_9, VAR_5, VAR_6, VAR_7 );
        break;
    }
    default:
        FUNC_4( VAR_0->obj,
                 "unexpected tag in ApplicationInformationHandle (0x%x)",
                 VAR_4 );
    }
}
