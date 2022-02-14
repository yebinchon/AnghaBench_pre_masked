
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int i_flags; int i_pts; int i_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sout_stream_id_sys_t *VAR_3, block_t *VAR_4)
{
    bool VAR_5 = (VAR_4->i_flags & VAR_0) != 0;

    VAR_4 = FUNC_0(VAR_4, 12, VAR_4->i_buffer);
    if (FUNC_3(VAR_4 == ((void*)0)))
        return VAR_1;

    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_4->i_pts);
    FUNC_2(VAR_3, VAR_4);
    return VAR_2;
}
