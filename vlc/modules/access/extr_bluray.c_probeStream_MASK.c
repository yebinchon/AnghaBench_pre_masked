
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 size_t FUNC_1 (int ,scalar_t__ const**,int) ;

__attribute__((used)) static int FUNC_2(demux_t *VAR_3)
{

    bool VAR_4 = 0;
    FUNC_0( VAR_3->s, VAR_0, &VAR_4 );
    if (!VAR_4) {
        return VAR_1;
    }


    size_t VAR_5;
    const uint8_t *VAR_6;
    VAR_5 = FUNC_1( VAR_3->s, &VAR_6, 2048 );
    if( VAR_5 != 2048 ) {
        return VAR_1;
    }
    while (VAR_5 > 0) {
        if (VAR_6[ --VAR_5 ]) {
            return VAR_1;
        }
    }

    return VAR_2;
}
