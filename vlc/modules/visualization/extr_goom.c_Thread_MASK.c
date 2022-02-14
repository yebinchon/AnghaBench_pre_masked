
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ date; TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
typedef int int16_t ;
struct TYPE_9__ {int i_width; int i_height; } ;
struct TYPE_11__ {int b_exit; int i_speed; int p_vout; TYPE_2__ fmt; int lock; int wait; int date; } ;
typedef TYPE_4__ goom_thread_t ;
typedef int date_t ;
struct TYPE_8__ {int p_pixels; } ;
typedef int PluginInfo ;


 scalar_t__ FUNC_0 (int *,int*,int *,int *,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int) ;
 int * FUNC_4 (int *,int **,int ,double,int *,int *) ;
 int FUNC_5 (int ,int *,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 TYPE_3__* FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_3__*) ;

__attribute__((used)) static void *FUNC_15( void *VAR_2 )
{
    goom_thread_t *VAR_3 = (goom_thread_t*)VAR_2;
    date_t VAR_4;
    int16_t VAR_5[2][512];
    int VAR_6 = 0, VAR_7 = 0;
    PluginInfo *VAR_8;
    int VAR_9 = FUNC_11 ();

    VAR_8 = FUNC_3( VAR_3->fmt.i_width, VAR_3->fmt.i_height );

    for( ;; )
    {
        uint32_t *VAR_10;
        picture_t *VAR_11;
        FUNC_8( &VAR_3->lock );
        if( !VAR_3->b_exit &&
            FUNC_0( (int16_t *)VAR_5, &VAR_6,
                        &VAR_4, &VAR_3->date, VAR_3 ) != VAR_1 )
            FUNC_7( &VAR_3->wait, &VAR_3->lock );
        bool VAR_12 = VAR_3->b_exit;
        FUNC_9( &VAR_3->lock );

        if( VAR_12 )
            break;


        if( VAR_3->i_speed && (++VAR_7 % (VAR_3->i_speed+1)) ) continue;


        if( FUNC_1( &VAR_4 ) + VAR_0 <= FUNC_12() ) continue;

        VAR_10 = FUNC_4( VAR_8, VAR_5, 0, 0.0,
                             ((void*)0), ((void*)0) );

        VAR_11 = FUNC_13( VAR_3->p_vout );
        if( FUNC_6(VAR_11 == ((void*)0)) )
            continue;

        FUNC_5( VAR_11->p[0].p_pixels, VAR_10,
                VAR_3->fmt.i_width * VAR_3->fmt.i_height * 4 );

        VAR_11->date = FUNC_1( &VAR_4 ) + VAR_0;
        FUNC_14( VAR_3->p_vout, VAR_11 );
    }

    FUNC_2( VAR_8 );
    FUNC_10 (VAR_9);
    return ((void*)0);
}
