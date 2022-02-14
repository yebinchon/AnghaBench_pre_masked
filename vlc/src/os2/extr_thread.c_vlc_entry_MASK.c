
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_thread {int killable; int done_event; int data; int (* entry ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct vlc_thread*) ;
 int FUNC_3 (int ,struct vlc_thread*) ;

__attribute__((used)) static void FUNC_4( void *VAR_1 )
{
    struct vlc_thread *VAR_2 = VAR_1;

    FUNC_3 (VAR_0, VAR_2);
    VAR_2->killable = 1;
    VAR_2->data = VAR_2->entry (VAR_2->data);
    FUNC_0( VAR_2->done_event );
    FUNC_2 (VAR_2);
}
