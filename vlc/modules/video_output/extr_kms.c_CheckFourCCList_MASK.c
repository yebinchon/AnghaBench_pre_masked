
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ drm; int present; scalar_t__ plane_id; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_1, uint32_t VAR_2)
{
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        if (VAR_0[VAR_3].drm == VAR_1) {
            if (VAR_0[VAR_3].present)



                break;

            VAR_0[VAR_3].present = 1;
            VAR_0[VAR_3].plane_id = VAR_2;
            break;
        }
    }
}
