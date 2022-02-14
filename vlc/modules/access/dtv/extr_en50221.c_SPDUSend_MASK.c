
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_6__ {scalar_t__ i_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ,scalar_t__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6( cam_t * VAR_7, int VAR_8,
                     uint8_t *VAR_9, int VAR_10 )
{
    uint8_t *VAR_11 = FUNC_5( VAR_10 + 4 );
    uint8_t *VAR_12 = VAR_11;
    uint8_t VAR_13;
    uint8_t VAR_14 = VAR_7->p_sessions[VAR_8 - 1].i_slot;

    *VAR_12++ = VAR_1;
    *VAR_12++ = 0x02;
    *VAR_12++ = (VAR_8 >> 8);
    *VAR_12++ = VAR_8 & 0xff;

    FUNC_3( VAR_12, VAR_9, VAR_10 );

    VAR_10 += 4;
    VAR_12 = VAR_11;

    while ( VAR_10 > 0 )
    {
        if ( VAR_10 > VAR_0 )
        {
            if ( FUNC_1( VAR_7, VAR_14, VAR_3, VAR_12,
                           VAR_0 ) != VAR_6 )
            {
                FUNC_4( VAR_7->obj, "couldn't send TPDU on session %d",
                         VAR_8 );
                FUNC_2( VAR_11 );
                return VAR_5;
            }
            VAR_12 += VAR_0;
            VAR_10 -= VAR_0;
        }
        else
        {
            if ( FUNC_1( VAR_7, VAR_14, VAR_2, VAR_12, VAR_10 )
                    != VAR_6 )
            {
                FUNC_4( VAR_7->obj, "couldn't send TPDU on session %d",
                         VAR_8 );
                FUNC_2( VAR_11 );
                return VAR_5;
            }
            VAR_10 = 0;
        }

        if ( FUNC_0( VAR_7, VAR_14, &VAR_13, ((void*)0), ((void*)0) ) != VAR_6
               || VAR_13 != VAR_4 )
        {
            FUNC_4( VAR_7->obj, "couldn't recv TPDU on session %d",
                     VAR_8 );
            FUNC_2( VAR_11 );
            return VAR_5;
        }
    }

    FUNC_2( VAR_11 );
    return VAR_6;
}
