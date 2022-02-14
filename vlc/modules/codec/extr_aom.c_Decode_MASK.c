
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_5__ {int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(decoder_t *VAR_3, block_t *VAR_4)
{
    if (VAR_4 && VAR_4->i_flags & (VAR_0))
    {
        FUNC_2(VAR_4);
        return VAR_2;
    }

    int VAR_5 = FUNC_1(VAR_3, VAR_4);

    FUNC_0(VAR_3, VAR_1);

    return VAR_5;
}
