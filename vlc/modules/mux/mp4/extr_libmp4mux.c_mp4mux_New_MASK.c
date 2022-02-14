
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_minor; scalar_t__ i_major; int extra; } ;
struct TYPE_6__ {int options; TYPE_1__ brands; int tracks; } ;
typedef TYPE_2__ mp4mux_handle_t ;
typedef enum mp4mux_options { ____Placeholder_mp4mux_options } mp4mux_options ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

mp4mux_handle_t * FUNC_3(enum mp4mux_options VAR_0)
{
    mp4mux_handle_t *VAR_1 = FUNC_1(sizeof(*VAR_1));
    FUNC_2(&VAR_1->tracks);
    FUNC_0(VAR_1->brands.extra);
    VAR_1->brands.i_major = 0;
    VAR_1->brands.i_minor = 0;
    VAR_1->options = VAR_0;
    return VAR_1;
}
