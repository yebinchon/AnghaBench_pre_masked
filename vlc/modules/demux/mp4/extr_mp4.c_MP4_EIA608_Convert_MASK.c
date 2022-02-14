
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_fast32_t ;
typedef int uint8_t ;
struct TYPE_6__ {int i_buffer; int i_flags; int i_dts; int i_pts; int * p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int const*,char*,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static block_t * FUNC_7( block_t * VAR_2 )
{

    block_t *VAR_3 = ((void*)0);

    FUNC_2(VAR_2->i_buffer <= VAR_1);

    if (VAR_2->i_buffer < 8)
        goto out;

    uint_fast32_t VAR_4 = FUNC_1(VAR_2->p_buffer) - 8;
    if (VAR_4 > VAR_2->i_buffer)
        goto out;

    const uint8_t *VAR_5 = VAR_2->p_buffer + 8;
    if (FUNC_5(VAR_5 - 4, "cdat", 4) != 0)
        goto out;

    VAR_2->p_buffer += VAR_4;
    VAR_2->i_buffer -= VAR_4;
    VAR_4 &= ~1;


    uint_fast32_t VAR_6 = 0;
    const uint8_t *VAR_7;

    if (VAR_2->i_buffer >= 8) {
        size_t VAR_8 = FUNC_1(VAR_2->p_buffer) - 8;

        if (VAR_8 <= VAR_2->i_buffer) {
            VAR_7 = VAR_2->p_buffer + 8;

            if (FUNC_5(VAR_7 - 4, "cdt2", 4) == 0)
                VAR_6 = VAR_8 & ~1;
        }
    }

    VAR_3 = FUNC_3((VAR_4 + VAR_6) / 2 * 3);
    if (FUNC_6(VAR_3 == ((void*)0)))
        goto out;

    uint8_t *VAR_9 = VAR_3->p_buffer;

    while (VAR_4 > 0) {
         *(VAR_9++) = FUNC_0(0);
         *(VAR_9++) = *(VAR_5++);
         *(VAR_9++) = *(VAR_5++);
         VAR_4 -= 2;
    }

    while (VAR_6 > 0) {
         *(VAR_9++) = FUNC_0(0);
         *(VAR_9++) = *(VAR_7++);
         *(VAR_9++) = *(VAR_7++);
         VAR_6 -= 2;
    }

    VAR_3->i_pts = VAR_2->i_dts;
    VAR_3->i_flags = VAR_0;
out:
    FUNC_4( VAR_2 );
    return VAR_3;
}
