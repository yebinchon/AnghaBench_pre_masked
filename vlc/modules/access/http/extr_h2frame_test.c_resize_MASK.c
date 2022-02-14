
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_frame {size_t* data; } ;



__attribute__((used)) static struct vlc_h2_frame *FUNC_0(struct vlc_h2_frame *VAR_0, size_t VAR_1)
{
    VAR_0->data[0] = VAR_1 >> 16;
    VAR_0->data[1] = VAR_1 >> 8;
    VAR_0->data[2] = VAR_1;
    return VAR_0;
}
