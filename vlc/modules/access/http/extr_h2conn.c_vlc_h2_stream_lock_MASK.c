
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_h2_stream {int interrupted; TYPE_1__* conn; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vlc_h2_stream*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vlc_h2_stream *VAR_1)
{
    VAR_1->interrupted = 0;


    FUNC_0(VAR_0, VAR_1);
    FUNC_1(&VAR_1->conn->lock);
}
