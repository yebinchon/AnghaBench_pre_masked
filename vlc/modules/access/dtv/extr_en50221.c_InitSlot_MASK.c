
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int* pb_active_slot; int i_timeout; int obj; } ;
typedef TYPE_1__ cam_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4( cam_t * VAR_5, int VAR_6 )
{
    if ( FUNC_1( VAR_5, VAR_6, VAR_1, ((void*)0), 0 ) != VAR_4 )
    {
        FUNC_3( VAR_5->obj, "en50221_Init: couldn't send TPDU on slot %d",
                 VAR_6 );
        return VAR_3;
    }


    for ( int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
    {
        uint8_t VAR_8;
        if ( FUNC_0( VAR_5, VAR_6, &VAR_8, ((void*)0), ((void*)0) ) == VAR_4
              && VAR_8 == VAR_2 )
        {
            VAR_5->pb_active_slot[VAR_6] = 1;
            break;
        }

        if ( FUNC_1( VAR_5, VAR_6, VAR_1, ((void*)0), 0 )
                != VAR_4 )
        {
            FUNC_3( VAR_5->obj,
                     "en50221_Init: couldn't send TPDU on slot %d",
                     VAR_6 );
            continue;
        }
    }

    if ( VAR_5->pb_active_slot[VAR_6] )
    {
        VAR_5->i_timeout = FUNC_2(100);
        return VAR_4;
    }

    return VAR_3;
}
