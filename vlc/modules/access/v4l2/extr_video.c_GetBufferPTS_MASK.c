
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct v4l2_buffer {int flags; int timestamp; } ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

vlc_tick_t FUNC_2 (const struct v4l2_buffer *VAR_1)
{
    vlc_tick_t VAR_2;

    switch (VAR_1->flags & VAR_0)
    {
        case 129:
            VAR_2 = FUNC_0( &VAR_1->timestamp );
            break;
        case 128:
        default:
            VAR_2 = FUNC_1 ();
            break;
    }
    return VAR_2;
}
