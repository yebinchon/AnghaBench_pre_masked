
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_header; int lock; int * p_header; } ;
typedef TYPE_1__ httpd_stream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

int FUNC_5(httpd_stream_t *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    FUNC_2(&VAR_1->lock);
    FUNC_0(VAR_1->p_header);
    VAR_1->p_header = ((void*)0);

    VAR_1->i_header = VAR_3;
    if (VAR_3 > 0) {
        VAR_1->p_header = FUNC_4(VAR_3);
        FUNC_1(VAR_1->p_header, VAR_2, VAR_3);
    }
    FUNC_3(&VAR_1->lock);

    return VAR_0;
}
