
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_12__ {int p_fifo_cmd; } ;
typedef TYPE_2__ vod_sys_t ;
struct TYPE_13__ {int i_type; int psz_arg; int p_media; } ;
typedef TYPE_3__ rtsp_cmd_t ;
typedef int cmd ;
struct TYPE_14__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;



 int VAR_0 ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void* FUNC_9( void *VAR_1 )
{
    vod_t *VAR_2 = (vod_t*)VAR_1;
    vod_sys_t *VAR_3 = VAR_2->p_sys;

    for( ;; )
    {
        block_t *VAR_4 = FUNC_2( VAR_3->p_fifo_cmd );
        rtsp_cmd_t VAR_5;

        if( !VAR_4 )
            break;

        int VAR_6 = FUNC_7 ();
        FUNC_5( &VAR_5, VAR_4->p_buffer, sizeof(VAR_5) );
        FUNC_3( VAR_4 );


        switch( VAR_5.i_type )
        {
        case 130:
            FUNC_1(VAR_2, VAR_5.p_media, VAR_5.psz_arg);
            break;
        case 129:
            FUNC_0(VAR_2, VAR_5.p_media);
            break;
        case 128:
            FUNC_8( VAR_2, VAR_5.p_media, VAR_5.psz_arg, VAR_0 );
            break;

        default:
            break;
        }

        FUNC_4( VAR_5.psz_arg );
        FUNC_6 (VAR_6);
    }

    return ((void*)0);
}
