
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_3__ {int timestamp; int public_key; } ;
typedef TYPE_1__ Last_Pinged ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int const*,int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int const*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(Last_Pinged *VAR_3, uint8_t *VAR_4, const uint8_t *VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        if (!FUNC_0(VAR_3[VAR_6].timestamp, VAR_1))
            if (FUNC_2(VAR_3[VAR_6].public_key, VAR_5) == 0)
                return 0;
    }

    FUNC_1(VAR_3[*VAR_4 % VAR_0].public_key, VAR_5, VAR_2);
    VAR_3[*VAR_4 % VAR_0].timestamp = FUNC_3();
    ++*VAR_4;
    return 1;
}
