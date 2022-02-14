
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_frame {int dummy; } ;
struct vlc_h2_conn {int out; int opaque; } ;


 int FUNC_0 (int ,struct vlc_h2_frame*,char*) ;
 int FUNC_1 (int ,struct vlc_h2_frame*) ;

__attribute__((used)) static int FUNC_2(struct vlc_h2_conn *VAR_0, struct vlc_h2_frame *VAR_1)
{
    FUNC_0(VAR_0->opaque, VAR_1, "out");
    return FUNC_1(VAR_0->out, VAR_1);
}
