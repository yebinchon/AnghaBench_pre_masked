
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int libvlc_int_t ;
struct TYPE_5__ {int ref_count; int instance_lock; int * p_callback_list; int * p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,char const**) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

libvlc_instance_t * FUNC_9( int VAR_0, const char *const *VAR_1 )
{
    FUNC_5 ();

    libvlc_instance_t *VAR_2 = FUNC_6 (sizeof (*VAR_2));
    if (FUNC_7(VAR_2 == ((void*)0)))
        return ((void*)0);

    const char *VAR_3[VAR_0 + 2];
    VAR_3[0] = "libvlc";
    for( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
         VAR_3[VAR_4 + 1] = VAR_1[VAR_4];
    VAR_3[VAR_0 + 1] = ((void*)0);

    libvlc_int_t *VAR_5 = FUNC_1();
    if (FUNC_7 (VAR_5 == ((void*)0)))
        goto error;

    if (FUNC_3( VAR_5, VAR_0 + 1, VAR_3 ))
    {
        FUNC_2( VAR_5 );
        goto error;
    }

    VAR_2->p_libvlc_int = VAR_5;
    VAR_2->ref_count = 1;
    VAR_2->p_callback_list = ((void*)0);
    FUNC_8(&VAR_2->instance_lock);
    return VAR_2;

error:
    FUNC_0 (VAR_2);
    FUNC_4 ();
    return ((void*)0);
}
