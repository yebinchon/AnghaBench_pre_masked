
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int obj; } ;
typedef TYPE_1__ cam_t ;







 int* FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int) ;

 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int*,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7( cam_t *VAR_1, int VAR_2,
                       uint8_t *VAR_3, int VAR_4 )
{
    int VAR_5 = FUNC_1( VAR_3, VAR_4 );

    switch ( VAR_5 )
    {
    case 132:
    {
        int VAR_6;
        uint8_t *VAR_7 = FUNC_0( VAR_3, &VAR_6 );

        if ( VAR_6 > 0 )
        {
            switch ( *VAR_7 )
            {
            case 128:
                if ( VAR_6 == 2 && VAR_7[1] == VAR_0 )
                    FUNC_2( VAR_1, VAR_2 );
                else
                    FUNC_6( VAR_1->obj, "unsupported MMI mode %02x", VAR_7[1] );
                break;

            default:
                FUNC_6( VAR_1->obj, "unsupported display control command %02x",
                         *VAR_7 );
                break;
            }
        }
        break;
    }

    case 131:
        FUNC_3( VAR_1, VAR_2, VAR_3, VAR_4 );
        break;

    case 130:
    case 129:
        FUNC_4( VAR_1, VAR_2, VAR_5, VAR_3, VAR_4 );
        break;

    case 133:
        FUNC_5( VAR_1, VAR_2 );
        break;

    default:
        FUNC_6( VAR_1->obj, "unexpected tag in MMIHandle (0x%x)", VAR_5 );
    }
}
