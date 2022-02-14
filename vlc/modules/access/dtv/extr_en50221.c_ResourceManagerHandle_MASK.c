
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int resources ;
struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ cam_t ;



 int VAR_0 ;

 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4( cam_t * VAR_6, int VAR_7,
                                   uint8_t *VAR_8, int VAR_9 )
{
    int VAR_10 = FUNC_0( VAR_8, VAR_9 );

    switch ( VAR_10 )
    {
    case 128:
    {
        int VAR_11[] = { FUNC_2(VAR_5),
                            FUNC_2(VAR_1),
                            FUNC_2(VAR_2),
                            FUNC_2(VAR_3),
                            FUNC_2(VAR_4)
                          };
        FUNC_1( VAR_6, VAR_7, 129, (uint8_t*)VAR_11,
                  sizeof(VAR_11) );
        break;
    }
    case 129:
        FUNC_1( VAR_6, VAR_7, VAR_0, ((void*)0), 0 );
        break;

    default:
        FUNC_3( VAR_6->obj, "unexpected tag in ResourceManagerHandle (0x%x)",
                 VAR_10 );
    }
}
