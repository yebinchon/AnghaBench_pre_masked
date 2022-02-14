
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_thread_t ;
struct TYPE_4__ {int finished; int data; void* (* entry ) (int ) ;} ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(void *VAR_2)
{
    vlc_thread_t VAR_3 = VAR_2;
    void *VAR_4;

    FUNC_2(VAR_0, VAR_3);
    VAR_1 = VAR_3;
    VAR_4 = VAR_3->entry(VAR_3->data);
    FUNC_1();
    FUNC_3(&VAR_3->finished);

    return VAR_4;
}
