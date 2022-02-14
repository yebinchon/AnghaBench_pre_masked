
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct rist_flow {int dummy; } ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,struct rist_flow*,int) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(sout_access_out_t *VAR_2, uint8_t VAR_3, uint16_t VAR_4,
    struct rist_flow *VAR_5, uint8_t *VAR_6)
{
    sout_access_out_sys_t *VAR_7 = VAR_2->p_sys;
    int VAR_8,VAR_9;




    if (VAR_3 == VAR_1)
    {
        uint8_t VAR_10[4];
        FUNC_5(VAR_6, VAR_10);
        if (FUNC_0(VAR_10, "RIST", 4) != 0)
        {
            FUNC_2(VAR_2, "   Ignoring Nack with name %s", VAR_10);
            return;
        }

        for (VAR_8 = 0; VAR_8 < (VAR_4-2); VAR_8++) {
            uint16_t VAR_11;
            uint16_t VAR_12;
            uint8_t *VAR_13 = (VAR_6 + 12 + VAR_8 * 4);
            VAR_11 = FUNC_9(VAR_13);
            VAR_12 = FUNC_8(VAR_13);

            FUNC_10( &VAR_7->lock );
            FUNC_3(VAR_2, VAR_5, VAR_11);
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
                FUNC_3(VAR_2, VAR_5, VAR_11 + VAR_9 + 1);
            }
            FUNC_11( &VAR_7->lock );
        }
    }
    else if (VAR_3 == VAR_0)
    {
        for (VAR_8 = 0; VAR_8 < (VAR_4-2); VAR_8++) {
            uint16_t VAR_14;
            uint16_t VAR_15;
            uint8_t *VAR_16 = (VAR_6 + 12 + VAR_8 * 4);
            VAR_14 = FUNC_7(VAR_16);
            VAR_15 = FUNC_6(VAR_16);

            FUNC_10( &VAR_7->lock );
            FUNC_3(VAR_2, VAR_5, VAR_14);
            for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
                if ((VAR_15 & (1 << VAR_9)) == (1 << VAR_9)) {
                    FUNC_3(VAR_2, VAR_5, VAR_14 + VAR_9 + 1);
                }
            }
            FUNC_11( &VAR_7->lock );
        }
    }
    else
    {
        FUNC_1(VAR_2, "   !!! Wrong feedback. Ptype is %02x!=%02x, FMT: %02x", VAR_3,
            VAR_1, FUNC_4(VAR_6));
    }
}
