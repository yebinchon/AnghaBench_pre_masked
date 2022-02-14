
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opacity; } ;
typedef TYPE_1__ vbi_char ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0( vbi_char *VAR_1, int VAR_2, int VAR_3)
{
    for ( int VAR_4 = VAR_2 * VAR_3 - 1; VAR_4 >= 0; VAR_4-- )
    {
        if (VAR_1[VAR_4].opacity != VAR_0)
        {
            return VAR_4 / VAR_3;
        }
    }

    return -1;
}
