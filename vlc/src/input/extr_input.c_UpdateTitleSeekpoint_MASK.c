
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {TYPE_1__* master; } ;
struct TYPE_3__ {int i_title_end; int i_title_offset; int i_seekpoint_end; int i_seekpoint_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( input_thread_t *VAR_2,
                                 int VAR_3, int VAR_4 )
{
    int VAR_5 = FUNC_0(VAR_2)->master->i_title_end -
                        FUNC_0(VAR_2)->master->i_title_offset;
    int VAR_6 = FUNC_0(VAR_2)->master->i_seekpoint_end -
                            FUNC_0(VAR_2)->master->i_seekpoint_offset;

    if( VAR_5 >= 0 && VAR_6 >= 0 )
    {
        if( VAR_3 > VAR_5 ||
            ( VAR_3 == VAR_5 && VAR_4 > VAR_6 ) )
            return VAR_0;
    }
    else if( VAR_6 >= 0 )
    {
        if( VAR_4 > VAR_6 )
            return VAR_0;
    }
    else if( VAR_5 >= 0 )
    {
        if( VAR_3 > VAR_5 )
            return VAR_0;
    }
    return VAR_1;
}
