
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_frame {int* data; } ;


 int VAR_0 ;

__attribute__((used)) static struct vlc_h2_frame *FUNC_0(struct vlc_h2_frame *VAR_1)
{
    VAR_1->data[5] = (VAR_0 >> 24) & 0xff;
    VAR_1->data[6] = (VAR_0 >> 16) & 0xff;
    VAR_1->data[7] = (VAR_0 >> 8) & 0xff;
    VAR_1->data[8] = VAR_0 & 0xff;
    return VAR_1;
}
