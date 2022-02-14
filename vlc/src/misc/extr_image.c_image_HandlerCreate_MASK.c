
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int outfifo; int pf_convert; int pf_write_url; int pf_write; int pf_read_url; int pf_read; int * p_parent; } ;
typedef TYPE_1__ image_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 () ;

image_handler_t *FUNC_2( vlc_object_t *VAR_5 )
{
    image_handler_t *VAR_6 = FUNC_0( 1, sizeof(image_handler_t) );
    if( !VAR_6 )
        return ((void*)0);

    VAR_6->p_parent = VAR_5;

    VAR_6->pf_read = VAR_1;
    VAR_6->pf_read_url = VAR_2;
    VAR_6->pf_write = VAR_3;
    VAR_6->pf_write_url = VAR_4;
    VAR_6->pf_convert = VAR_0;

    VAR_6->outfifo = FUNC_1();

    return VAR_6;
}
