
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_10__ {int i_instance; TYPE_3__** instance; } ;
typedef TYPE_1__ vlm_media_sys_t ;
struct TYPE_11__ {int f_rate; int b_paused; int d_position; void* i_length; void* i_time; int psz_name; } ;
typedef TYPE_2__ vlm_media_instance_t ;
struct TYPE_12__ {int player; scalar_t__ psz_name; } ;
typedef TYPE_3__ vlm_media_instance_sys_t ;
typedef int int64_t ;


 int FUNC_0 (int,TYPE_2__**,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__**) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 TYPE_2__* FUNC_12 () ;

__attribute__((used)) static int FUNC_13( vlm_t *VAR_2, int64_t VAR_3, vlm_media_instance_t ***VAR_4, int *VAR_5 )
{
    vlm_media_sys_t *VAR_6 = FUNC_11( VAR_2, VAR_3 );
    vlm_media_instance_t **VAR_7;
    int VAR_8;

    if( !VAR_6 )
        return VAR_0;

    FUNC_1( VAR_8, VAR_7 );
    for( int VAR_9 = 0; VAR_9 < VAR_6->i_instance; VAR_9++ )
    {
        vlm_media_instance_sys_t *VAR_10 = VAR_6->instance[VAR_9];
        vlm_media_instance_t *VAR_11 = FUNC_12();
        if( VAR_10->psz_name )
            VAR_11->psz_name = FUNC_3( VAR_10->psz_name );
        FUNC_9(VAR_10->player);
        VAR_11->i_time = FUNC_2(FUNC_7(VAR_10->player));
        VAR_11->i_length = FUNC_2(FUNC_4(VAR_10->player));
        VAR_11->d_position = FUNC_5(VAR_10->player);
        VAR_11->b_paused = FUNC_8(VAR_10->player);
        VAR_11->f_rate = FUNC_6(VAR_10->player);
        FUNC_10(VAR_10->player);

        FUNC_0( VAR_8, VAR_7, VAR_11 );
    }
    *VAR_4 = VAR_7;
    *VAR_5 = VAR_8;
    return VAR_1;
}
