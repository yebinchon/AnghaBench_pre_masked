
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int i_format; } ;
struct TYPE_21__ {TYPE_2__ audio; } ;
struct TYPE_23__ {TYPE_1__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_24__ {TYPE_5__* p_out_buf; int i_out_offset; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_25__ {int i_buffer; } ;
typedef TYPE_5__ block_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static block_t *FUNC_9( filter_t *VAR_0, block_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    block_t *VAR_3 = ((void*)0);

    int VAR_4;
    switch( VAR_0->fmt_in.audio.i_format )
    {
        case 133:
            VAR_4 = FUNC_4( VAR_0, VAR_1 );
            break;
        case 130:
            VAR_4 = FUNC_7( VAR_0, VAR_1 );
            break;
        case 129:
        case 128:
            VAR_4 = FUNC_8( VAR_0, VAR_1 );
            break;
        case 131:
            VAR_4 = FUNC_6( VAR_0, VAR_1 );
            break;
        case 132:
            VAR_4 = FUNC_5( VAR_0, VAR_1 );
            break;
        default:
            FUNC_3();
    }

    switch( VAR_4 )
    {
        case 134:
            FUNC_1( VAR_2->p_out_buf->i_buffer == VAR_2->i_out_offset );
            VAR_3 = VAR_2->p_out_buf;
            VAR_2->p_out_buf = ((void*)0);
            break;
        case 135:
            break;
        case 136:
            FUNC_0( VAR_0 );
            break;
    }

    FUNC_2( VAR_1 );
    return VAR_3;
}
